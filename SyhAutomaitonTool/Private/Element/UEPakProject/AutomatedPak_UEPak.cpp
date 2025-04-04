#include "Element/UEPakProject/AutomatedPak_UEPak.h"




#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT



void FAutomatedCode_UE_Packaging::Init()
{
}

bool FAutomatedCode_UE_Packaging::BuildParameter(const FString& InJsonStr)
{
	return AutomationJson::JsonStringToAutomatedConfig<OwnConfig>(InJsonStr, *GetSelfConfig<OwnConfig>());
}

bool FAutomatedCode_UE_Packaging::BuildParameter()
{
	bool Result = AutomationCommandLine::CommandLineArgumentToAutomatedConfig<OwnConfig>(GetSelfConfig<OwnConfig>());
	if (!Result)
	{
		SyhLogError(TEXT("BuildParameter is failure to execute. Locate in %s"), GetCommandName<Self>());
	}
	return Result;
}

bool FAutomatedCode_UE_Packaging::Execute()
{
	SyhLogDisplay(TEXT("Execute the command of UEPackaging"));
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	check(!SelfConfig->EngineDir.IsEmpty());
	check(!SelfConfig->UProjectPath.IsEmpty());
	check(!SelfConfig->ArchiveDirectory.IsEmpty());
	check(!SelfConfig->Platform.IsEmpty());
	check(!SelfConfig->BuildState.IsEmpty());
	check(!SelfConfig->ArchiveDirectory.IsEmpty());

	FString RunUATPath = FString::Printf(TEXT("%s/Build/BatchFiles/RunUAT.bat"), *SelfConfig->EngineDir);
	AutomationToolCommonMethod::GetBatPathString(RunUATPath);

	FString HeadName = FPaths::GetCleanFilename(SelfConfig->UProjectPath);
	HeadName.RemoveFromEnd(FPaths::GetExtension(HeadName, true));

	FString BuildBatPath = FString::Printf(
		TEXT("%s/Saved/Package/%s/%s.bat"),
		*FPaths::ConvertRelativePathToFull(FPaths::ProjectDir()),
		*HeadName,
		*FGuid::NewGuid().ToString().RightChop(24)
	);
	FPaths::RemoveDuplicateSlashes(BuildBatPath);

	AutomationToolCommonMethod::GetBatPathString(SelfConfig->UProjectPath);
	AutomationToolCommonMethod::GetBatPathString(SelfConfig->ArchiveDirectory);

	FString Content;
	if (SelfConfig->BuildTarget.Equals("Server"))
	{
		Content = FString::Printf(TEXT("\
%s BuildCookRun -project=%s -noP4 -platform=%s \
-clientconfig=%s -serverconfig=%s -cook -server -serverplatform=%s \
-noclient -build -stage -pak -archive -log -archivedirectory=%s"),
*RunUATPath, *SelfConfig->UProjectPath, *SelfConfig->Platform,
*SelfConfig->BuildState, *SelfConfig->BuildState, *SelfConfig->Platform,
*SelfConfig->ArchiveDirectory
);
	}
	else if(SelfConfig->BuildTarget.Equals("Client"))
	{
		Content = FString::Printf(TEXT("\
%s BuildCookRun -project=%s -noP4 -platform=%s \
-clientconfig=%s -serverconfig=%s -cook -allmaps \
-build -stage -pak -log -archive -archivedirectory=%s"),
*RunUATPath, *SelfConfig->UProjectPath, *SelfConfig->Platform,
*SelfConfig->BuildState, *SelfConfig->BuildState,
*SelfConfig->ArchiveDirectory
);
	}

	SelfConfig->CallPath = BuildBatPath;

	if (Content.IsEmpty())
	{
		SyhLogError(TEXT("Invalid parameters, please check parameters."));
		return false;
	}
	else
	{
		FFileHelper::SaveStringToFile(Content, *BuildBatPath);
	}

	bool Result = Super::Execute();

	if(FPaths::FileExists(BuildBatPath))
	{
		IFileManager::Get().Delete(*BuildBatPath);
	}
	return Result;
}




#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
