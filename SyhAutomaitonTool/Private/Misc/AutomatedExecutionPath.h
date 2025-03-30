#pragma once

#include "CoreMinimal.h"


namespace AutomatedExecutionPath
{
	FString GetCommandPath();
	FString GetVisualStudioLogPath();

	//.sh Shell脚本文件路径，多用于Unix/Linux系统，git会用到
	FString GetShPath();

	//.bat Windows批处理文件路径
	FString GetBatPath();

	FString GetAutomatedPath();
	FString GetProjectPath();
	FString GetEnginePath();
	FString GetProjectSavePath();
	FString GetProjectConfigPath();
	FString GetEngineBinariesPath();
	FString GetProjectBinariesPath();
}