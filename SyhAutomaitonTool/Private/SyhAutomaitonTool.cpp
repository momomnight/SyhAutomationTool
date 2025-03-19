// Copyright Epic Games, Inc. All Rights Reserved.

#include "SyhAutomaitonTool.h"
#include "RequiredProgramMainCPPInclude.h"
#include "SyhAutomationToolLog.h"
#include "Framework/AutomationMainFramework.h"


IMPLEMENT_APPLICATION(SyhAutomaitonTool, "SyhAutomaitonTool");

INT32_MAIN_INT32_ARGC_TCHAR_ARGV()
{
	FTaskTagScope Scope(ETaskTag::EGameThread);
	ON_SCOPE_EXIT
	{ 
		//花括号中的内容作为Lambda，在执行TScopeGuard的析构时执行
		LLM(FLowLevelMemTracker::Get().UpdateStatsPerFrame());
		RequestEngineExit(TEXT("Exiting"));
		FEngineLoop::AppPreExit();
		FModuleManager::Get().UnloadModulesAtShutdown();
		FEngineLoop::AppExit();
	};

	if (int32 Ret = GEngineLoop.PreInit(ArgC, ArgV))
	{
		return Ret;
	}

	AutomationMainFramework::RunAutomatedBuild();

	return 0;
}
