#include "SyhAutomationToolType.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


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


const FString FAutomatedCallRelated::CallTypeKey = TEXT("CallType");
const FString FAutomatedCallRelated::CallPathKey = TEXT("CallPath");
const FString FAutomatedCallRelated::ParametersKey = TEXT("Parameters");

const FString FAutomatedCallCustomContentRelated::ContentKey = TEXT("Content");
const FString FAutomatedCallCustomContentRelated::WaitTime_IntKey = TEXT("WaitTime");

const FString FAutomatedUEProjectRefreshRelated::UnrealBuildToolPathKey = TEXT("UnrealBuildToolPath");
const FString FAutomatedUEProjectRefreshRelated::ProjectUProjectPathKey = TEXT("ProjectUProjectPath");

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

const FString FAutomatedOSSRelated::OSSComandsKey = TEXT("OSSComands");

const FString FAutomatedHTTPRelated::URLKey = TEXT("URL");
const FString FAutomatedHTTPRelated::CustomMetaDataKey = TEXT("CustomMetaData");
const FString FAutomatedHTTPRelated::Sync_BooleanKey = TEXT("bSynchronous");
const FString FAutomatedHTTPRelated::Binaries_BooleanKey = TEXT("bBinaries");
const FString FAutomatedHTTPRelated::ContentBodyKey = TEXT("ContentBody");
const FString FAutomatedHTTPRelated::Timeout_FloatKey = TEXT("Timeout");
const FString FAutomatedHTTPRelated::SavePathKey = TEXT("SavePath");

void SetEnumImpl()
{
	FCommandProtocolRelated::CreateImpl(CommandProtocolBase);
	FComparisionTypeRelated::CreateImpl(ComparisionTypeBase);
	FHttpVerbTypeRelated::CreateImpl(HttpVerbTypeBase);
}
