#include "Element/AutomationCode/AutomatedCode_CallCustomContent.h"
#include "SyhAutomationToolLog.h"


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

FAutomatedCode_CallCustomContent::FAutomatedCode_CallCustomContent()
{
}

FAutomatedCode_CallCustomContent::~FAutomatedCode_CallCustomContent()
{
}

void FAutomatedCode_CallCustomContent::Init()
{
}

bool FAutomatedCode_CallCustomContent::BuildParameter(const FString& InJsonStr)
{
	return AutomationJson::JsonStringToAutomatedConfig<OwnConfig>(InJsonStr, *GetSelfConfig<OwnConfig>());
}

bool FAutomatedCode_CallCustomContent::BuildParameter()
{
	bool Result = AutomationCommandLine::CommandLineArgumentToAutomatedConfig<OwnConfig>(GetSelfConfig<OwnConfig>());
	if (!Result)
	{
		SyhLogError(TEXT("BuildParameter is failure to execute. Locate in %s"), GetCommandName<Self>());
	}
	return Result;
}

bool FAutomatedCode_CallCustomContent::Execute()
{
	SyhLogDisplay(TEXT("Execute the command of CallCustomContent"));

	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	check(!SelfConfig->CallType.IsEmpty());
	SyhLogDisplay(TEXT("----------Start Call Custom Content----------"));

	TArray<FString> Tokens;
	SelfConfig->Content.ParseIntoArray(Tokens, TEXT("\r\n"));

	if (SelfConfig->CallType.Equals(TEXT("bat")))
	{
		//自动构建脚本
		FString CallPath = AutomatedExecutionPath::GetBatPath();
		TArray<FString> CallContent;
		CallContent.Add(TEXT("cd /d %~dp0"));
		CallContent.Append(Tokens);//核心代码
		CallContent.Add(FString::Printf(TEXT("timeout /t %i /nobreak > NUL"), SelfConfig->WaitTime));
		CallContent.Add(TEXT("exit 0"));

		if (FFileHelper::SaveStringArrayToFile(CallContent, *CallPath, FFileHelper::EEncodingOptions::ForceUTF8WithoutBOM))
		{
			SelfConfig->CallPath = CallPath;
		}
	}
	else if(SelfConfig->CallType.Equals(TEXT("sh")))
	{

	}

	bool ReturnValue = Super::Execute();

	SyhLogDisplay(TEXT("----------End Call Custom Content----------"));

	return ReturnValue;
}



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT