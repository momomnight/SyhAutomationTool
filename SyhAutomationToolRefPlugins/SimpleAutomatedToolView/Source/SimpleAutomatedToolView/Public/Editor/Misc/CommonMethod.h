#pragma once


struct FAutomatedToolViewCommonMethod
{	
	//@InName AutomatedToolEditorBase
	//@return AutomatedToolEditorBase_0
	template <class Type>
	static FString GetNameWithSerialNumber(const FString& InName)
	{
		static int32 Counter = 0;		
		return InName + TEXT("_") + FString::FromInt(Counter);
	}
};