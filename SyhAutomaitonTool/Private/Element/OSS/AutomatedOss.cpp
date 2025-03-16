#include "Element/OSS/AutomatedOss.h"

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
	return SimpleOSSCommand::BuildConfig(GetSelfConfig<OwnConfig>()->OSSCommands);
}

bool FAutomatedCode_OSS::Execute()
{
	TSharedPtr<OwnConfig> SelfConfig = GetSelfConfig<OwnConfig>();

	if (SelfConfig->OSSCommands.Num() > 0)
	{
		return SimpleOSSCommand::Exec(SelfConfig->OSSCommands);
	}

	return false;
}
