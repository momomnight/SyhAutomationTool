#include "Element/AutomationCode/AutomatedCode_Call.h"
#include "SyhAutomationToolLog.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

FAutomatedCode_Call::~FAutomatedCode_Call()
{
}

void FAutomatedCode_Call::Init()
{
	CreateConfig<OwnConfig>();
}

bool FAutomatedCode_Call::BuildParameter(const FString& InJsonStr)
{
	return AutomationJson::JsonStringToAutomatedConfig<OwnConfig>(InJsonStr, *GetSelfConfig<OwnConfig>());
}	

bool FAutomatedCode_Call::BuildParameter()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();
	if (!FParse::Value(FCommandLine::Get(), TEXT("-CallType="), SelfConfig->CallType))
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("-CallType= was not found the type."));
		return false;
	}
	if (!FParse::Value(FCommandLine::Get(), TEXT("-CallPath="), SelfConfig->CallPath))
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("-CallPath= was not found the path."));
		return false;
	}
	else
	{
		FPaths::NormalizeDirectoryName(SelfConfig->CallPath);
		FPaths::RemoveDuplicateSlashes(SelfConfig->CallPath);
	}
	if (!FParse::Value(FCommandLine::Get(), TEXT("-Parameters="), SelfConfig->Parameters))
	{
		UE_LOG(SyhAutomaitonToolLog, Display, TEXT("-Parameters= was not found parameters."));
	}

	return true;
}

bool FAutomatedCode_Call::Execute()
{
	int32 ReturnValue = 0;
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	check(!SelfConfig->CallPath.IsEmpty());
	check(!SelfConfig->CallType.IsEmpty());

	UE_LOG(SyhAutomaitonToolLog, Display, TEXT("----------Start Call----------"));

	if (SelfConfig->CallType.Equals(TEXT("exe")))
	{
		FProcHandle ProcessHandle = FPlatformProcess::CreateProc(*SelfConfig->CallPath,
			*SelfConfig->Parameters, false, false, false, nullptr, 0, nullptr, nullptr);
		FPlatformProcess::WaitForProc(ProcessHandle);
		FPlatformProcess::GetProcReturnCode(ProcessHandle, &ReturnValue);
	}
	else if (SelfConfig->CallType.Equals(TEXT("bat")))
	{
		//	cd /d %~dp0 :从当前的批处理开始，如果执行出现问题
		// 重开窗口
		if (!FPlatformProcess::ExecElevatedProcess(*SelfConfig->CallPath, *SelfConfig->Parameters, &ReturnValue))
		{
			UE_LOG(SyhAutomaitonToolLog, Error, TEXT("[cd /d %~dp0] Failure to start from the current batch, please check your file whether exist error."));
		}
		(ReturnValue == 1) ? ReturnValue = 0 : 1;
	}

	UE_LOG(SyhAutomaitonToolLog, Display, TEXT("----------End Call----------"));

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