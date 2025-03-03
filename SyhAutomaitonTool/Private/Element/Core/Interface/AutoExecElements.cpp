#include "Element/Core/Interface/AutoExecElements.h"
#include "SyhAutomationToolCommon.h"

void FAutoExecElements::HandleTimePath(FString& InPath)
{
	if (InPath.Contains(TEXT("%~Time")))
	{
		InPath.ReplaceInline(TEXT("%~Time"), *PackagingSaveFileName);
	}
}

bool FAutoExecElements::ParseArrayStrings(const FString& InKey, TArray<FString>& InArray)
{
	FString NewString;

	if (!FParse::Value(FCommandLine::Get(), *InKey, NewString))
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("%s was not found the value."), *InKey);
		return false;
	}

	if (NewString.IsEmpty())
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Value is empty."));
		return false;
	}

	int32 Result = NewString.ParseIntoArray(InArray, TEXT("&&"));

	if (Result != 0)
	{
		return true;
	}
	else
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Failure to parse %s string."), *InKey);
		return false;
	}

}
