#include "Element/AutomationCode/AutomatedCode_Call.h"
#include "SyhAutomationToolLog.h"

FAutomatedCode_Call::FAutomatedCode_Call() : Super(), Config(nullptr)
{
}

FAutomatedCode_Call::~FAutomatedCode_Call()
{
	DestoryConfig<OwnConfig>(Config);
}

bool FAutomatedCode_Call::Init()
{
	Config = CreateConfig<OwnConfig>();
	return true;
}

bool FAutomatedCode_Call::BuildParameter(const FString& InJsonStr)
{
	return AutomationJson::JsonStringToAutomatedConfig(InJsonStr, *Config);
}	

bool FAutomatedCode_Call::BuildParameter()
{
	if (!FParse::Value(FCommandLine::Get(), TEXT("-CallType="), Config->CallType))
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("-CallType= was not found the type."));
		return false;
	}
	if (!FParse::Value(FCommandLine::Get(), TEXT("-CallPath="), Config->CallPath))
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("-CallPath= was not found the path."));
		return false;
	}
	else
	{
		FPaths::NormalizeDirectoryName(Config->CallPath);
		FPaths::RemoveDuplicateSlashes(Config->CallPath);
	}
	if (!FParse::Value(FCommandLine::Get(), TEXT("-Parameters="), Config->Parameters))
	{
		UE_LOG(SyhAutomaitonToolLog, Display, TEXT("-Parameters= was not found parameters."));
	}

	return true;
}

bool FAutomatedCode_Call::Execute()
{
	int32 ReturnValue = 0;

	check(!Config->CallPath.IsEmpty());
	check(!Config->CallType.IsEmpty());

	UE_LOG(SyhAutomaitonToolLog, Display, TEXT("----------Start Call----------"));

	if (Config->CallType.Equals(TEXT("exe")))
	{
		FProcHandle ProcessHandle = FPlatformProcess::CreateProc(*Config->CallPath,
			*Config->Parameters, false, false, false, nullptr, 0, nullptr, nullptr);
		FPlatformProcess::WaitForProc(ProcessHandle);
		FPlatformProcess::GetProcReturnCode(ProcessHandle, &ReturnValue);
	}
	else if (Config->CallType.Equals(TEXT("bat")))
	{
		//	cd /d %~dp0 :从当前的批处理开始，如果执行出现问题
		// 重开窗口
		if (!FPlatformProcess::ExecElevatedProcess(*Config->CallPath, *Config->Parameters, &ReturnValue))
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
	return false;
}
