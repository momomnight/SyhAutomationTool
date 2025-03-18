#pragma once
#include "CoreMinimal.h"
#include "Templates/SharedPointer.h"
#include <type_traits>
#include "Element/Core/Interface/AutoExecElements.h"
#include "SyhAutomationToolCommon.h"


// 用于创建各种自动化执行任务的工厂
class FAutoExecElementsFactory
{

public:
	FAutoExecElementsFactory();
	virtual ~FAutoExecElementsFactory();
	
	static TSharedPtr<FAutoExecElements> CreateAutomatedTask(ECommandProtocol InType, const FString& InJson = {});


	template<class AutomatedElementType>
	static TSharedPtr<FAutoExecElements> CreateAutomatedTask(const FString& InJson = {})
	{
		static_assert(std::is_base_of<FAutoExecElements, AutomatedElementType>::value, "This type is not derived of FAutoExecElements.");
		
		const TCHAR* CommandName = FAutoExecElements::GetCommandName<AutomatedElementType>();
		SyhLogLog(FAutoExecElementsFactory::Msg, CommandName);

		TSharedPtr<FAutoExecElements> Temp = MakeShareable<AutomatedElementType>(new AutomatedElementType);
		FAutoExecElements::Init<AutomatedElementType>(Temp);
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

private:
	constexpr static TCHAR Msg[] = TEXT("Create automated element -- %s");
};