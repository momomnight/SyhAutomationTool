
#pragma once

#include "CoreMinimal.h"

DEFINE_LOG_CATEGORY_STATIC(SyhToolViewLog, Log, All);


//	ToolView日志系统
#define SyhLogDisplay(Format, ...) UE_LOG(SyhToolViewLog, Display, Format, ##__VA_ARGS__);
#define SyhLogLog(Format, ...) UE_LOG(SyhToolViewLog, Log, Format, ##__VA_ARGS__);
#define SyhLogError(Format, ...) UE_LOG(SyhToolViewLog, Error, Format, ##__VA_ARGS__);
//	AutomaitonTool日志系统
