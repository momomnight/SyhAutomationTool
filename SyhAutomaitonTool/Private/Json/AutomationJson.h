#pragma once

#include "CoreMinimal.h"
#include "Json/AutomationJsonTemplate.h"
#include "Misc/AutomatedExecutionPath.h"

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
	template <class AutomatedConfigType>
	void FillJsonValue(TArray<TSharedPtr<FJsonValue>>& InCommandArray);

	/// <summary>
	/// 增加模块时，只需特化AutomatedConfigToJsonObject
	/// </summary>
	/// <param name="InJsonObject"> 传入的Json对象 </param>
	/// <param name="InConfig"> 具体配置类型 </param>
	template<>
	void AutomatedConfigToJsonObject<FAutomatedCallConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedCallConfig& InConfig)
	{
		OutJsonObject->SetStringField(RelatedString<FAutomatedCallConfig>::CallTypeKey, InConfig.CallType);
		OutJsonObject->SetStringField(RelatedString<FAutomatedCallConfig>::CallPathKey, InConfig.CallPath);
		OutJsonObject->SetStringField(RelatedString<FAutomatedCallConfig>::ParametersKey, InConfig.Parameters);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedCallCustomContentConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedCallCustomContentConfig& InConfig)
	{
		OutJsonObject->SetNumberField(RelatedString<FAutomatedCallCustomContentConfig>::WaitTimeKey, InConfig.WaitTime);
		OutJsonObject->SetStringField(RelatedString<FAutomatedCallCustomContentConfig>::ContentKey, InConfig.Content);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedUEProjectRefreshConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedUEProjectRefreshConfig& InConfig)
	{
		OutJsonObject->SetStringField(RelatedString<FAutomatedUEProjectRefreshConfig>::UnrealBuildToolPathKey, InConfig.UnrealBuildToolPath);
		OutJsonObject->SetStringField(RelatedString<FAutomatedUEProjectRefreshConfig>::ProjectUProjectPathKey, InConfig.ProjectUProjectPath);
	}

	template<>
	void AutomatedConfigToJsonObject<FAutomatedCommandNestingConfig>(TSharedPtr<FJsonObject> OutJsonObject, const FAutomatedCommandNestingConfig& InConfig)
	{
		//上面的命令对于配置的无需更多处理
		TArray<TSharedPtr<FJsonValue>> Array;
		for (auto& Temp : InConfig.CommandList)
		{
			Array.Add(MakeShareable<FJsonValueString>(new FJsonValueString(Temp)));
		}
		OutJsonObject->SetArrayField(RelatedString<FAutomatedCommandNestingConfig>::CommandListKey, Array);
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
	void JsonObjectToAutomatedConfig<FAutomatedCallConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedCallConfig& OutConfig)
	{
		using RelatedString = FAutomatedCallConfig::RelatedString;
		OutConfig.CallPath = InJsonObject->GetStringField(RelatedString::CallPathKey);
		OutConfig.CallType = InJsonObject->GetStringField(RelatedString::CallTypeKey);
		OutConfig.Parameters = InJsonObject->GetStringField(RelatedString::ParametersKey);

		//某些程序需要标准路径
		//从Json字符中读取的路径格式可能不对
		FPaths::NormalizeFilename(OutConfig.CallPath);
		FPaths::RemoveDuplicateSlashes(OutConfig.CallPath);
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedCallCustomContentConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedCallCustomContentConfig& OutConfig)
	{
		OutConfig.WaitTime = InJsonObject->GetNumberField(RelatedString<FAutomatedCallCustomContentConfig>::WaitTimeKey);
		OutConfig.Content = InJsonObject->GetStringField(RelatedString<FAutomatedCallCustomContentConfig>::ContentKey);
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedUEProjectRefreshConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedUEProjectRefreshConfig& OutConfig)
	{
		OutConfig.UnrealBuildToolPath = InJsonObject->GetStringField(RelatedString<FAutomatedUEProjectRefreshConfig>::UnrealBuildToolPathKey);
		OutConfig.ProjectUProjectPath = InJsonObject->GetStringField(RelatedString<FAutomatedUEProjectRefreshConfig>::ProjectUProjectPathKey);
		
		//某些程序需要标准路径
		//从Json字符中读取的路径格式可能不对
		FPaths::NormalizeFilename(OutConfig.UnrealBuildToolPath);
		FPaths::NormalizeFilename(OutConfig.ProjectUProjectPath);
		FPaths::RemoveDuplicateSlashes(OutConfig.UnrealBuildToolPath);
		FPaths::RemoveDuplicateSlashes(OutConfig.ProjectUProjectPath);
	}

	template<>
	void JsonObjectToAutomatedConfig<FAutomatedCommandNestingConfig>(TSharedPtr<FJsonObject> InJsonObject, FAutomatedCommandNestingConfig& OutConfig)
	{
		const TArray<TSharedPtr<FJsonValue>>& InArrayObject = InJsonObject->GetArrayField(RelatedString<FAutomatedCommandNestingConfig>::CommandListKey);
	
		for (auto& Temp : InArrayObject)
		{
			OutConfig.CommandList.Add(Temp->AsString());
		}
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