#pragma once

#include "CoreMinimal.h"

namespace SimpleAutomationTool
{
	bool Init(TMultiMap<uint32, FString>& OutTaskCommand);

	bool Init(TMultiMap<uint32, FString>& OutTaskCommand, const FString& InRelativePath);

	//多条命令
	void HandleTask(const TMultiMap<uint32, FString>& InTaskCommand, TMultiMap<int32, bool>& OutTaskResult, bool bBreak = false);

	//单条命令
	void HandleTask(const FString& InTaskCommand);

	void BuildConfig();

	bool EvaluateTaskResult(const TMultiMap<int32, bool>& InTaskResult);
}