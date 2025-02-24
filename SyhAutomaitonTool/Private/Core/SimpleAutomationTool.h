#pragma once

#include "CoreMinimal.h"

namespace SimpleAutomationTool
{
	//自动化核心逻辑处
	bool Init(TMultiMap<uint32, FString>& OutTaskCommand);
	void HandleTask(const TMultiMap<uint32, FString>& InTaskCommand);
}