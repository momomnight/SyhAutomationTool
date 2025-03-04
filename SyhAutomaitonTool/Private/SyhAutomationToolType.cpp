#include "SyhAutomationToolType.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

FString FCommandProtocolRelated::GetProtocolFullName(const FString& InShortName)
{
	for (auto& Temp : FCommandProtocolRelated::CommandName)
	{
		if (Temp.Equals(InShortName, ESearchCase::IgnoreCase))
		{
			return FCommandProtocolRelated::ProtocolStringPrefix + Temp;
		}
	}

	return FCommandProtocolRelated::ProtocolStringPrefix + TEXT("None");
}

FString FAutomatedUEProjectRefreshRelated::GetUnrealBuildToolPath(const FString& InEnginePath)
{
	return FPaths::ConvertRelativePathToFull(InEnginePath) / TEXT("Binaries/DotNET/UnrealBuildTool/UnrealBuildTool.exe");
}

FString FAutomatedUEProjectRefreshRelated::GetProjectUProjectPath(const FString& InProjectPath)
{
	return FPaths::ConvertRelativePathToFull(InProjectPath) / FPaths::GetPathLeaf(InProjectPath) + TEXT(".uproject");;
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

const FString FCommandProtocolRelated::ProtocolStringPrefix = TEXT("ECommandProtocol::CMD_");
const int32 FCommandProtocolRelated::ProtocolStringPrefixLength = FCommandProtocolRelated::ProtocolStringPrefix.Len();
const FString FCommandProtocolRelated::CommandKey = TEXT("Command");
const TArray<FString> FCommandProtocolRelated::CommandName =
{
	TEXT("None"),
	TEXT("Call"),
	TEXT("Call_Custom_Content"),
	TEXT("UE_Project_Refresh"),
	TEXT("Command_Nesting"),
	TEXT("Deployment_Copy"),
	TEXT("Deployment_Delete"),
};


const FString FAutomatedCallRelated::CallTypeKey = TEXT("CallType");
const FString FAutomatedCallRelated::CallPathKey = TEXT("CallPath");
const FString FAutomatedCallRelated::ParametersKey = TEXT("Parameters");

const FString FAutomatedCallCustomContentRelated::ContentKey = TEXT("Content");
const FString FAutomatedCallCustomContentRelated::WaitTimeKey = TEXT("WaitTime");

const FString FAutomatedUEProjectRefreshRelated::UnrealBuildToolPathKey = TEXT("UnrealBuildToolPath");
const FString FAutomatedUEProjectRefreshRelated::ProjectUProjectPathKey = TEXT("ProjectUProjectPath");

const FString FAutomatedCommandNestingRelated::CommandListKey = TEXT("CommandList");

const FString  FAutomatedDeploymentRelated::FilesKey = TEXT("Files");

const FString  FAutomatedDeploymentCopyRelated::SourceKey = TEXT("Source");
const FString  FAutomatedDeploymentCopyRelated::DeleteMovedFiles_BooleanKey = TEXT("bDeleteMovedFiles");
const FString  FAutomatedDeploymentCopyRelated::DestinationKey = TEXT("Destination");
