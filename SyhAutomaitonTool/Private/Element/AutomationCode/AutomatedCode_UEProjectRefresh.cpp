#include "Element/AutomationCode/AutomatedCode_UEProjectRefresh.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

void FAutomatedCode_UEProjectRefresh::Init()
{
	CreateConfig<OwnConfig>();
}

bool FAutomatedCode_UEProjectRefresh::BuildParameter(const FString& InJsonStr)
{
	return AutomationJson::JsonStringToAutomatedConfig<OwnConfig>(InJsonStr, *GetSelfConfig<OwnConfig>());
}

bool FAutomatedCode_UEProjectRefresh::BuildParameter()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	if (!FParse::Value(FCommandLine::Get(), TEXT("-UnrealBuildToolPath="), SelfConfig->UnrealBuildToolPath))
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("-UnrealBuildToolPath= was not found the path of UBT."));
		return false;
	}
	if (!FParse::Value(FCommandLine::Get(), TEXT("-ProjectUProjectPath="), SelfConfig->ProjectUProjectPath))
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("-ProjectUProjectPath= was not found the path of the project."));
		return false;
	}
	FPaths::NormalizeDirectoryName(SelfConfig->UnrealBuildToolPath);
	FPaths::RemoveDuplicateSlashes(SelfConfig->UnrealBuildToolPath);
	FPaths::NormalizeDirectoryName(SelfConfig->ProjectUProjectPath);
	FPaths::RemoveDuplicateSlashes(SelfConfig->ProjectUProjectPath);
	return true;
}

bool FAutomatedCode_UEProjectRefresh::Execute()
{
	TSharedPtr<OwnConfig> SelfConfig= GetSelfConfig<OwnConfig>();

	bool ReturnValue = false;

	check(!SelfConfig->ProjectUProjectPath.IsEmpty());
	check(!SelfConfig->UnrealBuildToolPath.IsEmpty());

	UE_LOG(SyhAutomaitonToolLog, Display, TEXT("----------Start UE Project Refresh----------"));

	SelfConfig->Parameters = FString::Printf(TEXT(" -projectfiles -project=\"%s\" -game -engine -progress "), *SelfConfig->ProjectUProjectPath);

	if (SelfConfig->CallType.IsEmpty() || SelfConfig->CallType.Equals(TEXT("bat")))
	{
		SelfConfig->CallType = TEXT("exe");
	}

	SelfConfig->CallPath = SelfConfig->UnrealBuildToolPath;

	ReturnValue = Super::Execute();

	UE_LOG(SyhAutomaitonToolLog, Display, TEXT("----------End UE Project Refresh----------"));

	return ReturnValue;
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT