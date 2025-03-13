#include "Element/UEPakProject/AutomatedPak_UEPluginPak.h"



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


struct FOperatePath_UEPluginPackaging : public FOperatePath
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
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	bool Result = true;
	Result &= GetValueFromCommandLine(OwnConfig::RelatedString::EngineDirKey, SelfConfig->EngineDir);
	Result &= ParseStrings(OwnConfig::RelatedString::PathOfUPluginToTargetKey, SelfConfig->PathOfUPluginToTarget, true);
	if (Result)
	{
		return true;
	}
	else
	{
		FLogPrint::PrintError(TEXT("build parameter"), GetCommandName<Self>());
		return false;
	}
}

bool FAutomatedCode_UE_Plugin_Packaging::Execute()
{
	FLogPrint::PrintDisplay(TEXT("Execute"), TEXT("UE_Plugin_Packaging"));
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	check(!SelfConfig->EngineDir.IsEmpty());
	check(!SelfConfig->PathOfUPluginToTarget.IsEmpty());

	RunUATPath = FString::Printf(TEXT("%s/Build/BatchFile/RunUAT.bat"), *SelfConfig->EngineDir);

	TMap<FString, FString> ExecuteContent;
	if (!PathFilter<FOperateFileOrDirectory_DeletePath, FOperatePath_UEPluginPackaging>(ExecuteContent, SelfConfig->PathOfUPluginToTarget))
	{
		FLogPrint::PrintErrorCustom(TEXT("Fail to filter path."));
	}

	TMultiMap<FString, bool> TaskResult;
	for (auto& Temp : ExecuteContent)
	{
		HandleTimePath(Temp.Value);
		TaskResult.Add(Temp.Key, Execute(Temp.Key, Temp.Value));
	}

	return false;
}

bool FAutomatedCode_UE_Plugin_Packaging::Execute(const FString& InPluginPath, const FString& InArchivePath)
{
	FString Content = FString::Printf(
		TEXT("\
cmd.exe /c \
\" \
\"%s\"\
BuildPlugin \
-Plugin=\"%s\" \
-Package=\"%s\" \
-CreateSubFolder \
\" \
-nocompile \
-nocompileuat"),
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