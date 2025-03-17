#pragma once


#include "CoreMinimal.h"
#include "SyhAutomationToolLog.h"
#include "SyhAutomationToolCommon.h"

namespace SimpleAutomationTool
{
	template <class EvaluationType>
	bool EvaluateTaskResult(const TMultiMap<EvaluationType, bool>& InTaskResult)
	{
		if (InTaskResult.IsEmpty())
		{
			SyhLogError(TEXT("Evaluate a empty task result"));
			return false;
		}
		bool Result = true;
		for (const auto& Temp : InTaskResult)
		{
			if (Temp.Value)
			{
				SyhLogDisplay(TEXT("%s is successful to execute."), *SimpleAutomationToolCommon::ToString<EvaluationType>(Temp.Key));
			}
			else
			{
				Result = false;
				SyhLogError(TEXT("%s is failure to execute."), *SimpleAutomationToolCommon::ToString<EvaluationType>(Temp.Key));
			}
		}

		return Result;
	}
}