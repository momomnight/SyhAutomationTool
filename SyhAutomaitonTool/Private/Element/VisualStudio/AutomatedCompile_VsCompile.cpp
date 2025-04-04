#include "Element/VisualStudio/AutomatedCompile_VsCompile.h"



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

FAutomatedCode_VS_Compile::~FAutomatedCode_VS_Compile()
{
}

void FAutomatedCode_VS_Compile::Init()
{
}

bool FAutomatedCode_VS_Compile::BuildParameter(const FString& InJsonStr)
{
	return AutomationJson::JsonStringToAutomatedConfig<OwnConfig>(InJsonStr, *GetSelfConfig<OwnConfig>());
}

bool FAutomatedCode_VS_Compile::BuildParameter()
{
	bool Result = AutomationCommandLine::CommandLineArgumentToAutomatedConfig<OwnConfig>(GetSelfConfig<OwnConfig>());
	if (!Result)
	{
		SyhLogError(TEXT("BuildParameter is failure to execute. Locate in %s"), GetCommandName<Self>());
	}
	return Result;
}

bool FAutomatedCode_VS_Compile::Execute()
{
	SyhLogDisplay(TEXT("Execute the command of VSCompile"));
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	check(!SelfConfig->CallPath.IsEmpty());
	check(!SelfConfig->BuildState.IsEmpty());
	check(!SelfConfig->SlnProjectPath.IsEmpty());

	SelfConfig->CallType = TEXT("exe");

	FString VSLogPath = AutomatedExecutionPath::GetVisualStudioLogPath();
	FFileHelper::SaveStringToFile(TEXT(""), *VSLogPath);//创建一个Log

	SyhLogDisplay(TEXT("----------Start Compilation----------"));

	FString VSParameter = FString::Printf(TEXT(" %s /Rebuild %s /Out %s"), *SelfConfig->SlnProjectPath, *SelfConfig->BuildState, *VSLogPath);

	if (!SelfConfig->Project.IsEmpty())
	{
		VSParameter.Append(FString::Printf(TEXT(" /Project %s"), *SelfConfig->Project));
	}

	SelfConfig->Parameters = VSParameter;

	bool Result = Super::Execute();

	SyhLogDisplay(TEXT("----------End Compilation----------"));

	return Result;
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
