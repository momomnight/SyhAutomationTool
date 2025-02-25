#pragma once

#include "CoreMinimal.h"
#include "SyhAutomationToolType.h"
#include "Json.h"

namespace AutomationJson
{
	
	//从Json对象中提取命令
	ECommandProtocol GetCommandProtocol(TSharedPtr<FJsonObject> InJsonObject);

	//从Json字符串中提取命令
	ECommandProtocol GetCommandProtocol(const FString& InJsonString);

	//从协议到去掉协议前缀的字符串
	FString ProtocolToString(ECommandProtocol InProtocol);

	//从去掉协议前缀的字符串到协议
	ECommandProtocol StringToProtocol(const FString& InString);


	//用于序列化
	//用于序列化
	void SerializeAllCommand(FString& OutString);

	//用于反序列化
	void DeserializeAllCommand(const FString& InString, TMultiMap<uint32, FString>& OutCommand);

	bool JsonToAutomatedCallConfig(const FString& InString, FAutomatedCallConfig& OutConfig);

	bool JsonToAutomatedCallConfig(TSharedPtr<FJsonObject> InJsonObject, FAutomatedCallConfig& OutConfig);

}