#include "Element/OSS/AutomatedOss.h"
#include "Core/SimpleAutomationTool.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

template bool SimpleAutomationTool::EvaluateTaskResult<ESimpleOSSCommand>(const TMultiMap<ESimpleOSSCommand, bool>& InTaskResult);

FAutomatedCode_OSS::FAutomatedCode_OSS()
{
}

FAutomatedCode_OSS::~FAutomatedCode_OSS()
{
}

void FAutomatedCode_OSS::Init()
{
}

bool FAutomatedCode_OSS::BuildParameter(const FString& InJsonStr)
{
	return AutomationJson::JsonStringToAutomatedConfig<OwnConfig>(InJsonStr, *GetSelfConfig<OwnConfig>());
}

bool FAutomatedCode_OSS::BuildParameter()
{
	bool Result = AutomationCommandLine::CommandLineArgumentToAutomatedConfig<OwnConfig>(GetSelfConfig<OwnConfig>());
	if (!Result)
	{
		SyhLogDisplay(TEXT("the method of the command argument is too complex, please wait the new version."));
	}
	return Result;
}

bool FAutomatedCode_OSS::Execute()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	if (SelfConfig->OSSCommands.Num() > 0)
	{
		TMultiMap<ESimpleOSSCommand, bool> ExecuteResult;
		SimpleOSSCommand::Exec(SelfConfig->OSSCommands, ExecuteResult);

		return SimpleAutomationTool::EvaluateTaskResult(ExecuteResult);
	}

	return false;
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT