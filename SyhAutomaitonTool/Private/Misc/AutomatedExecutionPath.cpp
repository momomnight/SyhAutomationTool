#include "Misc/AutomatedExecutionPath.h"



namespace AutomatedExecutionPath
{
	FString GetCommandPath()
	{
		return FPaths::ConvertRelativePathToFull(FPaths::ProjectDir() / TEXT("Command"));
	}

	FString GetVisualStudioLogPath()
	{
		return FString();
	}

	FString GetShPath()
	{
		return FString();
	}

	FString GetBatPath()
	{
		return FString();
	}
}