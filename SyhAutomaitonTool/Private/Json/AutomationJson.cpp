#include "Json/AutomationJson.h"
#include "Misc/AutomatedExecutionPath.h"
#include "SyhAutomationToolType.h"


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

namespace AutomationJson
{
	ECommandProtocol GetCommandProtocol(TSharedPtr<FJsonObject> InJsonObject)
	{
		if (InJsonObject.IsValid())
		{
			return StringToProtocol(InJsonObject->GetStringField(FCommandProtocolRelated::CommandKey));
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

	FString ProtocolToString(ECommandProtocol InProtocol)
	{
		//"ECommandProtocol::CMD_Call" -> "Call"
		FString ProtocolName = UEnum::GetValueAsName(InProtocol).ToString();
		ProtocolName.RightChopInline(FCommandProtocolRelated::ProtocolStringPrefixLength);
		return ProtocolName;
	}

	ECommandProtocol StringToProtocol(const FString& InShortCommandName)
	{
		FString ProtocolName = FCommandProtocolRelated::GetProtocolFullName(InShortCommandName);
		int64 Result = UEnum::LookupEnumName(FName(), *ProtocolName);
		if (Result == INDEX_NONE)
		{
			return ECommandProtocol::CMD_None;
		}
		else
		{
			return (ECommandProtocol)Result;//无法使用模板，模板需要常量表达式输入
		}
	}

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

		//将所有操作转换为Json对象，并合并在JsonValue的数组中
		{	//Call
			FAutomatedCallConfig Config;//可以转换为模板，但不确定是否需要其他操作
			if (TSharedPtr<FJsonObject> JsonObject = AutomatedConfigToJsonObject(Config))
			{
				CommandArray.Add(MakeShareable<FJsonValueObject>(new FJsonValueObject(JsonObject)));
			}
		}

		{	//Call Custom Content
			FAutomatedCallCustomContentConfig Config;
			if (TSharedPtr<FJsonObject> JsonObject = AutomatedConfigToJsonObject(Config))
			{
				CommandArray.Add(MakeShareable<FJsonValueObject>(new FJsonValueObject(JsonObject)));
			}
		}

		//将Writer绑定字符串流，再将JsonValue的数组写入流中
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutString);
		FJsonSerializer::Serialize(CommandArray, Writer);

	}

	void DeserializeAllCommand(const FString& InString, TMultiMap<uint32, FString>& OutCommand)
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
						OutCommand.Add((uint32)Protocol, JsonString);
					}
				}
			}
		}

	
	}

	void ConfigureCommandProtocol(TSharedPtr<FJsonObject> InJsonObject, ECommandProtocol InProtocol)
	{	
		InJsonObject->SetStringField(FCommandProtocolRelated::CommandKey, ProtocolToString(InProtocol));
	}
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT