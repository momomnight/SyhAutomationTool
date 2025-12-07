#include "Element/Git/AutomatedGit.h"
#include "SyhAutomationToolCommon.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

FAutomatedCode_Git::FAutomatedCode_Git() : Super()
{
	ShPath = AutomatedExecutionPath::GetShPath();
	BatPath = AutomatedExecutionPath::GetBatPath();
}

FAutomatedCode_Git::~FAutomatedCode_Git()
{
	SyhAutomationToolCommon::DeleteFile(ShPath);
	SyhAutomationToolCommon::DeleteFile(BatPath);
}

void FAutomatedCode_Git::Init()
{
}

bool FAutomatedCode_Git::BuildParameter(const FString& InJsonStr)
{
	return AutomationJson::JsonStringToAutomatedConfig<OwnConfig>(InJsonStr, *GetSelfConfig<OwnConfig>());
}

bool FAutomatedCode_Git::BuildParameter()
{
	bool Result = AutomationCommandLine::CommandLineArgumentToAutomatedConfig<OwnConfig>(GetSelfConfig<OwnConfig>());
	if (!Result)
	{
		SyhLogError(TEXT("BuildParameter is failure to execute. Locate in %s"), GetCommandName<Self>());
	}
	return Result;
}

bool FAutomatedCode_Git::Execute()
{
	UE_LOG(SyhAutomaitonToolLog, Display, TEXT("Execute the command of Git"));
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	if (SelfConfig->GitCommands.Num() > 0 && !SelfConfig->ProjectPath.IsEmpty())
	{
		//对于路径可以在双引号内加空格
		AutomationToolCommonMethod::GetBatPathString(SelfConfig->ProjectPath);

		//对于git命令中的字符串空格，如git commit -m "first commit"，无能为力，转义字符都试过没用，故使用"String(xxx)"方式替代
		for (auto& Temp : SelfConfig->GitCommands)
		{
			AutomationToolCommonMethod::AdaptCommandArgsStringWithSpace(Temp);
		}

		BuildExecutableFile(SelfConfig->ProjectPath, SelfConfig->GitCommands);
	}

	SelfConfig->CallType = TEXT("bat");
	SelfConfig->CallPath = BatPath;

	return Super::Execute();
}

void FAutomatedCode_Git::BuildExecutableFile(const FString& InPath, const TArray<FString>& InCommands)
{
	check(!ShPath.IsEmpty());
	check(!BatPath.IsEmpty());
	check(!InPath.IsEmpty());

	TArray<FString> ShFileContent;
	{
		ShFileContent.Add(FString::Printf(TEXT("cd %s "), *InPath));
		ShFileContent.Append(InCommands);
		check(FFileHelper::SaveStringArrayToFile(ShFileContent, *ShPath));
	}

	TArray<FString> BatFileContent;
	{
		BatFileContent.Add(TEXT("@echo off"));
		BatFileContent.Add(TEXT("echo Start Git Program"));
		BatFileContent.Add(FString::Printf(TEXT("start /wait \"sh\" \"%s\""), *ShPath));
		BatFileContent.Add(TEXT(""));
		BatFileContent.Add(TEXT("echo Quit"));
		BatFileContent.Add(TEXT("exit 0"));
		
		check(FFileHelper::SaveStringArrayToFile(BatFileContent, *BatPath));
	}

}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT