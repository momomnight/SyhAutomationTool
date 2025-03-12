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

TSharedPtr<FAutoExecElements> FAutoExecElementsFactory::CreateAutomatedTask(uint32 InType, const FString& InJson)
{
	ECommandProtocol Protocol = (ECommandProtocol)InType;

	switch (Protocol)
	{
	case ECommandProtocol::CMD_Call:
		UE_LOG(SyhAutomaitonToolLog, Log, TEXT("Create automated element -- Call"));
		return CreateAutomatedTask<FAutomatedCode_Call>(InJson);
	case ECommandProtocol::CMD_Call_Custom_Content:
		UE_LOG(SyhAutomaitonToolLog, Log, TEXT("Create automated element -- CallCustomContent"));
		return CreateAutomatedTask<FAutomatedCode_CallCustomContent>(InJson);
	case ECommandProtocol::CMD_UE_Project_Refresh:
		UE_LOG(SyhAutomaitonToolLog, Log, TEXT("Create automated element -- UEProjectRefresh"));
		return CreateAutomatedTask<FAutomatedCode_UEProjectRefresh>(InJson);
	case ECommandProtocol::CMD_Command_Nesting:
		UE_LOG(SyhAutomaitonToolLog, Log, TEXT("Create automated element -- CommandNesting"));
		return CreateAutomatedTask<FAutomatedCode_CommandNesting>(InJson);
	case ECommandProtocol::CMD_Deployment_Copy:
		UE_LOG(SyhAutomaitonToolLog, Log, TEXT("Create automated element -- Deployment_Copy"));
		return CreateAutomatedTask<FAutomatedCode_Deployment_Copy>(InJson);
	case ECommandProtocol::CMD_Deployment_Delete:
		UE_LOG(SyhAutomaitonToolLog, Log, TEXT("Create automated element -- Deployment_Delete"));
		return CreateAutomatedTask<FAutomatedCode_Deployment_Delete>(InJson);
	case ECommandProtocol::CMD_VS_Compile:
		UE_LOG(SyhAutomaitonToolLog, Log, TEXT("Create automated element -- VS_Compile"));
		return CreateAutomatedTask<FAutomatedCode_VS_Compile>(InJson);
	case ECommandProtocol::CMD_Git:
		UE_LOG(SyhAutomaitonToolLog, Log, TEXT("Create automated element -- Git"));
		return CreateAutomatedTask<FAutomatedCode_Git>(InJson);
	case ECommandProtocol::CMD_UE_Packaging:
		UE_LOG(SyhAutomaitonToolLog, Log, TEXT("Create automated element -- UE_Packaging"));
		return CreateAutomatedTask<FAutomatedCode_UE_Packaging>(InJson);
	case ECommandProtocol::CMD_UE_Plugin_Packaging:
		UE_LOG(SyhAutomaitonToolLog, Log, TEXT("Create automated element -- UE_Plugin_Packaging"));
		return CreateAutomatedTask<FAutomatedCode_UE_Plugin_Packaging>(InJson);
	case ECommandProtocol::CMD_Condition_Command:
		UE_LOG(SyhAutomaitonToolLog, Log, TEXT("Create automated element -- Condition_Command"));
		return CreateAutomatedTask<FAutomatedCode_ConditionCommand>(InJson);
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