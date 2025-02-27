#include "SyhAutomationToolType.h"



FString FCommandProtocolRelated::GetProtocolFullName(const FString& InShortName)
{
	if (InShortName.IsEmpty())
	{
		return FCommandProtocolRelated::ProtocolStringPrefix + TEXT("None");
	}
	else
	{
		FString Temp = InShortName.ToLower();
		Temp[0] = FChar::ToUpper(Temp[0]);
		return FCommandProtocolRelated::ProtocolStringPrefix + Temp;
	}
}

const FString FCommandProtocolRelated::ProtocolStringPrefix = TEXT("ECommandProtocol::CMD_");
const int32 FCommandProtocolRelated::ProtocolStringPrefixLength = FCommandProtocolRelated::ProtocolStringPrefix.Len();
const FString FCommandProtocolRelated::CommandKey = TEXT("Command");

const FString FAutomatedCallRelated::CallTypeKey = TEXT("CallType");
const FString FAutomatedCallRelated::CallPathKey = TEXT("CallPath");
const FString FAutomatedCallRelated::ParametersKey = TEXT("Parameters");

const FString FAutomatedCallCustomContentRelated::ContentKey = TEXT("Content");
const FString FAutomatedCallCustomContentRelated::WaitTimeKey = TEXT("WaitTime");
