#pragma once
#include "CoreMinimal.h"

//打包的文件路径，以时间为名
extern class FString PackagingSaveFileName;


//xxx1&&xxx2
bool ParseStrings(const FString& InKey, TArray<FString>& InArray, bool bPath);

//xxx1||yyy1&&xxx2||yyy2
bool ParseStrings(const FString& InKey, TMap<FString, FString>& InArray, bool bPath);

bool DeletePath(const struct FFileStatData& InFileStatData, const FString& InPath);

//String(xxxx xxxx)-> "xxxx xxxx"
//对于.bat文件，使用"xxx/xxx xxx/xx"就可以读取
//对于.sh文件
void AdaptCommandArgsStringWithSpace(FString& InKey);
void GetBatPathString(FString& InPath);
FString GetMatchKey(const FString& InKey) { return FString(TEXT("-") + InKey + TEXT("=")); }
bool IsMatchKey(const FString& InKey);

void HandleTimePath(FString& InPath);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct FOperateFileOrDirectory
{
	virtual bool operator()(const FFileStatData& FileStatData, const FString& InPath) = 0;
	virtual ~FOperateFileOrDirectory() {}
};

struct FOperateFileOrDirectory_DeletePath : public FOperateFileOrDirectory
{
	virtual bool operator()(const FFileStatData& FileStatData, const FString& InPath)
	{
		return DeletePath(FileStatData, InPath);
	}
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct FOperatePath
{
	virtual void operator()(TMap<FString, FString>& OutContent, const FString& SourcePath, const FString& TargetPath) = 0;
	virtual void operator()(TMap<FString, FString>& OutContent, const FString& InPath, const FString& SourcePath, const FString& TargetPath) = 0;
	virtual ~FOperatePath(){}
};



////////////////////////////////////////////////////////////////////////////////////////////////////////////////



template <class FOperateFileOrDirectory, class FOperateFilePath>
bool PathFilter(TMap<FString, FString>& OutContent, const TMap<FString, FString>& InContent)
{
	FOperateFileOrDirectory HandleDestinationFilePath;
	FOperateFilePath HandleFilePath;
	//收集所有路径
	for (auto& TempPath : InContent)
	{
		FString SourcePath = TempPath.Key;
		FString DestinationPath = TempPath.Value;

		//是否存在命令替换
		HandleTimePath(SourcePath);
		HandleTimePath(DestinationPath);

		FFileStatData SourceFileStatData = IFileManager::Get().GetStatData(*SourcePath);
		FFileStatData DestinationFileStatData = IFileManager::Get().GetStatData(*DestinationPath);

		//原文件需要存在
		if (!SourceFileStatData.bIsValid)
		{
			UE_LOG(SyhAutomaitonToolLog, Error, TEXT("No exist the source folder : %s."), *SourcePath);
			return false;
		}

		if (SourceFileStatData.bIsDirectory)
		{
			//1.txt文件夹和1.txt文件属于重名
			if (!HandleDestinationFilePath(DestinationFileStatData, DestinationPath))
			{
				//无法删除路径
				return false;
			}

			TArray<FString> FoundFiles;
			IFileManager::Get().FindFilesRecursive(FoundFiles, *SourcePath, TEXT("*"), true, false);
			for (auto& SubTemp : FoundFiles)
			{
				HandleFilePath(OutContent, SubTemp, SourcePath, DestinationPath);
			}
		}
		else
		{
			if (!HandleDestinationFilePath(DestinationFileStatData, DestinationPath))
			{
				//无法删除路径
				return false;
			}
			OutContent.Add(SourcePath, DestinationPath);
			HandleFilePath(OutContent, SourcePath, DestinationPath);
		}
	}
	return true;
}