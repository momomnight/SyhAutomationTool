#pragma once

#include "CoreMinimal.h"
#include <type_traits>

DEFINE_LOG_CATEGORY_STATIC(SyhAutomaitonToolLog, Log, All);

#define SyhLogDisplay(Format, ...) UE_LOG(SyhAutomaitonToolLog, Display, Format, ##__VA_ARGS__);
#define SyhLogLog(Format, ...) UE_LOG(SyhAutomaitonToolLog, Log, Format, ##__VA_ARGS__);
#define SyhLogError(Format, ...) UE_LOG(SyhAutomaitonToolLog, Error, Format, ##__VA_ARGS__);
//	AutomaitonTool日志系统
