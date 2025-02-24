#pragma once

#include "CoreMinimal.h"
#include "SyhAutomationToolType.h"
#include "Json.h"

namespace AutomationJson
{
	//用于序列化
	void SerializeAllCommand(FString& OutString);

	//用于反序列化
	void DeserializeAllCommand(const FString& InString, TMultiMap<uint32, FString>& OutCommand);

	bool JsonToAutomatedCallConfig(const FString& InString, FAutomatedCallConfig& OutConfig);

	bool JsonToAutomatedCallConfig(TSharedPtr<FJsonObject> InJsonObject, FAutomatedCallConfig& OutConfig);

}