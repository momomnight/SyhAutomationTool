#pragma once

#include "CoreMinimal.h"
#include "Json/AutomationJsonTemplate.h"

//	Example:
//	[
//		{
//			"Command": "Call",
//			"CallType" : "bat",
//			"CallPath" : "C:/MyProgram/UnrealEngine-5.3.2-release/SyhAutomaitonTool/1.bat",
//			"Parameters" : ""
//		},
//		{
//			"Command": "Call",
//			"CallType" : "bat",
//			"CallPath" : "C:/MyProgram/UnrealEngine-5.3.2-release/SyhAutomaitonTool/2.bat",
//			"Parameters" : ""
//		}
//	]

namespace AutomationJson
{
	/// <summary>
	/// 增加模块时，只需特化AutomatedConfigToJsonObject
	/// </summary>
	/// <param name="InJsonObject"> 传入的Json对象 </param>
	/// <param name="InConfig"> 具体配置类型 </param>
	template<>
	void AutomatedConfigToJsonObject<FAutomatedCallConfig>(TSharedPtr<FJsonObject> InJsonObject, const FAutomatedCallConfig& InConfig)
	{
		InJsonObject->SetStringField(FAutomatedCallRelated::CallTypeKey, InConfig.CallType);
		InJsonObject->SetStringField(FAutomatedCallRelated::CallPathKey, InConfig.CallPath);
		InJsonObject->SetStringField(FAutomatedCallRelated::ParametersKey, InConfig.Parameters);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedCallCustomContentConfig>(TSharedPtr<FJsonObject> InJsonObject, const FAutomatedCallCustomContentConfig& InConfig)
	{
		InJsonObject->SetNumberField(FAutomatedCallCustomContentRelated::WaitTimeKey, InConfig.WaitTime);
		InJsonObject->SetStringField(FAutomatedCallCustomContentRelated::ContentKey, InConfig.Content);
	}

	//用于配置命令字段
	void ConfigureCommandProtocol(TSharedPtr<FJsonObject> InJsonObject, ECommandProtocol InProtocol);

	template<class AutomatedConfigType>
	TSharedPtr<FJsonObject> AutomatedConfigToJsonObject(const AutomatedConfigType& InConfig)
	{
		TSharedPtr<FJsonObject> RootObject = MakeShareable<FJsonObject>(new FJsonObject);
		ConfigureCommandProtocol(RootObject, FCommandProtocol<AutomatedConfigType>::Value);
		AutomatedConfigToJsonObject<AutomatedConfigType>(RootObject, InConfig, Transfer{});
		return RootObject;
	}

	/// <summary>
	/// 增加模块时，只需特化JsonObjectToAutomatedConfig
	/// </summary>
	/// <param name="InJsonObject"> 传入的Json对象 </param>
	/// <param name="InConfig"> 具体配置类型 </param>
	template<>
	void JsonObjectToAutomatedConfig<FAutomatedCallConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedCallConfig& InConfig)
	{
		using RelatedString = FAutomatedCallConfig::RelatedString;
		InConfig.CallPath = InJsonObject->GetStringField(RelatedString::CallPathKey);
		InConfig.CallType = InJsonObject->GetStringField(RelatedString::CallTypeKey);
		InConfig.Parameters = InJsonObject->GetStringField(RelatedString::ParametersKey);

		//某些程序需要标准路径
		FPaths::NormalizeFilename(InConfig.CallPath);
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedCallCustomContentConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedCallCustomContentConfig& InConfig)
	{
		using RelatedString = FAutomatedCallCustomContentConfig::RelatedString;
		InConfig.WaitTime = InJsonObject->GetNumberField(RelatedString::WaitTimeKey);
		InConfig.Content = InJsonObject->GetStringField(RelatedString::ContentKey);
	}

	template <class AutomatedConfigType>
	bool JsonStringToAutomatedConfig(const FString& InString, AutomatedConfigType& OutConfig)
	{
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(InString);
		TSharedPtr<FJsonObject> ReadRoot;
		if (FJsonSerializer::Deserialize(Reader, ReadRoot))
		{
			return JsonObjectToAutomatedConfig<AutomatedConfigType>(ReadRoot, OutConfig, Transfer{});
		}

		return false;
	}

	//将Config转换为JsonObject填充JsonValueObject
	template <class AutomatedConfigType>
	void FillJsonValue(TArray<TSharedPtr<FJsonValue>>& InCommandArray)
	{
		AutomatedConfigType Config;//可以转换为模板，但不确定是否需要其他操作
		if (TSharedPtr<FJsonObject> JsonObject = AutomatedConfigToJsonObject<AutomatedConfigType>(Config))
		{
			InCommandArray.Add(MakeShareable<FJsonValueObject>(new FJsonValueObject(JsonObject)));
		}
	}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//从Json对象中提取命令
	ECommandProtocol GetCommandProtocol(TSharedPtr<FJsonObject> InJsonObject);

	//从Json字符串中提取命令
	ECommandProtocol GetCommandProtocol(const FString& InJsonString);

	//从协议到去掉协议前缀的字符串
	FString CommandProtocolToString(ECommandProtocol InProtocol);

	//从去掉协议前缀的字符串到协议
	ECommandProtocol StringToCommandProtocol(const FString& InShortCommandName);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//用于序列化
	void SerializeAllCommand(FString& OutString);

	//用于反序列化
	void DeserializeAllCommand(const FString& InString, TMultiMap<uint32, FString>& OutCommand);

}