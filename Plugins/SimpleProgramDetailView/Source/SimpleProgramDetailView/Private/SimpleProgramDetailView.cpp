// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleProgramDetailView.h"
#include "SimpleProgramDetailViewStyle.h"
#include "SimpleProgramDetailViewCommands.h"
#if !IS_PROGRAM
#include "LevelEditor.h"
#endif
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "ToolMenus.h"

#ifdef WITH_EDITOR
#include "Manager/PropertyManager.h"
#include "Test/TestObject.h"
#endif // UE_BUILD_DEBUG | UE_BUILD_DEVELOPMENT

static const FName SimpleProgramDetailViewTabName("SimpleProgramDetailView");

#define LOCTEXT_NAMESPACE "FSimpleProgramDetailViewModule"

void FSimpleProgramDetailViewModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
#ifdef WITH_EDITOR
	TestObject = nullptr;
	TestStruct = nullptr;

	TestPropertyManager = MakeShareable(new	FPropertyManager);
	TestObject = NewObject<UTestClass>(GetTransientPackage(), "TestObject");
	TestObject->AddToRoot();
	TestObject->Boolean = true;

	TestStruct = new FTestStruct;
	TestStruct->A = true;
#endif // UE_BUILD_DEBUG | UE_BUILD_DEVELOPMENT

	FSimpleProgramDetailViewStyle::Initialize();
	FSimpleProgramDetailViewStyle::ReloadTextures();

	FSimpleProgramDetailViewCommands::Register();
	
	PluginCommandss = MakeShareable(new FUICommandList);

	PluginCommandss->MapAction(
		FSimpleProgramDetailViewCommands::Get().OpenPluginWindows,
		FExecuteAction::CreateRaw(this, &FSimpleProgramDetailViewModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FSimpleProgramDetailViewModule::RegisterMenus));
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(SimpleProgramDetailViewTabName, FOnSpawnTab::CreateRaw(this, &FSimpleProgramDetailViewModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FSimpleProgramDetailViewTabTitle", "SimpleProgramDetailView"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FSimpleProgramDetailViewModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

#ifdef WITH_EDITOR
	TestPropertyManager.Reset();

	if(TestObject && TestObject->IsValidLowLevel())
	{
		TestObject->ConditionalBeginDestroy();
	}

	if(TestStruct)
	{
		delete TestStruct;
	}

	TestObject = nullptr;
	TestStruct = nullptr;
#endif // UE_BUILD_DEBUG | UE_BUILD_DEVELOPMENT

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FSimpleProgramDetailViewStyle::Shutdown();

	FSimpleProgramDetailViewCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(SimpleProgramDetailViewTabName);
}

TSharedRef<SDockTab> FSimpleProgramDetailViewModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	TSharedPtr<SWidget> Widget = nullptr;

#ifdef WITH_EDITOR
	FPropertyDataInitParam InitParam;
	InitParam.SetStruct((uint8*)TestStruct, FTestStruct::StaticStruct());

	TestPropertyManager->GeneratePropertyDataChains(InitParam, false);

	Widget = TestPropertyManager->GenerateDetailWidget();

#else
	FText WidgetText = FText::Format(
		LOCTEXT("WindowWidgetText", "Add code to {0} in {1} to override this window's contents"),
		FText::FromString(TEXT("FSimpleProgramDetailViewModule::OnSpawnPluginTab")),
		FText::FromString(TEXT("SimpleProgramDetailView.cpp"))
	);

	Widget = SNew(STextBlock)
		.Text(WidgetText);

#endif // UE_BUILD_DEBUG | UE_BUILD_DEVELOPMENT

	

	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			// Put your tab content here!
			Widget.ToSharedRef()
		];
}

void FSimpleProgramDetailViewModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(SimpleProgramDetailViewTabName);
}

void FSimpleProgramDetailViewModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FSimpleProgramDetailViewCommands::Get().OpenPluginWindows, PluginCommandss);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("Settings");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FSimpleProgramDetailViewCommands::Get().OpenPluginWindows));
				Entry.SetCommandList(PluginCommandss);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSimpleProgramDetailViewModule, SimpleProgramDetailView)