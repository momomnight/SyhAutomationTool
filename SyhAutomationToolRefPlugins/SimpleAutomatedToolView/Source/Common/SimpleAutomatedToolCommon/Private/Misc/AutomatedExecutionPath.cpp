#include "DllExports/AutomatedExecutionPath.h"



namespace AutomatedExecutionPath
{
	FString GetCommandPath()
	{
		//源码版格式C:\MyProgram\UnrealEngine-5.3.2-release\SyhAutomaitonTool\Command
		return FPaths::ConvertRelativePathToFull(FPaths::ProjectDir() / TEXT("Command"));
	}

	FString GetVisualStudioLogPath()
	{
		return FPaths::ConvertRelativePathToFull(FPaths::ProjectDir() / TEXT("Saved/Logs")
			/ FGuid::NewGuid().ToString().RightChop(24) + TEXT(".txt")
		);
	}

	FString GetShPath()
	{
		return FPaths::ConvertRelativePathToFull
		(
			GetAutomatedPath() /
			FGuid::NewGuid().ToString().RightChop(24) + TEXT(".sh")
		);
	}

	FString GetBatPath()
	{
		return FPaths::ConvertRelativePathToFull
		(
			GetAutomatedPath() /
			FGuid::NewGuid().ToString().RightChop(24) + TEXT(".bat")
		);
	}

	FString GetAutomatedPath()
	{
		return FPaths::ConvertRelativePathToFull(FPaths::ProjectDir() / TEXT("Automated"));
	}

	FString GetProjectPath()
	{
		return  FPaths::ConvertRelativePathToFull(FPaths::ProjectDir());
	}

	FString GetEnginePath()
	{
		return  FPaths::ConvertRelativePathToFull(FPaths::EngineDir());
	}

	FString GetProjectSavePath()
	{
		return FPaths::ConvertRelativePathToFull(FPaths::ProjectSavedDir());
	}

	FString GetProjectConfigPath()
	{
		return FPaths::ConvertRelativePathToFull(FPaths::ProjectConfigDir());
	}

	FString GetEngineBinariesPath()
	{
		return FPaths::ConvertRelativePathToFull(FPaths::EngineDir() / TEXT("Binaries"));
	}

	FString GetProjectBinariesPath()
	{
		return FPaths::ConvertRelativePathToFull(FPaths::ProjectDir() / TEXT("Binaries"));
	}


}