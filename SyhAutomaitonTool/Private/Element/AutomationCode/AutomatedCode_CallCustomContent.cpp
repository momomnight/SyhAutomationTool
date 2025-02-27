#include "Element/AutomationCode/AutomatedCode_CallCustomContent.h"

FAutomatedCode_CallCustomContent::FAutomatedCode_CallCustomContent() : Super()
{
}

FAutomatedCode_CallCustomContent::~FAutomatedCode_CallCustomContent()
{
}

bool FAutomatedCode_CallCustomContent::Init()
{
	Config = CreateConfig<OwnConfig>();
	return true;
}

bool FAutomatedCode_CallCustomContent::BuildParameter(const FString& InJsonStr)
{
	return AutomationJson::JsonStringToAutomatedConfig<OwnConfig>(InJsonStr, *static_cast<OwnConfig*>(Config));
}

bool FAutomatedCode_CallCustomContent::BuildParameter()
{
	return Super::BuildParameter();
}

bool FAutomatedCode_CallCustomContent::Execute()
{
	return false;
}
