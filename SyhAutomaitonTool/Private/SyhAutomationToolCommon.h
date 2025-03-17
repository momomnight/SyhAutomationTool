#pragma once
#include "CoreMinimal.h"
#include "SyhAutomationToolLog.h"
#include "SyhAutomationToolType.h"

namespace SimpleAutomationToolCommon
{
	//打包的文件路径，以时间为名
	extern class FString PackagingSaveFileName;

	//从协议到去掉协议前缀的字符串
	FString CommandProtocolToString(ECommandProtocol InProtocol);
	//从去掉协议前缀的字符串到协议
	ECommandProtocol StringToCommandProtocol(const FString& InShortCommandName);

	//xxx1&&xxx2
	bool ParseStrings(const FString& InKey, TArray<FString>& InArray, bool bPath);

	//xxx1||yyy1&&xxx2||yyy2
	bool ParseStrings(const FString& InKey, TMap<FString, FString>& InArray, bool bPath);

	bool DeleteFile(const FString& InPath);
	bool DeleteDirectory(const FString& InPath);
	bool DeletePath(const struct FFileStatData& InFileStatData, const FString& InPath);
	bool DeletePath(const FString& InPath);

	//String(xxxx xxxx)-> "xxxx xxxx"
	//对于.bat文件，使用"xxx/xxx xxx/xx"就可以读取
	//对于.sh文件
	void AdaptCommandArgsStringWithSpace(FString& InKey);

	void GetBatPathString(FString& InPath);

	FString GetMatchKey(const FString& InKey) { return FString(TEXT("-") + InKey + TEXT("=")); }

	bool IsMatchKey(const FString& InKey);

	void HandleTimePath(FString& InPath);

	bool PathExists(const FString& InPath, bool bFolder)
	{
		if(bFolder)
		{
			return IFileManager::Get().DirectoryExists(*InPath);
		}
		else
		{
			return IFileManager::Get().FileExists(*InPath);
		}
	}

	bool PathExists(const FString& InPath)
	{
		FFileStatData FileStatData = IFileManager::Get().GetStatData(*InPath);
		return FileStatData.bIsValid;
	}

	template <uint8 Index>
	constexpr const TCHAR* GetCommandName()
	{
		return FCommandProtocolRelated::CommandName[Index];
	}

	template<class Type> struct ReturnTypeTrait	{ using ReturnType = void; using ParameterType = void;};
	template <> struct ReturnTypeTrait<ECommandProtocol>	{ using ReturnType = FString;  using ParameterType = ECommandProtocol;};
	template <> struct ReturnTypeTrait<ESimpleOSSCommand>	{ using ReturnType = FString;  using ParameterType = ESimpleOSSCommand;};
	template <> struct ReturnTypeTrait<FString>				{ using ReturnType = const FString&;  using ParameterType = const FString&;};

	template<class Type>
	typename ReturnTypeTrait<Type>::ReturnType ToString(typename ReturnTypeTrait<Type>::ParameterType Param);

	template<>
	typename ReturnTypeTrait<ECommandProtocol>::ReturnType ToString<ECommandProtocol>(typename ReturnTypeTrait<ECommandProtocol>::ParameterType InCommandProtocol)
	{
		return CommandProtocolToString(InCommandProtocol);
	}

	template<>
	typename ReturnTypeTrait<ESimpleOSSCommand>::ReturnType  ToString<ESimpleOSSCommand>(typename ReturnTypeTrait<ESimpleOSSCommand>::ParameterType InOSSCommand)
	{
		return SimpleOSSCommand::ToOSSCommandString(InOSSCommand);
	}

	template<>
	typename ReturnTypeTrait<FString>::ReturnType ToString<FString>(typename ReturnTypeTrait<FString>::ParameterType Param)
	{
		return Param;
	}

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	struct FOperateFileOrDirectory
	{
		virtual bool operator()(const FFileStatData& FileStatData, const FString& InPath) = 0;
		virtual ~FOperateFileOrDirectory() {}
	};

	struct FOperateFileOrDirectory_Nothing : public FOperateFileOrDirectory
	{
		virtual bool operator()(const FFileStatData& FileStatData, const FString& InPath)
		{
			return true;
		}
	};

	struct FOperateFileOrDirectory_DeletePath : public FOperateFileOrDirectory
	{
		virtual bool operator()(const FFileStatData& FileStatData, const FString& InPath)
		{
			return DeletePath(FileStatData, InPath);
		}
	};

	struct FOperateFileOrDirectory_PathExists : public FOperateFileOrDirectory
	{
		virtual bool operator()(const FFileStatData& FileStatData, const FString& InPath)
		{
			if (!FileStatData.bIsValid)
			{
				UE_LOG(SyhAutomaitonToolLog, Error, TEXT("No exist the source folder : %s."), *InPath);
			}
			return FileStatData.bIsValid;
		}
	};
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	struct FOperatePath
	{
		//对于原路径为文件路径的操作
		virtual void operator()(TMap<FString, FString>& OutContent, const FString& SourcePath, const FString& TargetPath) = 0;

		//对于原路径为文件夹的操作
		virtual void operator()(TMap<FString, FString>& OutContent, const FString& InPath, const FString& SourcePath, const FString& TargetPath) = 0;
		virtual ~FOperatePath() {}
	};



	////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	template <class FOperateSourcePath, class FOperateTargetPath, class FOperateFilePath>
	bool PathFilter(TMap<FString, FString>& OutContent, const TMap<FString, FString>& InContent)
	{
		FOperateSourcePath HandleSourcePath;
		FOperateTargetPath HandleTargetPath;
		FOperateFilePath HandleFilePath;
		//收集所有路径
		for (auto& TempPath : InContent)
		{
			FString SourcePath = TempPath.Key;
			FString TargetPath = TempPath.Value;

			//是否存在命令替换
			HandleTimePath(SourcePath);
			HandleTimePath(TargetPath);

			FFileStatData SourceFileStatData = IFileManager::Get().GetStatData(*SourcePath);
			FFileStatData TargetFileStatData = IFileManager::Get().GetStatData(*TargetPath);

			//筛选前，给予一次对第一个路径操作的机会
			if (!HandleSourcePath(SourceFileStatData, SourcePath))
			{
				return false;
			}
			//筛选前，给予一次对第二个路径操作的机会
			if (!HandleTargetPath(TargetFileStatData, TargetPath))
			{
				return false;
			}

			if (SourceFileStatData.bIsDirectory)
			{
				TArray<FString> FoundFiles;
				IFileManager::Get().FindFilesRecursive(FoundFiles, *SourcePath, TEXT("*"), true, false);
				for (auto& SubTemp : FoundFiles)
				{
					HandleFilePath(OutContent, SubTemp, SourcePath, TargetPath);
				}
			}
			else
			{
				OutContent.Add(SourcePath, TargetPath);
				HandleFilePath(OutContent, SourcePath, TargetPath);
			}
		}
		return true;
	}
}
