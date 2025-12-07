#pragma once

namespace AutomatedExecutionPath
{
	FString SIMPLEAUTOMATEDTOOLCOMMON_API GetCommandPath();
	FString SIMPLEAUTOMATEDTOOLCOMMON_API GetVisualStudioLogPath();

	//.sh Shell脚本文件路径，多用于Unix/Linux系统，git会用到
	FString SIMPLEAUTOMATEDTOOLCOMMON_API GetShPath();

	//.bat Windows批处理文件路径
	FString SIMPLEAUTOMATEDTOOLCOMMON_API GetBatPath();

	FString SIMPLEAUTOMATEDTOOLCOMMON_API GetAutomatedPath();
	FString SIMPLEAUTOMATEDTOOLCOMMON_API GetProjectPath();
	FString SIMPLEAUTOMATEDTOOLCOMMON_API GetEnginePath();
	FString SIMPLEAUTOMATEDTOOLCOMMON_API GetProjectSavePath();
	FString SIMPLEAUTOMATEDTOOLCOMMON_API GetProjectConfigPath();
	FString SIMPLEAUTOMATEDTOOLCOMMON_API GetEngineBinariesPath();
	FString SIMPLEAUTOMATEDTOOLCOMMON_API GetProjectBinariesPath();
}