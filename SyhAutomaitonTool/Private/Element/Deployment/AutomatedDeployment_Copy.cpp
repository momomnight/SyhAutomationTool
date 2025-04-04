#include "Element/Deployment/AutomatedDeployment_Copy.h"
#include "Containers\Map.h"
#include "GenericPlatform\GenericPlatformFile.h"
#include "SyhAutomationToolCommon.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


struct FOperatePath_DeploymentCopy : public SyhAutomationToolCommon::FProcessPath_Base
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
	bool Result = AutomationCommandLine::CommandLineArgumentToAutomatedConfig<OwnConfig>(GetSelfConfig<OwnConfig>());
	if (!Result)
	{
		SyhLogError(TEXT("BuildParameter is failure to execute. Locate in %s"), GetCommandName<Self>());
	}
	return Result;
}




bool FAutomatedCode_Deployment_Copy::Execute()
{
	SyhLogDisplay(TEXT("Execute the command of DeploymentCopy"));

	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	if (SelfConfig->Files.IsEmpty())
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("There are no files that need to be copied."));
		return false;
	}

	TMap<FString, FString> Content;
	SyhAutomationToolCommon::PathFilter<
		SyhAutomationToolCommon::FPreprocessPath_PathExists,
		SyhAutomationToolCommon::FPreprocessPath_DeletePath,
		FOperatePath_DeploymentCopy
		>(Content, SelfConfig->Files);

	SyhLogDisplay(TEXT("----------Start Deployment----------"));


	for (auto& SubTemp : Content)
	{
		FMoveToFileCopyProgress Progress;
		Progress.Src = SubTemp.Key;
		Progress.Dest = SubTemp.Value;
			
		uint32 Return = IFileManager::Get().Copy(*SubTemp.Value, *SubTemp.Key, true, false, false, &Progress);
		
		if (Return == COPY_OK)
		{
			SyhLogDisplay(TEXT("[%s]->[%s]"), *SubTemp.Key, *SubTemp.Value);
			if (SelfConfig->bDeleteMovedFiles)
			{
				if (IFileManager::Get().Delete(*SubTemp.Key))
				{
					SyhLogDisplay(TEXT("Delete [%s]"),  *SubTemp.Key);
				}
				else
				{
					SyhLogError(TEXT("Failure to delete [%s]"), *SubTemp.Key);
				}
			}
		}
		else if (Return == COPY_Fail)
		{
			SyhLogError(TEXT("Failure to copy [%s] "), *SubTemp.Key);
		}
		else if (Return == COPY_Canceled)
		{
			SyhLogError(TEXT("Copying [%s] to [%s] is canceled."), *SubTemp.Key, *SubTemp.Value);
		}
		else
		{
			SyhLogError(TEXT("Unknown error"));
		}
		
		
	}

	SyhLogDisplay(TEXT("----------End Deployment----------"));
	return true;
}




#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT