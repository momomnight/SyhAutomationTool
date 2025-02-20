#pragma once
#include "CoreMinimal.h"
#include "Templates/SharedPointer.h"
#include "Element/Core/Interface/AutoExecElements.h"


class FAutomatedExecutionElementsFactory
{

public:
	FAutomatedExecutionElementsFactory();
	virtual ~FAutomatedExecutionElementsFactory();
	
	static TSharedPtr<FAutoExecElements> CreateAutomatedTask(uint32 InType, const FString& InJson = {});


	template<class T>
	static TSharedPtr<FAutoExecElements> CreateAutomatedTask(const FString& InJson = {})
	{

	}

};