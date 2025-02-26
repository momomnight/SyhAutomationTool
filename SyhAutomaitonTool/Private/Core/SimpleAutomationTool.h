#pragma once

#include "CoreMinimal.h"

namespace SimpleAutomationTool
{
	//自动化核心逻辑处
	bool Init(TMultiMap<uint32, FString>& OutTaskCommand);

	//多条命令
	void HandleTask(const TMultiMap<uint32, FString>& InTaskCommand);

	//单条命令
	void HandleTask(const FString& InTaskCommand);
}