#include "Element/AutomationCode/AutomatedCode_ConditionCommand.h"
#include "Core/SimpleAutomationTool.h"
#include "SyhAutomationToolLog.h"


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

FAutomatedCode_ConditionCommand::FAutomatedCode_ConditionCommand()
{
}

FAutomatedCode_ConditionCommand::~FAutomatedCode_ConditionCommand()
{
}

void FAutomatedCode_ConditionCommand::Init()
{
	Super::InitTaskCommand();
	Self::InitTaskCommand();
	SetExecuteToken(true);
}

bool FAutomatedCode_ConditionCommand::BuildParameter(const FString& InJsonStr)
{
	return AutomationJson::JsonStringToAutomatedConfig<OwnConfig>(InJsonStr, *GetSelfConfig<OwnConfig>());
}

bool FAutomatedCode_ConditionCommand::BuildParameter()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	bool Result = true;
	Result &= Super::BuildParameter();
	SimpleAutomationToolCommon::ParseCommandLineByKey(Tool<OwnConfig>::TrueCommandListKey, SelfConfig->TrueCommandList, false);
	SimpleAutomationToolCommon::ParseCommandLineByKey(Tool<OwnConfig>::FalseCommandListKey, SelfConfig->FalseCommandList, false);
	Self::InitTaskCommand();

	if (Result)
	{
		return true;
	}
	else
	{
		SyhLogError(TEXT("BuildParameter is failure to execute. Locate in %s"), GetCommandName<Self>());
		return false;
	}
}

bool FAutomatedCode_ConditionCommand::Execute()
{
	SyhLogDisplay(TEXT("the command of %s starts to execute"), GetCommandName<Self>());
	if (Super::Execute())
	{
		SyhLogDisplay(TEXT("Evaluating the result of commands execution..."));
		bool Result = SimpleAutomationTool::EvaluateTaskResult(GetTaskResult());
		SyhLogDisplay(TEXT("Result is %s."), Result ? TEXT("True") : TEXT("False"));
		ClearTaskResult();
		if (Result)
		{
			SyhLogDisplay(TEXT("Execute the true branch of condition command."));
			SimpleAutomationTool::HandleTask(TrueTaskCommand, GetTaskResult());
			SyhLogDisplay(TEXT("Finish the true branch."));
		}
		else
		{
			SyhLogDisplay(TEXT("Execute the true branch of condition command."));
			SimpleAutomationTool::HandleTask(FalseTaskCommand, GetTaskResult());
			SyhLogDisplay(TEXT("Finish the false branch."));
		}
		SyhLogDisplay(TEXT("Evaluating the final result of commands execution..."));
		Result = SimpleAutomationTool::EvaluateTaskResult(GetTaskResult());
		SyhLogDisplay(TEXT("Result is %s."), Result ? TEXT("True") : TEXT("False"));
		ClearTaskResult();
		return true;
	}

	SyhLogError(TEXT("%s is failure to execute"), GetCommandName<Self>());
	return false;
}

bool FAutomatedCode_ConditionCommand::InitTaskCommand()
{
	bool Result = true;
	Result &= Super::InitTaskCommand(GetSelfConfig<OwnConfig>()->TrueCommandList, TrueTaskCommand);
	Result &= Super::InitTaskCommand(GetSelfConfig<OwnConfig>()->FalseCommandList, FalseTaskCommand);
	return Result;
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT