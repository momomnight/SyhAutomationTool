#include "Element/AutoExecElementsFactory.h"
#include "Element/AutomationCode/AutomatedCode_Call.h"
#include "Element/AutomationCode/AutomatedCode_CallCustomContent.h"
#include "Element/AutomationCode/AutomatedCode_UEProjectRefresh.h"
#include "Element/AutomationCode/AutomatedCode_CommandNesting.h"
#include "Element/Deployment/AutomatedDeployment_Copy.h"
#include "Element/Deployment/AutomatedDeployment_Delete.h"

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
	case ECommandProtocol::CMD_None:
	default:
		return nullptr;
	}
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT