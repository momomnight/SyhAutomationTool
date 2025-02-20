#include "Element/AutomatedExecutionElementsFactory.h"

FAutomatedExecutionElementsFactory::FAutomatedExecutionElementsFactory()
{
}

FAutomatedExecutionElementsFactory::~FAutomatedExecutionElementsFactory()
{
}

TSharedPtr<FAutoExecElements> FAutomatedExecutionElementsFactory::CreateAutomatedTask(uint32 InType, const FString& InJson)
{
	return nullptr;
}
