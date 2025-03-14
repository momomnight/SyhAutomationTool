#pragma once


#include "CoreMinimal.h"

namespace SimpleAutomationTool
{
	template <class EvaluationType>
	bool EvaluateTaskResult(const TMultiMap<EvaluationType, bool>& InTaskResult)
	{
		if (InTaskResult.IsEmpty())
		{
			return false;
		}

		for (auto& Temp : InTaskResult)
		{
			if (!Temp.Value)
			{
				return false;
			}
		}

		return true;
	}
}