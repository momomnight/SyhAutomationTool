#include "Element/UEPakProject/AutomatedPak_UEPluginPak.h"
#include "Core/SimpleAutomationTool.h"


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


struct FProcessPath_UEPluginPackaging : public SyhAutomationToolCommon::FProcessPath_Base
{
	virtual void operator()(TMap<FString, FString>& OutContent, const FString& SourcePath, const FString& TargetPath)
	{
		OutContent.Add(SourcePath, TargetPath);
	}
	virtual void operator()(TMap<FString, FString>& OutContent, const FString& InPath, const FString& SourcePath, const FString& TargetPath)
	{
		if (InPath.Contains(TEXT(".uplugin")))
		{
			FString HeadName = FPaths::GetCleanFilename(InPath);
			HeadName.RemoveFromEnd(FPaths::GetExtension(HeadName, true));
			OutContent.Add(InPath, TargetPath / HeadName);
		}
	}
};

FAutomatedCode_UE_Plugin_Packaging::FAutomatedCode_UE_Plugin_Packaging()
{

}

FAutomatedCode_UE_Plugin_Packaging::~FAutomatedCode_UE_Plugin_Packaging()
{
}

void FAutomatedCode_UE_Plugin_Packaging::Init()
{
}

bool FAutomatedCode_UE_Plugin_Packaging::BuildParameter(const FString& InJsonStr)
{
	return AutomationJson::JsonStringToAutomatedConfig(InJsonStr, *GetSelfConfig<OwnConfig>());
}

bool FAutomatedCode_UE_Plugin_Packaging::BuildParameter()
{
	bool Result = AutomationCommandLine::CommandLineArgumentToAutomatedConfig<OwnConfig>(GetSelfConfig<OwnConfig>());
	if (!Result)
	{
		SyhLogError(TEXT("BuildParameter is failure to execute. Locate in %s"), GetCommandName<Self>());
	}
	return Result;
}

bool FAutomatedCode_UE_Plugin_Packaging::Execute()
{
	SyhLogDisplay(TEXT("the command of UE_Plugin_Packaging is executing"));
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	check(!SelfConfig->EngineDir.IsEmpty());
	check(!SelfConfig->PathOfUPluginToTarget.IsEmpty());

	RunUATPath = FString::Printf(TEXT("%s/Engine/Build/BatchFiles/RunUAT.bat"), *SelfConfig->EngineDir);

	if (!SyhAutomationToolCommon::PathExists(RunUATPath, false))
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("RunUAT.bat no exist."));
	}


	TMap<FString, FString> ExecuteContent;
	if (!SyhAutomationToolCommon::PathFilter<SyhAutomationToolCommon::FPreprocessPath_PathExists,
		SyhAutomationToolCommon::FPreprocessPath_PathExists,
		FProcessPath_UEPluginPackaging>
		(ExecuteContent, SelfConfig->PathOfUPluginToTarget))
	{
		SyhLogError(TEXT("Fail to filter path."));
	}

	TMultiMap<FString, bool> TaskResult;
	for (auto& Temp : ExecuteContent)
	{
		TaskResult.Add(Temp.Key, Execute(Temp.Key, Temp.Value));
	}

	SyhLogDisplay(TEXT("Start to evaluate results."));

	bool Result = SimpleAutomationTool::EvaluateTaskResult<FString>(TaskResult);

	for (auto& Temp : TaskResult)
	{
		if (Temp.Value)
		{
			SyhLogDisplay(TEXT("[%s] is successful to package."), *Temp.Key);
		}
		else
		{
			SyhLogError(TEXT("[%s] is failure to package."), *Temp.Key);
		}
	}

	SyhLogDisplay(TEXT("End to evaluate results."));

	if (Result)
	{
		return true;
	}
	else
	{
		SyhLogError(TEXT("the command of UE_Plugin_Packaging is failure to execute"));
		return false;
	}
}

bool FAutomatedCode_UE_Plugin_Packaging::Execute(const FString& InPluginPath, const FString& InArchivePath)
{
	FString Content = FString::Printf(
		TEXT("\
cmd.exe /c \
\"\
\"%s\" \
BuildPlugin \
-Plugin=\"%s\" \
-Package=\"%s\" \
-CreateSubFolder \
\" \
-nocompile \
-nocompileuat\n\rpause"),
*RunUATPath, *InPluginPath, *InArchivePath
	);

	FString BatPath = AutomatedExecutionPath::GetBatPath();
	FFileHelper::SaveStringToFile(Content, *BatPath);

	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	SelfConfig->CallPath = BatPath;
	SelfConfig->CallType = TEXT("bat");
	bool Result = Super::Execute();

	if (FPaths::FileExists(BatPath))
	{
		IFileManager::Get().Delete(*BatPath);
	}

	return Result;
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT