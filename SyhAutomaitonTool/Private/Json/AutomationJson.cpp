#include "Json/AutomationJson.h"
#include "SyhAutomationToolCommon.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

namespace AutomationJson
{
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

	ECommandProtocol GetCommandProtocol(TSharedPtr<FJsonObject> InJsonObject)
	{
		if (InJsonObject.IsValid())
		{
			return SimpleAutomationToolCommon::StringToCommandProtocol(InJsonObject->GetStringField(FCommandProtocolRelated::CommandKey));
		}

		return ECommandProtocol::CMD_None;
	}

	ECommandProtocol GetCommandProtocol(const FString& InJsonString)
	{
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(*InJsonString);
		TSharedPtr<FJsonObject> RootObject;

		if (FJsonSerializer::Deserialize(Reader, RootObject))
		{
			//从Json字符串到C++ Json对象，再从Json对象中提取协议命令
			return GetCommandProtocol(RootObject);
		}

		return ECommandProtocol::CMD_None;
	}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	EComparisionType GetComparisionType(TSharedPtr<FJsonObject> InJsonObject)
	{
		if (InJsonObject.IsValid())
		{
			return SimpleAutomationToolCommon::StringToComparisionType(InJsonObject->GetStringField(FAutomatedCommandNestingRelated::ComparisionTypeKey));
		}

		return EComparisionType::COMPARISION_None;
	}

	EComparisionType GetComparisionType(const FString& InJsonString)
	{
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(*InJsonString);
		TSharedPtr<FJsonObject> RootObject;

		if (FJsonSerializer::Deserialize(Reader, RootObject))
		{
			//从Json字符串到C++ Json对象，再从Json对象中提取协议命令
			return GetComparisionType(RootObject);
		}

		return EComparisionType::COMPARISION_None;
	}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	void HandleJsonStringByProtocol(ECommandProtocol InProtocol, TSharedPtr<FJsonObject> InObject, FString& OutString)
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
					ECommandProtocol Protocol = GetCommandProtocol(Object);
					if (Protocol != ECommandProtocol::CMD_None)
					{
						FString JsonString;
						HandleJsonStringByProtocol(Protocol, Object, JsonString);//??
						OutCommand.Add(Protocol, JsonString);
					}
				}
			}
		}

	
	}

	void ConfigureCommandProtocol(TSharedPtr<FJsonObject> InJsonObject, ECommandProtocol InProtocol)
	{	
		InJsonObject->SetStringField(FCommandProtocolRelated::CommandKey, SimpleAutomationToolCommon::CommandProtocolToString(InProtocol));
	}
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT