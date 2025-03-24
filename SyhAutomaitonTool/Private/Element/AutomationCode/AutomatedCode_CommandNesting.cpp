#include "Element/AutomationCode/AutomatedCode_CommandNesting.h"
#include "SyhAutomationToolLog.h"
#include "Core/SimpleAutomationTool.h"



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


FAutomatedCode_CommandNesting::FAutomatedCode_CommandNesting() : bExecute(false)
{
}

FAutomatedCode_CommandNesting::~FAutomatedCode_CommandNesting()
{
}

void FAutomatedCode_CommandNesting::Init()
{
	GetSelfConfig<OwnConfig>()->CommandList.Empty();
}

bool FAutomatedCode_CommandNesting::BuildParameter(const FString& InJsonStr)
{
	AutomationJson::JsonStringToAutomatedConfig<OwnConfig>(InJsonStr, *GetSelfConfig<OwnConfig>());
	bool Result = InitTaskCommand();
	SetExecuteToken(Result);
	return Result;
}

bool FAutomatedCode_CommandNesting::BuildParameter()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	bool Result = true;
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine(EnumTool<decltype(SelfConfig->ComparisionType)>::GetEnumNameKey(), SelfConfig->ComparisionType);
	Result &= SimpleAutomationToolCommon::ParseStrings(Tool<OwnConfig>::CommandListKey, SelfConfig->CommandList, false);
	Result = InitTaskCommand();
	SetExecuteToken(Result);

	if (!Result)
	{
		SyhLogError(TEXT("%s is failure to build parameter"), GetCommandName<Self>());
	}
	return Result;
}

bool FAutomatedCode_CommandNesting::Execute()
{
	SyhLogDisplay(TEXT("the command of %s starts to execute"), GetCommandName<Self>());
	if (GetExecuteToken())
	{
		switch (GetSelfConfig<OwnConfig>()->ComparisionType)
		{
		case EComparisionType::COMPARISION_Sequence:
		{
			SyhLogDisplay(TEXT("Handle commands. The method of execution is Sequence"));
			SimpleAutomationTool::HandleTask(TaskCommand, GetTaskResult());
			break;
		}
		case EComparisionType::COMPARISION_Break:
		{
			SyhLogDisplay(TEXT("Handle commands. The method of execution is Break"));
			SimpleAutomationTool::HandleTask(TaskCommand, GetTaskResult(), true);
			break;
		}
		default:
		{
			break;
		}
		}

		SetExecuteToken(false);
		return GetTaskResult().Num() > 0;
	}

	SyhLogError(TEXT("%s is failure to execute"), GetCommandName<Self>());
	return false;
}

bool FAutomatedCode_CommandNesting::InitTaskCommand(const TArray<FString>& InCommandList, TMultiMap<ECommandProtocol, FString>& OutTaskCommand)
{
	if(InCommandList.Num() > 0)
	{
		for (auto& Temp : InCommandList)
		{
			if (!SimpleAutomationTool::Init(OutTaskCommand, Temp))
			{
				return false;
			}
		}
	}
	return true;
}

bool FAutomatedCode_CommandNesting::InitTaskCommand()
{
	return InitTaskCommand(GetSelfConfig<OwnConfig>()->CommandList, TaskCommand);
}

void FAutomatedCode_CommandNesting::SetExecuteToken(bool b)
{
	bExecute = b;
}

bool FAutomatedCode_CommandNesting::GetExecuteToken()
{
	return bExecute;
}



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT