#pragma once

#include "CoreMinimal.h"
#include "Json/AutomationJsonTemplate.h"


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
		InConfig.CallPath = InJsonObject->GetStringField(FAutomatedCallRelated::CallPathKey);
		InConfig.CallType = InJsonObject->GetStringField(FAutomatedCallRelated::CallTypeKey);
		InConfig.Parameters = InJsonObject->GetStringField(FAutomatedCallRelated::ParametersKey);

		//某些程序需要标准路径
		FPaths::NormalizeFilename(InConfig.CallPath);
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedCallCustomContentConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedCallCustomContentConfig& InConfig)
	{
		InConfig.WaitTime = InJsonObject->GetNumberField(FAutomatedCallCustomContentRelated::CallPathKey);
		InConfig.Content = InJsonObject->GetStringField(FAutomatedCallCustomContentRelated::CallTypeKey);
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

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//从Json对象中提取命令
	ECommandProtocol GetCommandProtocol(TSharedPtr<FJsonObject> InJsonObject);

	//从Json字符串中提取命令
	ECommandProtocol GetCommandProtocol(const FString& InJsonString);

	//从协议到去掉协议前缀的字符串
	FString ProtocolToString(ECommandProtocol InProtocol);

	//从去掉协议前缀的字符串到协议
	ECommandProtocol StringToProtocol(const FString& InShortCommandName);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//用于序列化
	void SerializeAllCommand(FString& OutString);

	//用于反序列化
	void DeserializeAllCommand(const FString& InString, TMultiMap<uint32, FString>& OutCommand);

}