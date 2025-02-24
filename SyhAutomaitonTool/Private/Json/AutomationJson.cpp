#include "Json/AutomationJson.h"
#include "Misc/AutomatedExecutionPath.h"

namespace AutomationJson
{
	void SerializeAllCommand(FString& OutString)
	{

	}
	void DeserializeAllCommand(const FString& InString, TMultiMap<uint32, FString>& OutCommand)
	{

	}
	bool JsonToAutomatedCallConfig(const FString& InString, FAutomatedCallConfig& OutConfig)
	{
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(InString);
		TSharedPtr<FJsonObject> ReadRoot;

		if (FJsonSerializer::Deserialize(Reader, ReadRoot))
		{
			return JsonToAutomatedCallConfig(ReadRoot, OutConfig);
		}

		return false;
	}

	bool JsonToAutomatedCallConfig(TSharedPtr<FJsonObject> InJsonObject, FAutomatedCallConfig& OutConfig)
	{
		if (InJsonObject)
		{
			OutConfig.CallPath = InJsonObject->GetStringField(TEXT("CallPath"));
			OutConfig.CallType = InJsonObject->GetStringField(TEXT("CallType"));
			OutConfig.Parameters = InJsonObject->GetStringField(TEXT("Parameters"));
			
			//某些程序需要标准路径
			FPaths::NormalizeFilename(OutConfig.CallPath);
			return true;
		}
		return false;
	}
}