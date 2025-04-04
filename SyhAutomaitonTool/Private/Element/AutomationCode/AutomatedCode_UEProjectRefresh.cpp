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
	bool Result = AutomationCommandLine::CommandLineArgumentToAutomatedConfig<OwnConfig>(GetSelfConfig<OwnConfig>());
	if (!Result)
	{
		SyhLogError(TEXT("BuildParameter is failure to execute. Locate in %s"), GetCommandName<Self>());
	}
	return Result;
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

	AutomationToolCommonMethod::GetBatPathString(SelfConfig->ProjectUProjectPath);
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