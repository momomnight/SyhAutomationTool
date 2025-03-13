#pragma once

#include "CoreMinimal.h"

DEFINE_LOG_CATEGORY_STATIC(SyhAutomaitonToolLog, Log, All);



//	AutomaitonTool日志系统
struct FLogPrint
{
	static void PrintDisplay(const TCHAR* InOperationName, const TCHAR* InCommandName)
	{
		UE_LOG(SyhAutomaitonToolLog, Display, TEXT("the command of %s is successful to %s"), InCommandName, InOperationName);
	}
	static void PrintLog(const TCHAR* InOperationName, const TCHAR* InCommandName)
	{
		UE_LOG(SyhAutomaitonToolLog, Log, TEXT("the command of %s is successful to %s"), InCommandName, InOperationName);
	}
	static void PrintError(const TCHAR* InOperationName, const TCHAR* InCommandName)
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("the command of %s failed to %s"), InCommandName, InOperationName);
	}

	static void PrintDisplayCustom(const TCHAR* Msg)
	{
		UE_LOG(SyhAutomaitonToolLog, Display, TEXT("%s"), Msg);
	}
	static void PrintLogCustom(const TCHAR* Msg)
	{
		UE_LOG(SyhAutomaitonToolLog, Log, TEXT("%s"), Msg);
	}
	static void PrintErrorCustom(const TCHAR* Msg)
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("%s"), Msg);
	}
}; 