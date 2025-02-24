#include "Element/AutoExecElementsFactory.h"

FAutoExecElementsFactory::FAutoExecElementsFactory()
{
}

FAutoExecElementsFactory::~FAutoExecElementsFactory()
{
}

TSharedPtr<FAutoExecElements> FAutoExecElementsFactory::CreateAutomatedTask(uint32 InType, const FString& InJson)
{
	return nullptr;
}
