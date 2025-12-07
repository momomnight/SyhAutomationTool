#include "SimpleAutomatedToolViewEditorID.h"

#include "Widget/SAutomatedToolViewMainFrame.h"
#include "Widget/SAutomatedToolMenuBarView.h"

#include "SFileDirectory.h"
#include "DllExports/AutomatedExecutionPath.h"
#include "Widget/DragDropDefinition/FileToNodeDragDropAction.h"

#include "Base/Entry/BlueprintEntryPanelEntry.h"
#include "Base/Widget/Panel/SBlueprintEntryPanelWidget.h"

#include "Widget/DetailPanel/Automated/SAutomatedBlueprintOutline.h"

#include "ISlateReflectorModule.h"

#define LOCTEXT_NAMESPACE "SimpleAutomatedToolViewEditorID"

const FName FEditorTabType::DefaultTabName("Default");
const FName FEditorTabType::MainTabName("SimpleAutomatedTool");
const FName FEditorTabType::FileDirectoryTabName("FileDirectory");
const FName FEditorTabType::GraphTabName("Graph");
const FName FEditorTabType::NodeListTabName("NodeList");



template <ETabType Type>
TSharedRef<SDockTab> CreateTab(const FSpawnTabArgs& InArgs);

template <> TSharedRef<SDockTab> CreateTab<ETabType::DefaultTabName>(const FSpawnTabArgs& InArgs)
{
	return SNew(SDockTab).TabRole(ETabRole::PanelTab)[SNew(SImage)];
}

template <> TSharedRef<SDockTab> CreateTab<ETabType::FileDirectoryTabName>(const FSpawnTabArgs& InArgs)
{
	TSharedRef<SDockTab> FileDirectory =
	SNew(SDockTab).TabRole(ETabRole::DocumentTab)
		[
			SNew(SBorder)
				.Padding(3.f)
				[
					SNew(SFileDirectory, AutomatedExecutionPath::GetCommandPath())
						.OnCreateFileWidgetDragDropOp(FOnCreateDragDropOp::CreateStatic(&FFileToNodeDragDropAction::NewDragDropAction))
				]
		];
	return FileDirectory;
}

template <> TSharedRef<SDockTab> CreateTab<ETabType::GraphTabName>(const FSpawnTabArgs& InArgs)
{
	TSharedPtr<FBlueprintEntryPanelEntry> PanelEntry = MakeShareable(new FBlueprintEntryPanelEntry);
	TSharedRef<SBlueprintEntryPanelWidget> PanelWidget = StaticCastSharedRef<SBlueprintEntryPanelWidget>(PanelEntry->TestCreate().ToSharedRef());
	PanelWidget->SetOnGetDragDropInterface(FOnGetDragDropInterface::CreateStatic(&FFileToNodeDragDropAction::CastToDragDropInterface));

	TSharedRef<SDockTab> ViewGraph =
		SNew(SDockTab).TabRole(ETabRole::PanelTab)
		[
			SNew(SBorder)
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				.Padding(3.f)
				[
					PanelWidget
				]
		];
	//ViewGraph->SetOnTabActivated(SDockTab::FOnTabActivatedCallback::CreateSP(PanelWidget, &SBlueprintEntryPanelWidget::OnParentTabActivated));

	return ViewGraph;
}

template <> TSharedRef<SDockTab> CreateTab<ETabType::NodeListTabName>(const FSpawnTabArgs& InArgs)
{
	TSharedRef<SDockTab> BlueprintOutline = SNew(SDockTab).TabRole(ETabRole::PanelTab)
		[
			SNew(SBorder)
				.Padding(3.f)
				[
					SNew(SAutomatedBlueprintOutline)
				]
		];
	return BlueprintOutline;
}

static FOnSpawnTab CreateMethod_FileDirectoryTab = FOnSpawnTab::CreateStatic(&CreateTab<ETabType::FileDirectoryTabName>);
static FOnSpawnTab CreateMethod_GraphTabTab = FOnSpawnTab::CreateStatic(&CreateTab<ETabType::GraphTabName>);
static FOnSpawnTab CreateMethod_NodeListTab = FOnSpawnTab::CreateStatic(&CreateTab<ETabType::NodeListTabName>);
static FOnSpawnTab CreateMethod_DefaultTab = FOnSpawnTab::CreateStatic(&CreateTab<ETabType::DefaultTabName>);

