#include "Element/UEPakProject/AutomatedPak_UEPluginPak.h"
#include "Core/SimpleAutomationTool.h"


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


struct FOperatePath_UEPluginPackaging : public SimpleAutomationToolCommon::FOperatePath
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
	GetSelfConfig<OwnConfig>()->PathOfUPluginToTarget.Empty();
}

bool FAutomatedCode_UE_Plugin_Packaging::BuildParameter(const FString& InJsonStr)
{
	return AutomationJson::JsonStringToAutomatedConfig(InJsonStr, *GetSelfConfig<OwnConfig>());
}

bool FAutomatedCode_UE_Plugin_Packaging::BuildParameter()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	bool Result = true;
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine(Tool<OwnConfig>::EngineDirKey, SelfConfig->EngineDir);
	Result &= SimpleAutomationToolCommon::ParseCommandLineByKey(Tool<OwnConfig>::PathOfUPluginToTargetKey, SelfConfig->PathOfUPluginToTarget, true);
	if (Result)
	{
		FPaths::NormalizeFilename(SelfConfig->EngineDir);
		FPaths::RemoveDuplicateSlashes(SelfConfig->EngineDir);
		return true;
	}
	else
	{
		SyhLogError(TEXT("the command of %s is failure to build parameter"), GetCommandName<Self>());
		return false;
	}
}

bool FAutomatedCode_UE_Plugin_Packaging::Execute()
{
	SyhLogDisplay(TEXT("the command of UE_Plugin_Packaging is executing"));
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	check(!SelfConfig->EngineDir.IsEmpty());
	check(!SelfConfig->PathOfUPluginToTarget.IsEmpty());

	RunUATPath = FString::Printf(TEXT("%s/Engine/Build/BatchFiles/RunUAT.bat"), *SelfConfig->EngineDir);

	if (!SimpleAutomationToolCommon::PathExists(RunUATPath, false))
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("RunUAT.bat no exist."));
	}


	TMap<FString, FString> ExecuteContent;
	if (!SimpleAutomationToolCommon::PathFilter<SimpleAutomationToolCommon::FOperateFileOrDirectory_PathExists,
		SimpleAutomationToolCommon::FOperateFileOrDirectory_PathExists,
		FOperatePath_UEPluginPackaging>
		(ExecuteContent, SelfConfig->PathOfUPluginToTarget))
	{
		SyhLogError(TEXT("Fail to filter path."));
	}

	TMultiMap<FString, bool> TaskResult;
	for (auto& Temp : ExecuteContent)
	{
		SimpleAutomationToolCommon::HandleTimePath(Temp.Value);
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