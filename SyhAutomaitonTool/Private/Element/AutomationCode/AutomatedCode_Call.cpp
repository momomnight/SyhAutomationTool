#include "Element/AutomationCode/AutomatedCode_Call.h"
#include "SyhAutomationToolLog.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

FAutomatedCode_Call::FAutomatedCode_Call()
{
}

FAutomatedCode_Call::~FAutomatedCode_Call()
{
}

void FAutomatedCode_Call::Init()
{
}

bool FAutomatedCode_Call::BuildParameter(const FString& InJsonStr)
{
	return AutomationJson::JsonStringToAutomatedConfig<OwnConfig>(InJsonStr, *GetSelfConfig<OwnConfig>());
}	

bool FAutomatedCode_Call::BuildParameter()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	
	bool Result = true;
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine(Tool<OwnConfig>::CallTypeKey, SelfConfig->CallType);
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine(Tool<OwnConfig>::CallPathKey, SelfConfig->CallPath);
	Result &= SimpleAutomationToolCommon::GetValueFromCommandLine(Tool<OwnConfig>::ParametersKey, SelfConfig->Parameters);

	if (Result)
	{
		FPaths::NormalizeFilename(SelfConfig->CallPath);
		FPaths::RemoveDuplicateSlashes(SelfConfig->CallPath);
		return true;
	}
	else
	{
		SyhLogError(TEXT("the command of %s is failure to build parameter"), GetCommandName<Self>());
		return false;
	}

}

bool FAutomatedCode_Call::Execute()
{
	SyhLogDisplay(TEXT("Execute the command of Call"));
	int32 ReturnValue = 0;
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	check(!SelfConfig->CallPath.IsEmpty());
	check(!SelfConfig->CallType.IsEmpty());

	if (SelfConfig->Parameters.Equals(TEXT("autofill"), ESearchCase::IgnoreCase))
	{
		SelfConfig->Parameters.Empty();
	}

	SyhLogDisplay(TEXT("----------Start Call----------"));

	if (SelfConfig->CallType.Equals(TEXT("exe")))
	{
		SyhLogDisplay(TEXT("Execute .exe file."));
		FProcHandle ProcessHandle = FPlatformProcess::CreateProc(*SelfConfig->CallPath,
			*SelfConfig->Parameters, false, false, false, nullptr, 0, nullptr, nullptr);
		FPlatformProcess::WaitForProc(ProcessHandle);
		FPlatformProcess::GetProcReturnCode(ProcessHandle, &ReturnValue);
	}
	else if (SelfConfig->CallType.Equals(TEXT("bat")))
	{
		//	cd /d %~dp0 :从当前的批处理开始，如果执行出现问题
		// 重开窗口
		SyhLogDisplay(TEXT("Execute .bat file."));
		if (!FPlatformProcess::ExecElevatedProcess(*SelfConfig->CallPath, *SelfConfig->Parameters, &ReturnValue))
		{
			SyhLogError(TEXT("[cd /d %~dp0] Failure to start from the current batch, please check your file whether exist error."));
		}
		(ReturnValue == 1) ? ReturnValue = 0 : 1;
	}
	else if (SelfConfig->CallType.Equals(TEXT("sh")))
	{
		SyhLogDisplay(TEXT("Execute .sh file."));
	}

	SyhLogDisplay(TEXT("----------End Call----------"));
	return ReturnValue == 0;
}

bool FAutomatedCode_Call::Exit()
{
	return true;
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT