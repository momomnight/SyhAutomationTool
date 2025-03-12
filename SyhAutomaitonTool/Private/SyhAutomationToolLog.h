#pragma once

#include "CoreMinimal.h"

DEFINE_LOG_CATEGORY_STATIC(SyhAutomaitonToolLog, Log, All);


//	AutomaitonTool日志系统
struct FLogPrint
{
	static void PrintDisplay(const FString& InOperationName, const FString& InCommandName)
	{
		UE_LOG(SyhAutomaitonToolLog, Display, TEXT("the command of %s is successful to %s"), *InCommandName, *InOperationName);
	}
	static void PrintLog(const FString& InOperationName, const FString& InCommandName)
	{
		UE_LOG(SyhAutomaitonToolLog, Log, TEXT("the command of %s is successful to %s"), *InCommandName, *InOperationName);
	}
	static void PrintError(const FString& InOperationName, const FString& InCommandName)
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("the command of %s failed to %s"), *InCommandName, *InOperationName);
	}

	static void PrintDisplayCustom(const FString& Msg)
	{
		UE_LOG(SyhAutomaitonToolLog, Display, TEXT("%s"), *Msg);
	}
	static void PrintLogCustom(const FString& Msg)
	{
		UE_LOG(SyhAutomaitonToolLog, Log, TEXT("%s"), *Msg);
	}
	static void PrintErrorCustom(const FString& Msg)
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("%s"), *Msg);
	}

};