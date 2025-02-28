#include "Element/AutomationCode/AutomatedCode_CallCustomContent.h"
#include "SyhAutomationToolLog.h"


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

FAutomatedCode_CallCustomContent::~FAutomatedCode_CallCustomContent()
{
}

void FAutomatedCode_CallCustomContent::Init()
{
	CreateConfig<OwnConfig>();
}

bool FAutomatedCode_CallCustomContent::BuildParameter(const FString& InJsonStr)
{
	return AutomationJson::JsonStringToAutomatedConfig<OwnConfig>(InJsonStr, *GetSelfConfig<OwnConfig>());
}

bool FAutomatedCode_CallCustomContent::BuildParameter()
{
	return Super::BuildParameter();
}

bool FAutomatedCode_CallCustomContent::Execute()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	check(!SelfConfig->CallType.IsEmpty());
	UE_LOG(SyhAutomaitonToolLog, Display, TEXT("----------Start Call Custom Content----------"));

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

		if (FFileHelper::SaveStringArrayToFile(CallContent, *CallPath, FFileHelper::EEncodingOptions::ForceUTF8))
		{
			SelfConfig->CallPath = CallPath;
		}
	}
	else if(SelfConfig->CallType.Equals(TEXT("sh")))
	{

	}

	bool ReturnValue = Super::Execute();

	UE_LOG(SyhAutomaitonToolLog, Display, TEXT("----------End Call Custom Content----------"));

	return ReturnValue;
}



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT