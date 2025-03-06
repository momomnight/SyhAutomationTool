#include "Misc/AutomatedExecutionPath.h"



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
			FPaths::ProjectDir() / TEXT("Automated") /
			FGuid::NewGuid().ToString().RightChop(24) + TEXT(".sh")
		);
	}

	FString GetBatPath()
	{
		return FPaths::ConvertRelativePathToFull
		(
			FPaths::ProjectDir() / TEXT("Automated") /
			FGuid::NewGuid().ToString().RightChop(24) + TEXT(".bat")
		);
	}


}