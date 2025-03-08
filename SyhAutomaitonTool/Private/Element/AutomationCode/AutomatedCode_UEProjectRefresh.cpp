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
	bool Result = true;
	Result &= GetValueFromCommandLine(OwnConfig::RelatedString::UnrealBuildToolPathKey, SelfConfig->UnrealBuildToolPath);
	Result &= GetValueFromCommandLine(OwnConfig::RelatedString::ProjectUProjectPathKey, SelfConfig->ProjectUProjectPath);

	if (Result)
	{
		FPaths::NormalizeFilename(SelfConfig->UnrealBuildToolPath);
		FPaths::RemoveDuplicateSlashes(SelfConfig->UnrealBuildToolPath);
		FPaths::NormalizeFilename(SelfConfig->ProjectUProjectPath);
		FPaths::RemoveDuplicateSlashes(SelfConfig->ProjectUProjectPath);
	}
	return Result;

}

bool FAutomatedCode_UEProjectRefresh::Execute()
{
	TSharedPtr<OwnConfig> SelfConfig= GetSelfConfig<OwnConfig>();

	bool ReturnValue = false;

	check(!SelfConfig->ProjectUProjectPath.IsEmpty());
	check(!SelfConfig->UnrealBuildToolPath.IsEmpty());

	UE_LOG(SyhAutomaitonToolLog, Display, TEXT("----------Start UE Project Refresh----------"));

	SelfConfig->CallType = TEXT("exe");

	SelfConfig->CallPath = SelfConfig->UnrealBuildToolPath;

	GetBatPathString(SelfConfig->ProjectUProjectPath);
	SelfConfig->Parameters = FString::Printf(TEXT(" -projectfiles -project=%s -game -engine -progress "), *SelfConfig->ProjectUProjectPath);

	ReturnValue = Super::Execute();

	UE_LOG(SyhAutomaitonToolLog, Display, TEXT("----------End UE Project Refresh----------"));

	return ReturnValue;
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT