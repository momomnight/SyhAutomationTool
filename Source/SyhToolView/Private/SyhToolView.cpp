// Copyright Epic Games, Inc. All Rights Reserved.

#include "SyhToolView.h"
#include "StandaloneRenderer.h"
#include "SyhToolViewLog.h"
#include "ISourceCodeAccessModule.h"
#include "Styling/StarshipCoreStyle.h"
#include "SimpleAutomatedToolView.h"
#include "Misc/ConfigCacheIni.h"

IMPLEMENT_APPLICATION(SyhToolView, "SyhToolView");

#define LOCTEXT_NAMESPACE  "SyhViewToolMain"

int32 RunSyhToolView(const TCHAR* CommandLine)
{
	FTaskTagScope Scope(ETaskTag::EGameThread);
	ON_SCOPE_EXIT
	{ 

		FCoreDelegates::OnExit.Broadcast();
		FSlateApplication::Get().Shutdown();
		LLM(FLowLevelMemTracker::Get().UpdateStatsPerFrame());
		RequestEngineExit(TEXT("Exiting"));
		FEngineLoop::AppPreExit();
		FModuleManager::Get().UnloadModulesAtShutdown();
		FEngineLoop::AppExit();
	};

	if (int32 Ret = GEngineLoop.PreInit(CommandLine))
	{
		return Ret;
	}

	//
	{
		//底层配置系统
		FConfigCacheIni::InitializeConfigSystem();

		//处理注册的反射信息，将所有的类、结构体、枚举的类型信息初始化
		ProcessNewlyLoadedUObjects();

		//通知模块管理器，当我们加载新的C++模块时，可以处理当前加载的UObject
		FModuleManager::Get().StartProcessingNewlyLoadedObjects();

		//
		FSlateApplication::InitializeAsStandaloneApplication(GetStandardStandaloneRenderer());

		//
		FSlateApplication::InitHighDPI(true);
	

	//代码访问器
	
		//
		ISourceCodeAccessModule& SourceCodeAccessModule = FModuleManager::LoadModuleChecked<ISourceCodeAccessModule>("SourceCodeAccess");

		//
#if PLATFORM_MAC
		IModuleInterface& XCodeSourceCodeAccessModule = FModuleManager::LoadModuleChecked<IModuleInterface>("XCodeSourceCodeAccess");
		SourceCodeAccessModule.SetAccessor(FName("XCodeSourceCodeAccess"));
#elif PLATFORM_WINDOWS
		IModuleInterface& VisualStudioSourceCodeAccessModule = FModuleManager::LoadModuleChecked<IModuleInterface>("VisualStudioSourceCodeAccess");
		SourceCodeAccessModule.SetAccessor(FName("VisualStudioSourceCodeAccess"));
#endif
		
		//独立程序可用Style
		FGlobalTabmanager::Get()->SetApplicationTitle(LOCTEXT("AppTitle", "Starship Slate Viewer"));
		FAppStyle::SetAppStyleSetName(FStarshipCoreStyle::GetCoreStyle().GetStyleSetName());
	}

	//设置布局
	{
	
		FSimpleAutomatedToolViewModule& AutomatedToolViewModule = FModuleManager::Get().LoadModuleChecked<FSimpleAutomatedToolViewModule>("SimpleAutomatedToolView");

	}



	while (!IsEngineExitRequested())
	{
		BeginExitIfRequested();

		//线程间同步必须做的
		{
			FTaskGraphInterface::Get().ProcessThreadUntilIdle(ENamedThreads::GameThread);

			//统计帧
			FStats::AdvanceFrame(false);

			//线程安全的定时器
			FTSTicker::GetCoreTicker().Tick(FApp::GetDeltaTime());
		}

		//当存在模态窗口或帧内调试会话时，推送操作系统消息
		FSlateApplication::Get().PumpMessages();

		//Tick中会调用TickPlatform，TickPlatform中会调用FWindowsApplication::ProcessDeferredEvents(DeltaTime);
		//FWindowsApplication::ProcessDeferredEvents(DeltaTime)会调用PumpMessages()
		FSlateApplication::Get().Tick();

		//
		FPlatformProcess::Sleep(0.01);

		//
		GFrameCounter++;

	}

	return 0;
}


#undef LOCTEXT_NAMESPACE