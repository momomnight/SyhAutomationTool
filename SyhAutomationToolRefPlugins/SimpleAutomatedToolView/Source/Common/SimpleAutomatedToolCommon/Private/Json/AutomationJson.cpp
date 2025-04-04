
#include "Json/AutomationJson.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

namespace AutomationJson
{
	template bool JsonStringToAutomatedConfig<FAutomatedCallConfig>(const FString& InString, FAutomatedCallConfig& OutConfig);
	template bool JsonStringToAutomatedConfig<FAutomatedCallCustomContentConfig>(const FString& InString, FAutomatedCallCustomContentConfig& OutConfig);
	template bool JsonStringToAutomatedConfig<FAutomatedUEProjectRefreshConfig>(const FString& InString, FAutomatedUEProjectRefreshConfig& OutConfig);
	template bool JsonStringToAutomatedConfig<FAutomatedCommandNestingConfig>(const FString& InString, FAutomatedCommandNestingConfig& OutConfig);
	template bool JsonStringToAutomatedConfig<FAutomatedDeploymentCopyConfig>(const FString& InString, FAutomatedDeploymentCopyConfig& OutConfig);
	template bool JsonStringToAutomatedConfig<FAutomatedDeploymentDeleteConfig>(const FString& InString, FAutomatedDeploymentDeleteConfig& OutConfig);
	template bool JsonStringToAutomatedConfig<FAutomatedVSCompileConfig>(const FString& InString, FAutomatedVSCompileConfig& OutConfig);
	template bool JsonStringToAutomatedConfig<FAutomatedGitConfig>(const FString& InString, FAutomatedGitConfig& OutConfig);
	template bool JsonStringToAutomatedConfig<FAutomatedUEPackagingConfig>(const FString& InString, FAutomatedUEPackagingConfig& OutConfig);
	template bool JsonStringToAutomatedConfig<FAutomatedUEPluginPackagingConfig>(const FString& InString, FAutomatedUEPluginPackagingConfig& OutConfig);
	template bool JsonStringToAutomatedConfig<FAutomatedConditionCommandConfig>(const FString& InString, FAutomatedConditionCommandConfig& OutConfig);
	template bool JsonStringToAutomatedConfig<FAutomatedOSSConfig>(const FString& InString, FAutomatedOSSConfig& OutConfig);
	template bool JsonStringToAutomatedConfig<FAutomatedHTTPConfig>(const FString& InString, FAutomatedHTTPConfig& OutConfig);
	template bool JsonStringToAutomatedConfig<FAutomatedCompressConfig>(const FString& InString, FAutomatedCompressConfig& OutConfig);
	template bool JsonStringToAutomatedConfig<FAutomatedMysqlConfig>(const FString& InString, FAutomatedMysqlConfig& OutConfig);

	//将Config转换为JsonObject填充JsonValueObject
	template <class AutomatedConfigType>
	void FillJsonValue(TArray<TSharedPtr<FJsonValue>>& InCommandArray)
	{
		static_assert(std::is_base_of<FAutomatedConfigBase, AutomatedConfigType>::value, "AutomatedConfigType is not base of FAutomatedConfigBase.");
		AutomatedConfigType Config;//可以转换为模板，但不确定是否需要其他操作
		if (TSharedPtr<FJsonObject> JsonObject = AutomatedConfigToJsonObject<AutomatedConfigType>(Config))
		{
			InCommandArray.Add(MakeShareable<FJsonValueObject>(new FJsonValueObject(JsonObject)));
		}
	}

	template <uint8 N>
	void FillJsonValue(TArray<TSharedPtr<FJsonValue>>& InCommandArray)
	{
		FillJsonValue<N - 1>(InCommandArray);
		FillJsonValue<typename FCommandProtocol_EnumType<static_cast<ECommandProtocol>(N - 1)>::ConfigType>(InCommandArray);
	}

	template <>
	void FillJsonValue<0>(TArray<TSharedPtr<FJsonValue>>& InCommandArray)
	{
	}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	void HandleJsonStringByProtocol(TSharedPtr<FJsonObject> InObject, FString& OutString)
	{	
		//????
		//绑定字符串流的Writer
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutString);
		FJsonSerializer::Serialize(InObject.ToSharedRef(), Writer);
	}

	void SerializeAllCommand(FString& OutString)
	{
		TArray<TSharedPtr<FJsonValue>> CommandArray;
		
		FillJsonValue<static_cast<uint8>(ECommandProtocol::CMD_Max)>(CommandArray);

		//将Writer绑定字符串流，再将JsonValue的数组写入流中
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutString);
		FJsonSerializer::Serialize(CommandArray, Writer);

	}

	void DeserializeAllCommand(const FString& InString, TMultiMap<ECommandProtocol, FString>& OutCommand)
	{
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(InString);
		TArray<TSharedPtr<FJsonValue>> RootObject;
		if (FJsonSerializer::Deserialize(Reader, RootObject))
		{
			for (auto& Temp : RootObject)
			{
				if (TSharedPtr<FJsonObject> Object = Temp->AsObject())
				{
					ECommandProtocol Protocol = GetEnum<ECommandProtocol>(Object);
					if (Protocol != ECommandProtocol::CMD_None)
					{
						FString JsonString;
						HandleJsonStringByProtocol(Object, JsonString);
						OutCommand.Add(Protocol, JsonString);
					}
				}
			}
		}
	}
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT