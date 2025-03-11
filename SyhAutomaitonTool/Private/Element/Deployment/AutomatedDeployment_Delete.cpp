#include "Element/Deployment/AutomatedDeployment_Delete.h"
#include "SyhAutomationToolLog.h"
#include "GenericPlatform\GenericPlatformFile.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


void FAutomatedCode_Deployment_Delete::Init()
{
}

bool FAutomatedCode_Deployment_Delete::BuildParameter(const FString& InJsonStr)
{
	return AutomationJson::JsonStringToAutomatedConfig<OwnConfig>(InJsonStr, *GetSelfConfig<OwnConfig>());
}

bool FAutomatedCode_Deployment_Delete::BuildParameter()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	TArray<FString> Target;

	if (!ParseArrayStrings(TEXT("-Files="), Target))
	{
		return false;
	}
	else
	{
		for (auto& Temp : Target)
		{
			FPaths::NormalizeFilename(Temp);
			FPaths::RemoveDuplicateSlashes(Temp);
			SelfConfig->Files.Add(Temp);
		}
		return true;
	}
}

bool FAutomatedCode_Deployment_Delete::Execute()
{
	UE_LOG(SyhAutomaitonToolLog, Display, TEXT("Execute the command of DeploymentDelete"));
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	for (auto& Temp : SelfConfig->Files)
	{
		HandleTimePath(Temp);
		FFileStatData FileStatData = IFileManager::Get().GetStatData(*Temp);
		DeletePath(FileStatData, Temp);
	}
	return true;

}



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
