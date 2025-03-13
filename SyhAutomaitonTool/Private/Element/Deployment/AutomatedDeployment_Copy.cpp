#include "Element/Deployment/AutomatedDeployment_Copy.h"
#include "SyhAutomationToolLog.h"
#include "Containers\Map.h"
#include "GenericPlatform\GenericPlatformFile.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


struct FOperatePath_DeploymentCopy : public FOperatePath
{
	virtual void operator()(TMap<FString, FString>& OutContent, const FString& SourcePath, const FString& TargetPath)
	{
		OutContent.Add(SourcePath, TargetPath);
	}
	virtual void operator()(TMap<FString, FString>& OutContent, const FString& InPath, const FString& SourcePath, const FString& TargetPath)
	{
		FString LocalFile = InPath;
		LocalFile.RemoveFromStart(SourcePath);
		OutContent.Add(SourcePath + LocalFile, TargetPath + LocalFile);
	}
};


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
}

bool FAutomatedCode_Deployment_Copy::BuildParameter(const FString& InJsonStr)
{
	return AutomationJson::JsonStringToAutomatedConfig(InJsonStr, *GetSelfConfig<OwnConfig>());
}

bool FAutomatedCode_Deployment_Copy::BuildParameter()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	bool Result = true;
	Result &= GetValueFromCommandLine(OwnConfig::RelatedString::DeleteMovedFiles_BooleanKey, SelfConfig->bDeleteMovedFiles);

	if (!Result)
	{
		FLogPrint::PrintError(TEXT("build parameter"), GetCommandName<Self>());
		return false;
	}

	TArray<FString> Source;
	TArray<FString> Destination;

	if (!ParseStrings(TEXT("-Source="), Source, true) || !ParseStrings(TEXT("-Destination="), Destination, true))
	{
		FLogPrint::PrintError(TEXT("build parameter"), GetCommandName<Self>());
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
			FLogPrint::PrintErrorCustom(TEXT("The number of the source path is not equal to the number of the destination path."));
			FLogPrint::PrintError(TEXT("build parameter"), GetCommandName<Self>());
			return false;
		}
	}
}




bool FAutomatedCode_Deployment_Copy::Execute()
{
	UE_LOG(SyhAutomaitonToolLog, Display, TEXT("Execute the command of DeploymentCopy"));
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	if (SelfConfig->Files.IsEmpty())
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("There are no files that need to be copied."));
		return false;
	}

	TMap<FString, FString> Content;
	PathFilter<FOperateFileOrDirectory_DeletePath, FOperatePath_DeploymentCopy>(Content, SelfConfig->Files);

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




#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT