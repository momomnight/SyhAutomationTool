#include "Element/Deployment/AutomatedDeployment_Copy.h"
#include "SyhAutomationToolLog.h"
#include "Containers\Map.h"
#include "GenericPlatform\GenericPlatformFile.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


struct FMoveToFileCopyProgress : public FCopyProgress
{
	FString Src;
	FString Dest;

	virtual bool Poll(float Fraction) override
	{
		UE_LOG(SyhAutomaitonToolLog, Display, TEXT("[%.f%%][%s]->[%s]."), Fraction * 100.f, *Src, *Dest);
		return true;
	}

	virtual ~FMoveToFileCopyProgress(){}
};

void FAutomatedCode_Deployment_Copy::Init()
{
	CreateConfig<OwnConfig>();
}

bool FAutomatedCode_Deployment_Copy::BuildParameter(const FString& InJsonStr)
{
	return AutomationJson::JsonStringToAutomatedConfig(InJsonStr, *GetSelfConfig<OwnConfig>());
}

bool FAutomatedCode_Deployment_Copy::BuildParameter()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	if (!FParse::Bool(FCommandLine::Get(), TEXT("-DeleteMovedFiles="), SelfConfig->bDeleteMovedFiles))
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("-DeleteMovedFiles= was not found the value."));
		return false;
	}

	TArray<FString> Source;
	TArray<FString> Destination;

	if (!ParseArrayStrings(TEXT("-Source="), Source) || !ParseArrayStrings(TEXT("-Destination="), Destination))
	{
		return false;
	}
	else
	{
		if (Source.Num() == Destination.Num())
		{
			for (int32 i = 0; i < Source.Num(); i++)
			{
				FPaths::NormalizeFilename(Source[i]);
				FPaths::RemoveDuplicateSlashes(Source[i]);
				FPaths::NormalizeFilename(Destination[i]);
				FPaths::RemoveDuplicateSlashes(Destination[i]);
				SelfConfig->Files.Add(Source[i], Destination[i]);
			}
			return true;
		}
		else
		{
			UE_LOG(SyhAutomaitonToolLog, Error, TEXT("The number of the source path is not equal to the number of the destination path."));
			return false;
		}
	}
}

bool FAutomatedCode_Deployment_Copy::Execute()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	if (SelfConfig->Files.IsEmpty())
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("There are no files that need to be copied."));
		return false;
	}

	TMap<FString, FString> Content;

	//检查路径，并添加所有文件的具体路径
	for (auto& TempPath : SelfConfig->Files)
	{
		FString SourcePath = TempPath.Key;
		FString DestinationPath = TempPath.Value;
		
		//是否存在命令替换
		HandleTimePath(SourcePath);
		HandleTimePath(DestinationPath);
		FFileStatData SourceFileStatData = IFileManager::Get().GetStatData(*SourcePath);
		FFileStatData DestinationFileStatData = IFileManager::Get().GetStatData(*DestinationPath);

		//原文件需要存在
		//目录路径如果存在，则删除
		if (!SourceFileStatData.bIsValid)
		{
			UE_LOG(SyhAutomaitonToolLog, Error, TEXT("No exist the source folder : %s."), *SourcePath);
			return false;
		}

		if (SourceFileStatData.bIsDirectory)
		{
			//1.txt文件夹和1.txt文件属于重名
			if (!DeletePath(DestinationFileStatData, DestinationPath))
			{
				//无法删除路径
				return false;
			}

			TArray<FString> FoundFiles;
			IFileManager::Get().FindFilesRecursive(FoundFiles, *SourcePath, TEXT("*"), true, false);

			for (auto& SubTemp : FoundFiles)
			{
				FString LocalFile = SubTemp;
				SubTemp.RemoveFromStart(SourcePath);
				Content.Add(LocalFile, DestinationPath + SubTemp);
			}
		}
		else
		{
			if (!DeletePath(DestinationFileStatData, DestinationPath))
			{
				//无法删除路径
				return false;
			}
			Content.Add(SourcePath, DestinationPath);
		}
	}


	UE_LOG(SyhAutomaitonToolLog, Display, TEXT("----------Start Deployment----------"));


	for (auto& SubTemp : Content)
	{
		FMoveToFileCopyProgress Progress;
		Progress.Src = SubTemp.Key;
		Progress.Dest = SubTemp.Value;
			
		uint32 Return = IFileManager::Get().Copy(*SubTemp.Value, *SubTemp.Key, true, false, false, &Progress);
		
		if (Return == COPY_OK)
		{
			UE_LOG(SyhAutomaitonToolLog, Log, TEXT("[%s]->[%s]"), *SubTemp.Key, *SubTemp.Value);
			if (SelfConfig->bDeleteMovedFiles)
			{
				if (IFileManager::Get().Delete(*SubTemp.Key))
				{
					UE_LOG(SyhAutomaitonToolLog, Log, TEXT("Delete [%s]"),  *SubTemp.Key);
				}
				else
				{
					UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Failure to delete [%s]"), *SubTemp.Key);
				}
			}
		}
		else if (Return == COPY_Fail)
		{
			UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Failure to copy [%s] "), *SubTemp.Key);
		}
		else if (Return == COPY_Canceled)
		{
			UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Copying [%s] to [%s] is canceled."), *SubTemp.Key, *SubTemp.Value);
		}
		else
		{
			UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Unknown error"));
		}
		
		
	}

	UE_LOG(SyhAutomaitonToolLog, Display, TEXT("----------End Deployment----------"));
	return true;
}


bool FAutomatedCode_Deployment_Copy::Exit()
{
	return true;
}




#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT