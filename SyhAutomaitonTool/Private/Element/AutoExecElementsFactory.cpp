#include "Element/AutoExecElementsFactory.h"
#include "Element/AutomationCode/AutomatedCode_Call.h"

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

	case ECommandProtocol::CMD_None:
	default:
		break;
	}


	return nullptr;
}
