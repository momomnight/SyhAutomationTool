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

	if (SimpleAutomationToolCommon::ParseCommandLineByKey(Tool<OwnConfig>::FilesKey, SelfConfig->Files, true))
	{
		return true;
	}
	else
	{
		SyhLogError(TEXT("BuildParameter is failure to execute. Locate in %s"), GetCommandName<Self>());
		return false;
	}
}

bool FAutomatedCode_Deployment_Delete::Execute()
{
	SyhLogDisplay(TEXT("Execute the command of DeploymentDelete"));
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	for (auto& Temp : SelfConfig->Files)
	{
		SimpleAutomationToolCommon::DeletePath(Temp);
	}
	return true;

}



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
