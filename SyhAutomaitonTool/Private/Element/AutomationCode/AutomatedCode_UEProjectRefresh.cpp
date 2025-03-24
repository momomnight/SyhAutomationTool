#include "Element/AutomationCode/AutomatedCode_UEProjectRefresh.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

FAutomatedCode_UEProjectRefresh::FAutomatedCode_UEProjectRefresh()
{
}

FAutomatedCode_UEProjectRefresh::~FAutomatedCode_UEProjectRefresh()
{
}

void FAutomatedCode_UEProjectRefresh::Init()
{
}

bool FAutomatedCode_UEProjectRefresh::BuildParameter(const FString& InJsonStr)
{
	return AutomationJson::JsonStringToAutomatedConfig<OwnConfig>(InJsonStr, *GetSelfConfig<OwnConfig>());
}

bool FAutomatedCode_UEProjectRefresh::BuildParameter()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	bool Result = true;
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine(Tool<OwnConfig>::UnrealBuildToolPathKey, SelfConfig->UnrealBuildToolPath);
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine(Tool<OwnConfig>::ProjectUProjectPathKey, SelfConfig->ProjectUProjectPath);

	if (Result)
	{
		FPaths::NormalizeFilename(SelfConfig->UnrealBuildToolPath);
		FPaths::RemoveDuplicateSlashes(SelfConfig->UnrealBuildToolPath);
		FPaths::NormalizeFilename(SelfConfig->ProjectUProjectPath);
		FPaths::RemoveDuplicateSlashes(SelfConfig->ProjectUProjectPath);
		return true;
	}
	else
	{
		SyhLogError(TEXT("%s is failure to build parameter"), GetCommandName<Self>());
		return false;
	}
}

bool FAutomatedCode_UEProjectRefresh::Execute()
{
	SyhLogDisplay(TEXT("Execute the command of UEProjectRefresh"));
	TSharedPtr<OwnConfig> SelfConfig= GetSelfConfig<OwnConfig>();

	bool ReturnValue = false;

	check(!SelfConfig->ProjectUProjectPath.IsEmpty());
	check(!SelfConfig->UnrealBuildToolPath.IsEmpty());

	SyhLogDisplay(TEXT("----------Start UE Project Refresh----------"));

	SelfConfig->CallType = TEXT("exe");

	SelfConfig->CallPath = SelfConfig->UnrealBuildToolPath;

	SimpleAutomationToolCommon::GetBatPathString(SelfConfig->ProjectUProjectPath);
	SelfConfig->Parameters = FString::Printf(TEXT(" -projectfiles -project=%s -game -engine -progress "), *SelfConfig->ProjectUProjectPath);

	ReturnValue = Super::Execute();

	SyhLogDisplay(TEXT("----------End UE Project Refresh----------"));

	return ReturnValue;
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT