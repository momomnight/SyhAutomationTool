#pragma once
#include "CoreMinimal.h"
#include "SimpleAutomatedToolType.h"

namespace AutomationToolCommonMethod
{

	template<class Type>
	bool GetValueFromCommandLine(const FString& InKey, Type& OutValue)
	{
		if (FString Key = GetMatchKey(InKey);
			!FParse::Value(FCommandLine::Get(), *Key, OutValue))
		{
			UE_LOG(SimpleAutomatedToolCommonLog, Display, TEXT("%s was not found the value. Use default value."), *Key);
			return false;
		}

		return true;
	}

	template<>
	bool GetValueFromCommandLine<bool>(const FString& InKey, bool& OutValue)
	{
		if (FString Key = GetMatchKey(InKey);
			!FParse::Bool(FCommandLine::Get(), *Key, OutValue))
		{
			UE_LOG(SimpleAutomatedToolCommonLog, Display, TEXT("%s was not found the value. Use default value."), *Key);
			return false;
		}
		return true;
	}

	template<>
	bool GetValueFromCommandLine<FString>(const FString& InKey, FString& OutValue)
	{
		OutValue.Empty();
		if (FString Key = GetMatchKey(InKey);
			!FParse::Value(FCommandLine::Get(), *Key, OutValue))
		{
			UE_LOG(SimpleAutomatedToolCommonLog, Display, TEXT("%s was not found the value. Use default value."), *Key);
			return false;
		}
		return true;
	}

	template<>
	bool AutomationToolCommonMethod::GetValueFromCommandLine<EMysqlMethodType>(const FString& InKey, EMysqlMethodType& OutValue)
	{
		FString Result;
		if (FString Key = AutomationToolCommonMethod::GetMatchKey(InKey);
			!FParse::Value(FCommandLine::Get(), *Key, Result))
		{
			UE_LOG(SimpleAutomatedToolCommonLog, Display, TEXT("%s was not found the value. Use default value."), *Key);
			return false;
		}

		OutValue = EnumTool<EMysqlMethodType>::GetEnumValue(Result);

		return true;
	}

	template<>
	bool AutomationToolCommonMethod::GetValueFromCommandLine<EComparisionType>(const FString& InKey, EComparisionType& OutValue)
	{
		FString Result;
		if (FString Key = AutomationToolCommonMethod::GetMatchKey(InKey);
			!FParse::Value(FCommandLine::Get(), *Key, Result))
		{
			UE_LOG(SimpleAutomatedToolCommonLog, Display, TEXT("%s was not found the value. Use default value."), *Key);
			return false;
		}

		OutValue = EnumTool<EComparisionType>::GetEnumValue(Result);

		return true;
	}

	template<>
	bool AutomationToolCommonMethod::GetValueFromCommandLine<ECompressType>(const FString& InKey, ECompressType& OutValue)
	{
		FString Result;
		if (FString Key = AutomationToolCommonMethod::GetMatchKey(InKey);
			!FParse::Value(FCommandLine::Get(), *Key, Result))
		{
			UE_LOG(SimpleAutomatedToolCommonLog, Display, TEXT("%s was not found the value. Use default value."), *Key);
			return false;
		}

		OutValue = EnumTool<ECompressType>::GetEnumValue(Result);

		return true;
	}

	template<>
	bool AutomationToolCommonMethod::GetValueFromCommandLine<ESimpleHTTPVerbType>(const FString& InKey, ESimpleHTTPVerbType& OutValue)
	{
		FString Result;
		if (FString Key = GetMatchKey(InKey);
			!FParse::Value(FCommandLine::Get(), *Key, Result))
		{
			UE_LOG(SimpleAutomatedToolCommonLog, Error, TEXT("%s was not found the value."), *Key);
			return false;
		}

		OutValue = EnumTool<ESimpleHTTPVerbType>::GetEnumValue(Result);

		return true;
	}

}