template <ETabType Type>
TSharedRef<SDockTab> SpawnReusableTab(const FSpawnTabArgs& InArgs, FOnSpawnTab OnSpawnTab)
{
	static TSharedPtr<SDockTab> ReusableTab = nullptr;
	if (!ReusableTab.IsValid() && OnSpawnTab.IsBound())
	{
		ReusableTab = OnSpawnTab.Execute(InArgs);
	}
	return ReusableTab.ToSharedRef();
}

TSharedRef<SDockTab> SpawnNotReusableTab(const FSpawnTabArgs& InArgs, FOnSpawnTab OnSpawnTab)
{
	check(OnSpawnTab.IsBound());
	return OnSpawnTab.Execute(InArgs);
}

static FOnSpawnTab ReusableMethod_FileDirectoryTab = FOnSpawnTab::CreateStatic(&SpawnNotReusableTab, CreateMethod_FileDirectoryTab);
static FOnSpawnTab NotReusableMethod_GraphTabTab = FOnSpawnTab::CreateStatic(&SpawnNotReusableTab, CreateMethod_GraphTabTab);
static FOnSpawnTab ReusableMethod_NodeListTab = FOnSpawnTab::CreateStatic(&SpawnNotReusableTab, CreateMethod_NodeListTab);
static FOnSpawnTab NotReusableMethod_DefaultTab = FOnSpawnTab::CreateStatic(&SpawnNotReusableTab, CreateMethod_DefaultTab);


//注：作为OwnTabPtr，不能使用OnFindTabToReuse
static TSharedPtr<SDockTab> OnFindTabToReuse(const FTabId& TabId, FOnSpawnTab Spawner)
{
	return Spawner.Execute(FSpawnTabArgs(FGlobalTabmanager::Get()->GetRootWindow(), TabId));
}

TSharedRef<FTabSpawnerEntry> FEditorTabType::GetDefaultTabSpawnerEntry()
{
	TSharedRef<FTabSpawnerEntry> Return = MakeShared<FTabSpawnerEntry>(
		FEditorTabType::DefaultTabName,
		NotReusableMethod_DefaultTab,
		FCanSpawnTab::CreateLambda([](const FSpawnTabArgs&) {return true; })
		);
	return Return;
}

TSharedRef<FTabSpawnerEntry> FEditorTabType::GetFileDirectoryTabSpawnerEntry()
{
	TSharedRef<FTabSpawnerEntry> Return = MakeShared<FTabSpawnerEntry>(
		FEditorTabType::FileDirectoryTabName,
		ReusableMethod_FileDirectoryTab,
		FCanSpawnTab::CreateLambda([](const FSpawnTabArgs&) {return true; })
	);
	return Return;
}

TSharedRef<FTabSpawnerEntry> FEditorTabType::GetGraphTabSpawnerEntry()
{
	TSharedRef<FTabSpawnerEntry> Return = MakeShared<FTabSpawnerEntry>(
		FEditorTabType::GraphTabName,
		NotReusableMethod_GraphTabTab,
		FCanSpawnTab::CreateLambda([](const FSpawnTabArgs&) {return true; })
	);
	return Return;
}

TSharedRef<FTabSpawnerEntry> FEditorTabType::GetNodeListTabSpawnerEntry()
{
	TSharedRef<FTabSpawnerEntry> Return = MakeShared<FTabSpawnerEntry>(
		FEditorTabType::NodeListTabName,
		ReusableMethod_NodeListTab,
		FCanSpawnTab::CreateLambda([](const FSpawnTabArgs&) {return true; })
	);
	return Return;
}

