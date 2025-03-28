#include "Element/AutoExecElementsFactory.h"

#include "Element/AutomationCode/AutomatedCode_Call.h"
#include "Element/AutomationCode/AutomatedCode_CallCustomContent.h"
#include "Element/AutomationCode/AutomatedCode_UEProjectRefresh.h"
#include "Element/AutomationCode/AutomatedCode_CommandNesting.h"
#include "Element/Deployment/AutomatedDeployment_Copy.h"
#include "Element/Deployment/AutomatedDeployment_Delete.h"
#include "Element/VisualStudio/AutomatedCompile_VsCompile.h"
#include "Element/Git/AutomatedGit.h"
#include "Element/UEPakProject/AutomatedPak_UEPak.h"
#include "Element/UEPakProject/AutomatedPak_UEPluginPak.h"
#include "Element/AutomationCode/AutomatedCode_ConditionCommand.h"
#include "Element/OSS/AutomatedOss.h"
#include "Element/HttpClient/AutomatedHttp.h"
#include "Element/Compress/AutomatedCompress.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

FAutoExecElementsFactory::FAutoExecElementsFactory()
{
}

FAutoExecElementsFactory::~FAutoExecElementsFactory()
{
}

TSharedPtr<FAutoExecElements> FAutoExecElementsFactory::CreateAutomatedTask(ECommandProtocol InType, const FString& InJson)
{

	switch (InType)
	{
	case ECommandProtocol::CMD_Call:
		return CreateAutomatedTask<FAutomatedCode_Call>(InJson);
	case ECommandProtocol::CMD_Call_Custom_Content:
		return CreateAutomatedTask<FAutomatedCode_CallCustomContent>(InJson);
	case ECommandProtocol::CMD_UE_Project_Refresh:
		return CreateAutomatedTask<FAutomatedCode_UEProjectRefresh>(InJson);
	case ECommandProtocol::CMD_Command_Nesting:
		return CreateAutomatedTask<FAutomatedCode_CommandNesting>(InJson);
	case ECommandProtocol::CMD_Deployment_Copy:
		return CreateAutomatedTask<FAutomatedCode_Deployment_Copy>(InJson);
	case ECommandProtocol::CMD_Deployment_Delete:
		return CreateAutomatedTask<FAutomatedCode_Deployment_Delete>(InJson);
	case ECommandProtocol::CMD_VS_Compile:
		return CreateAutomatedTask<FAutomatedCode_VS_Compile>(InJson);
	case ECommandProtocol::CMD_Git:
		return CreateAutomatedTask<FAutomatedCode_Git>(InJson);
	case ECommandProtocol::CMD_UE_Packaging:
		return CreateAutomatedTask<FAutomatedCode_UE_Packaging>(InJson);
	case ECommandProtocol::CMD_UE_Plugin_Packaging:
		return CreateAutomatedTask<FAutomatedCode_UE_Plugin_Packaging>(InJson);
	case ECommandProtocol::CMD_Condition_Command:
		return CreateAutomatedTask<FAutomatedCode_ConditionCommand>(InJson);
	case ECommandProtocol::CMD_OSS:
		return CreateAutomatedTask<FAutomatedCode_OSS>(InJson);
	case ECommandProtocol::CMD_HTTP:
		return CreateAutomatedTask<FAutomatedCode_HTTP>(InJson);
	case ECommandProtocol::CMD_Compress:
		return CreateAutomatedTask<FAutomatedCode_Compress>(InJson);
	case ECommandProtocol::CMD_None:
	default:
		UE_LOG(SyhAutomaitonToolLog, Log, TEXT("No automated elements were created."));
		return nullptr;
	}
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT