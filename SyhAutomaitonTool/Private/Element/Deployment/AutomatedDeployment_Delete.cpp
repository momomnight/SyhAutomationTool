#include "Element/Deployment/AutomatedDeployment_Delete.h"
#include "GenericPlatform\GenericPlatformFile.h"
#include "SyhAutomationToolCommon.h"

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
	bool Result = AutomationCommandLine::CommandLineArgumentToAutomatedConfig<OwnConfig>(GetSelfConfig<OwnConfig>());
	if (!Result)
	{
		SyhLogError(TEXT("BuildParameter is failure to execute. Locate in %s"), GetCommandName<Self>());
	}
	return Result;
}

bool FAutomatedCode_Deployment_Delete::Execute()
{
	SyhLogDisplay(TEXT("Execute the command of DeploymentDelete"));
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	for (auto& Temp : SelfConfig->Files)
	{
		SyhAutomationToolCommon::DeletePath(Temp);
	}
	return true;

}



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
