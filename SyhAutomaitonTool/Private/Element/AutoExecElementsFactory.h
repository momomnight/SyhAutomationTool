#pragma once
#include "CoreMinimal.h"
#include "Templates/SharedPointer.h"
#include <type_traits>
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
		static_assert(std::is_base_of<FAutoExecElements, T>::value, "This type is not derived of FAutoExecElements.");
		TSharedPtr<FAutoExecElements> Temp = MakeShareable<T>(new T);
		FAutoExecElements::Init<T>(Temp);
		bool Result = true;
		if (InJson.IsEmpty())
		{
			Result = Temp->BuildParameter();
		}
		else
		{
			Result = Temp->BuildParameter(InJson);
		}

		if (Result)
		{
			return Temp;
		}
		else
		{
			return nullptr;
		}

	}

};