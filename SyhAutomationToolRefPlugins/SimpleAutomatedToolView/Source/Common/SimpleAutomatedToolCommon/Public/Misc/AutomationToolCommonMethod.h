#pragma once
#include "CoreMinimal.h"
#include "SimpleAutomatedToolType.h"
#include "DllExports/AutomationToolCommonMethod.h"
#include "SimpleAutomatedToolCommonLog.h"


namespace AutomationToolCommonMethod
{

	//String(xxxx xxxx)-> "xxxx xxxx"
	//对于.bat文件，使用"xxx/xxx xxx/xx"就可以读取
	//对于.sh文件
	void AdaptCommandArgsStringWithSpace(FString& InKey);

	void GetBatPathString(FString& InPath);

	inline FString GetMatchKey(const FString& InKey) { return FString(TEXT("-") + InKey + TEXT("=")); }

	inline bool IsMatchKey(const FString& InKey)
	{
		if (InKey.StartsWith(TEXT("-")) && InKey.EndsWith(TEXT("=")))
		{
			return true;
		}
		return false;
	}

	//xxx1&&xxx2
	bool ParseCommandLineByKey(const FString& InKey, TArray<FString>& InArray, bool bPath);

	//xxx1||yyy1&&xxx2||yyy2
	bool ParseCommandLineByKey(const FString& InKey, TMap<FString, FString>& InArray, bool bPath);

}
