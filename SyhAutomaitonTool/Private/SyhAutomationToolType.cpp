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


FString FAutomatedCommandNestingRelated::GetComparisionTypeFullName(const FString& InShortName)
{
	for (auto& Temp : FAutomatedCommandNestingRelated::ComparisionTypeName)
	{
		if (Temp.Equals(InShortName, ESearchCase::IgnoreCase))
		{
			return FAutomatedCommandNestingRelated::ComparisionTypeStringPrefix + Temp;
		}
	}

	return FAutomatedCommandNestingRelated::ComparisionTypeStringPrefix + TEXT("None");
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
	TEXT("None"),					//0
	TEXT("Call"),					//1
	TEXT("Call_Custom_Content"),	//2
	TEXT("UE_Project_Refresh"),		//3
	TEXT("Command_Nesting"),		//4
	TEXT("Deployment_Copy"),		//5
	TEXT("Deployment_Delete"),		//6
	TEXT("VS_Compile"),				//7
	TEXT("Git"),					//8
	TEXT("UE_Packaging"),			//9
	TEXT("UE_Plugin_Packaging"),	//10
	TEXT("Condition_Command"),		//11

	TEXT("Max")
};

const TArray<FString> FAutomatedCommandNestingRelated::ComparisionTypeName =
{
	TEXT("None"),
	TEXT("Sequence"),
	TEXT("Break"),
};

const FString FAutomatedCommandNestingRelated::ComparisionTypeStringPrefix = TEXT("EComparisionType::COMPARISION_");
const int32 FAutomatedCommandNestingRelated::ComparisionTypeStringPrefixLength = FAutomatedCommandNestingRelated::ComparisionTypeStringPrefix.Len();


const FString FAutomatedCallRelated::CallTypeKey = TEXT("CallType");
const FString FAutomatedCallRelated::CallPathKey = TEXT("CallPath");
const FString FAutomatedCallRelated::ParametersKey = TEXT("Parameters");

const FString FAutomatedCallCustomContentRelated::ContentKey = TEXT("Content");
const FString FAutomatedCallCustomContentRelated::WaitTimeKey = TEXT("WaitTime");

const FString FAutomatedUEProjectRefreshRelated::UnrealBuildToolPathKey = TEXT("UnrealBuildToolPath");
const FString FAutomatedUEProjectRefreshRelated::ProjectUProjectPathKey = TEXT("ProjectUProjectPath");

const FString FAutomatedCommandNestingRelated::ComparisionTypeKey = TEXT("ComparisionType");
const FString FAutomatedCommandNestingRelated::CommandListKey = TEXT("CommandList");

const FString  FAutomatedDeploymentRelated::FilesKey = TEXT("Files");

const FString  FAutomatedDeploymentCopyRelated::SourceKey = TEXT("Source");
const FString  FAutomatedDeploymentCopyRelated::DeleteMovedFiles_BooleanKey = TEXT("bDeleteMovedFiles");
const FString  FAutomatedDeploymentCopyRelated::DestinationKey = TEXT("Destination");

const FString FAutomatedVSCompileRelated::BuildStateKey = TEXT("BuildState");
const FString FAutomatedVSCompileRelated::SlnProjectPathKey = TEXT("SlnProjectPath");
const FString FAutomatedVSCompileRelated::ProjectKey = TEXT("Project");

const FString  FAutomatedGitRelated::ProjectPathKey = TEXT("ProjectPath");
const FString  FAutomatedGitRelated::GitCommandsKey = TEXT("GitCommands");

const FString FAutomatedUEPackagingBaseRelated::EngineDirKey = TEXT("EngineDir");

const FString FAutomatedUEPackagingRelated::UProjectPathKey = TEXT("UProjectPath");
const FString FAutomatedUEPackagingRelated::PlatformKey = TEXT("Platform");
const FString FAutomatedUEPackagingRelated::BuildStateKey = TEXT("BuildState");
const FString FAutomatedUEPackagingRelated::BuildTargetKey = TEXT("BuildTarget");
const FString FAutomatedUEPackagingRelated::ArchiveDirectoryKey = TEXT("ArchiveDirectory");

const FString FAutomatedUEPluginPackagingRelated::PathOfUPluginToTargetKey = TEXT("PathOfUPluginToTarget");
const FString FAutomatedUEPluginPackagingRelated::SourceKey = TEXT("Source");;
const FString FAutomatedUEPluginPackagingRelated::TargetKey = TEXT("Target");;

const FString FAutomatedConditionCommandRelated::TrueCommandListKey = TEXT("TrueCommandList");
const FString FAutomatedConditionCommandRelated::FalseCommandListKey = TEXT("FalseCommandList");