void FEditorTabType::RegisterMainTabSpawner(TSharedPtr<FUICommandList> UICommandList)
{
	FOnSpawnTab OnSpawnTab = FOnSpawnTab::CreateStatic(&FEditorTabType::SpawnMainTab, UICommandList);
	FGlobalTabmanager::Get()->RegisterTabSpawner(FEditorTabType::MainTabName,
		OnSpawnTab)
		.SetDisplayName(LOCTEXT("FSimpleAutomatedToolViewTabTitle", "SimpleAutomatedToolView"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
	FModuleManager::LoadModuleChecked<ISlateReflectorModule>("SlateReflector");
}

void FEditorTabType::UnregisterMainTabSpawner()
{
	FGlobalTabmanager::Get()->UnregisterTabSpawner(FEditorTabType::MainTabName);
	FModuleManager::Get().UnloadModule("SlateReflector", true);
}

void FEditorTabType::RegisterFileDirectoryTabSpawner(TSharedRef<FTabManager> TabManager)
{
	TabManager->RegisterTabSpawner(
		FEditorTabType::FileDirectoryTabName,
		ReusableMethod_FileDirectoryTab)
		.SetDisplayName(FText::FromName(FEditorTabType::FileDirectoryTabName))
		.SetReuseTabMethod(FOnFindTabToReuse::CreateStatic(&OnFindTabToReuse, ReusableMethod_FileDirectoryTab));
}

void FEditorTabType::RegisterGraphTabSpawner(TSharedRef<FTabManager> TabManager)
{
	TabManager->RegisterTabSpawner(
		FEditorTabType::GraphTabName,
		NotReusableMethod_GraphTabTab)
		.SetDisplayName(FText::FromName(FEditorTabType::GraphTabName))
		.SetReuseTabMethod(FOnFindTabToReuse::CreateStatic(&OnFindTabToReuse, NotReusableMethod_GraphTabTab));
}

void FEditorTabType::RegisterNodeListTabSpawner(TSharedRef<FTabManager> TabManager)
{
	TabManager->RegisterTabSpawner(
		FEditorTabType::NodeListTabName,
		ReusableMethod_NodeListTab)
		.SetDisplayName(FText::FromName(FEditorTabType::NodeListTabName))
		.SetReuseTabMethod(FOnFindTabToReuse::CreateStatic(&OnFindTabToReuse, ReusableMethod_NodeListTab));
}

void FEditorTabType::RegisterDefaultTabSpawner(TSharedRef<FTabManager> TabManager)
{
	TabManager->RegisterTabSpawner(
		FEditorTabType::DefaultTabName,
		NotReusableMethod_DefaultTab)
		.SetDisplayName(FText::FromName(FEditorTabType::DefaultTabName))
		.SetReuseTabMethod(FOnFindTabToReuse::CreateStatic(&OnFindTabToReuse, NotReusableMethod_DefaultTab));
}

void FEditorTabType::UnregisterFileDirectoryTabSpawner(TSharedRef<FTabManager> TabManager)
{
	TabManager->UnregisterTabSpawner(FEditorTabType::FileDirectoryTabName);
}

void FEditorTabType::UnregisterGraphTabSpawner(TSharedRef<FTabManager> TabManager)
{
	TabManager->UnregisterTabSpawner(FEditorTabType::GraphTabName);
}

void FEditorTabType::UnregisterNodeListTabSpawner(TSharedRef<FTabManager> TabManager)
{
	TabManager->UnregisterTabSpawner(FEditorTabType::NodeListTabName);
}

void FEditorTabType::UnregisterDefaultTabSpawner(TSharedRef<FTabManager> TabManager)
{
	TabManager->UnregisterTabSpawner(FEditorTabType::DefaultTabName);
}

TSharedRef<SDockTab> FEditorTabType::SpawnMainTab(const FSpawnTabArgs& InArgs, TSharedPtr<FUICommandList> PluginCommands)
{
	check(PluginCommands.IsValid());


	TSharedRef<SVerticalBox> VerticalBox = SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SAutomatedToolMenuBarView).CommandList(PluginCommands)
		];

	TSharedRef<SDockTab> Tab = SNew(SDockTab)
		.TabRole(ETabRole::MajorTab)//疑似可以放MenuBar
		//.CanEverClose(false)
		[
			VerticalBox
		];
	VerticalBox->AddSlot()
		.FillHeight(1.f)
		[
			SNew(SAutomatedToolViewMainFrame, Tab, InArgs.GetOwnerWindow().ToSharedRef())
		];

	return Tab;
}


#undef LOCTEXT_NAMESPACE


