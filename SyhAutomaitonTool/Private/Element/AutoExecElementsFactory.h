#pragma once
#include "CoreMinimal.h"
#include "Templates/SharedPointer.h"
#include "Element/Core/Interface/AutoExecElements.h"

// 用于创建各种自动化执行任务的工厂
class FAutoExecElementsFactory
{

public:
	FAutoExecElementsFactory();
	virtual ~FAutoExecElementsFactory();
	
	static TSharedPtr<FAutoExecElements> CreateAutomatedTask(uint32 InType, const FString& InJson = {});


	template<class T>
	static TSharedPtr<FAutoExecElements> CreateAutomatedTask(const FString& InJson = {})
	{

	}

};