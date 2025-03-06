#include "Element/Git/AutomatedGit.h"

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
	FFileStatData ShFileStatData = IFileManager::Get().GetStatData(*ShPath);
	FFileStatData BatFileStatData = IFileManager::Get().GetStatData(*BatPath);
	DeletePath(ShFileStatData, ShPath);
	DeletePath(BatFileStatData, BatPath);
}

void FAutomatedCode_Git::Init()
{
	CreateConfig<OwnConfig>();
}

bool FAutomatedCode_Git::BuildParameter(const FString& InJsonStr)
{
	return AutomationJson::JsonStringToAutomatedConfig<OwnConfig>(InJsonStr, *GetSelfConfig<OwnConfig>());
}

bool FAutomatedCode_Git::BuildParameter()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	if (!FParse::Value(FCommandLine::Get(), TEXT("-ProjectPath="), SelfConfig->ProjectPath))
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("-ProjectPath= was not found the value."));
		return false;
	}

	FPaths::NormalizeFilename(SelfConfig->ProjectPath);
	FPaths::RemoveDuplicateSlashes(SelfConfig->ProjectPath);


	if(!ParseArrayStrings(TEXT("-GitCommands="), SelfConfig->GitCommands))
	{
		return false;
	}

	check(SelfConfig->GitCommands.Num() > 0);

	return true;
}

bool FAutomatedCode_Git::Execute()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	if (SelfConfig->GitCommands.Num() > 0 && !SelfConfig->ProjectPath.IsEmpty())
	{
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