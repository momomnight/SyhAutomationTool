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
	bool Result = true;
	Result &= Super::BuildParameter();
	AutomationCommandLine::CommandLineArgumentToAutomatedConfig<OwnConfig>(GetSelfConfig<OwnConfig>());
	Self::InitTaskCommand();
	if (!Result)
	{
		SyhLogError(TEXT("BuildParameter is failure to execute. Locate in %s"), GetCommandName<Self>());
	}
	return Result;
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