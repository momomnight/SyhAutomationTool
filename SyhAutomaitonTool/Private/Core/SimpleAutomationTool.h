#pragma once

#include "CoreMinimal.h"
#include "Core/SimpleAutomationToolTemplate.h"

namespace SimpleAutomationTool
{
	bool Init(TMultiMap<ECommandProtocol, FString>& OutTaskCommand);

	bool Init(TMultiMap<ECommandProtocol, FString>& OutTaskCommand, const FString& InRelativePath);

	//多条命令
	void HandleTask(const TMultiMap<ECommandProtocol, FString>& InTaskCommand, TMultiMap<ECommandProtocol, bool>& OutTaskResult, bool bBreak = false);

	//单条命令
	void HandleTask(const FString& InTaskCommand);

	void BuildConfig();

	extern template bool EvaluateTaskResult<ECommandProtocol>(const TMultiMap<ECommandProtocol, bool>& InTaskResult);
	extern template bool EvaluateTaskResult<FString>(const TMultiMap<FString, bool>& InTaskResult);

}