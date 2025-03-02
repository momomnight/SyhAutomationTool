#include "Element/Deployment/AutomatedDeployment_Copy.h"
#include "SyhAutomationToolLog.h"
#include "Containers\Map.h"

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
	}

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

	if (!FParse::Bool(FCommandLine::Get(), TEXT("-Folder"), SelfConfig->bFolder))
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("-Folder was not found the value."));
		return false;
	}
	if (!FParse::Bool(FCommandLine::Get(), TEXT("-DeleteMovedFiles"), SelfConfig->bDeleteMovedFiles))
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("-DeleteMovedFiles was not found the value."));
		return false;
	}

	return true;
}

bool FAutomatedCode_Deployment_Copy::Execute()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	if (SelfConfig->Files.IsEmpty())
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("There are no files that need to be copied."));
		return false;
	}

	for (auto& Temp : SelfConfig->Files)
	{
		FString Source = Temp.Key;
		FString Destination = Temp.Value;

		//是否存在命令替换
		HandleTimePath(Source);
		HandleTimePath(Destination);

		TMap<FString, FString> Content;
		
		if (SelfConfig->bFolder)
		{
			if (!IFileManager::Get().DirectoryExists(*Source))
			{
				UE_LOG(SyhAutomaitonToolLog, Error, TEXT("No exist the source folder : %s."), *Source);
				return false;
			}

			if (IFileManager::Get().DirectoryExists(*Destination))
			{
				if (IFileManager::Get().DeleteDirectory(*Destination))
				{
					UE_LOG(SyhAutomaitonToolLog, Log, TEXT("Exist the destination folder : %s. Deleted the folder."), *Destination);
				}
				else
				{
					UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Exist the destination folder : %s. Failure to deleted the folder."), *Destination);
					return false;
				}
			}

			TArray<FString> FoundFiles;
			IFileManager::Get().FindFilesRecursive(FoundFiles, *Source, TEXT("*"), true, false);

			for (auto& SubTemp : FoundFiles)
			{
				FString LocalFile = SubTemp;
				SubTemp.RemoveFromStart(Source);
				Content.Add(LocalFile, Destination + SubTemp);
			}

		}
		else
		{
			if (!IFileManager::Get().FileExists(*Source))
			{
				UE_LOG(SyhAutomaitonToolLog, Error, TEXT("No exist the source file : %s."), *Source);
				return false;
			}

			if (IFileManager::Get().FileExists(*Destination))
			{
				if (IFileManager::Get().Delete(*Destination))
				{
					UE_LOG(SyhAutomaitonToolLog, Log, TEXT("Exist the destination file : %s. Deleted the file."), *Destination);
				}
				else
				{
					UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Exist the destination file : %s. Failure to deleted the file."), *Destination);
					return false;
				}		
			}
			Content.Add(Source, Destination);
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
		
		
		}

		UE_LOG(SyhAutomaitonToolLog, Display, TEXT("----------Start Deployment----------"));

	}

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