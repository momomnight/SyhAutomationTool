#include "Element/Mysql/AutomatedMysql.h"



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

FAutomatedCode_Mysql::FAutomatedCode_Mysql()
{
}

FAutomatedCode_Mysql::~FAutomatedCode_Mysql()
{
}

void FAutomatedCode_Mysql::Init()
{
}

bool FAutomatedCode_Mysql::BuildParameter(const FString& InJsonStr)
{
	return false;
}

bool FAutomatedCode_Mysql::BuildParameter()
{
	return false;
}

bool FAutomatedCode_Mysql::Execute()
{
	return false;
}



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT