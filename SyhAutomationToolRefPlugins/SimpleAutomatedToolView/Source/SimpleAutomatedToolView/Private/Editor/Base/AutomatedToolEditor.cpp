#include "Editor/Base/AutomatedToolEditor.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Editor/Base/AutomatedToolWorkFlow.h"
#include "Editor/Base/AutomatedToolWorkMode.h"
#include "Widgets/Input/SComboBox.h"
#include "SimpleAutomatedToolViewCommands.h"
#include "Editor/MenuContext/AutomatedToolEditorContext.h"
#include "Editor/Widget/SAutomatedToolEditorWidget.h"
#include "Serialization/JsonReader.h"
#include "SimpleAutomatedToolView.h"
#include "Dom/JsonObject.h"
#include "Framework/MultiBox/MultiBoxDefs.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

#define LOCTEXT_NAMESPACE "FAutomatedToolEditor"

FAutomatedToolEditor::FAutomatedToolEditor(const FName& InEditorName)
	: Super(nullptr, InEditorName)
{

}

void FAutomatedToolEditor::InitializeEditor()
{
	//完成与本类相关的初始化
	Initialize();

	//注册基本工作流
	RegisterWorkFlows();

	//生成窗口，包括菜单/工具栏的生成
	GenerateWindow();

	EditorWidget.Pin()->StartUpEditorView(LoadWorkModeLayout(), MainTab.ToSharedRef());
	
	//WorkFlow/WorkMode的编辑器状态已经注册完成，现在开始加载
	GetEditorStateStorageMap().SetSerializationPath(FSimpleAutomatedToolViewModule::EditorLayoutJson);
	GetEditorStateStorageMap().LoadSingleStateSection("AutomatedToolEditor");

	if (SavedEditorState.LastWorkFlow.IsValid())
	{
		SetCurrentWorkFlow(SavedEditorState.LastWorkFlow);
	}
	else
	{
		if (WorkFlows.Num() > 0)
		{
			SetCurrentWorkFlow(WorkFlows[0]);
		}
	}
}

void FAutomatedToolEditor::Initialize()
{
	Super::Initialize();

	RegisterCommand();

	BindCommand();

	RegisterMainMenu();

	RegisterToolBar();
	
	//显示hook
	FMultiBoxSettings::DisplayMultiboxHooks = TAttribute<bool>::Create(
		TAttribute<bool>::FGetter::CreateSP(this, &FAutomatedToolEditor::GetShowMultiBoxHooks));

	//显示拓展点
	UToolMenus::Get()->ShouldDisplayExtensionPoints.BindSP(
		this, &FAutomatedToolEditor::GetShowExtensionPoint);

	UToolMenus::Get()->EditMenuIcon = FSlateIcon(FCoreStyle::Get().GetStyleSetName(), "MultiBox.GenericToolBarIcon.Small");
	UToolMenus::Get()->EditToolbarIcon = FSlateIcon(FCoreStyle::Get().GetStyleSetName(), "MultiBox.GenericToolBarIcon.Small");
	//编辑Menu代理绑定处
	UToolMenus::Get()->EditMenuDelegate.BindSP(this, &FAutomatedToolEditor::OnEditMenu);

}

void FAutomatedToolEditor::GenerateWindow()
{
	TSharedRef<FTabManager::FLayout> DefaultLayout = FTabManager::NewLayout("AutomatedToolEditor");
	DefaultLayout->AddArea(
		FTabManager::NewPrimaryArea()
		->Split(
			FTabManager::NewStack()->AddTab(FName("MainTab"), ETabState::OpenedTab)
		)
	);

	FOnSpawnTab OnSpawnTab = FOnSpawnTab::CreateLambda([this](const FSpawnTabArgs&) {
		this->MainTab = SNew(SDockTab).TabRole(ETabRole::MajorTab);
		MainTab->SetOnTabClosed(SDockTab::FOnTabClosedCallback::CreateSP(this, &FAutomatedToolEditor::OnMainTabClosed));
		return this->MainTab.ToSharedRef();
		});

	FGlobalTabmanager::Get()->RegisterTabSpawner(
		FName("MainTab"), OnSpawnTab, FCanSpawnTab::CreateLambda([](const FSpawnTabArgs&) {return true; }));

	TSharedRef<SWindow> Window = SNew(SWindow)
		.AutoCenter(EAutoCenter::PrimaryWorkArea)
		.ClientSize(FVector2D(1280.f, 960.f))
		.Title(GetDisplayName())
		.CreateTitleBar(false);

	//设置布局
	{
		FSlateApplication::Get().AddWindow(Window, false);
		FSlateNotificationManager::Get().SetRootWindow(Window);
		FGlobalTabmanager::Get()->SetRootWindow(Window);
		FGlobalTabmanager::Get()->SetAllowWindowMenuBar(true);

		Window->SetOnWindowClosed(FOnWindowClosed::CreateLambda(
			[this, Window](const TSharedRef<SWindow>& InWindow)
			{
				if (InWindow == Window)
				{
					FGlobalTabmanager::Get()->SavePersistentLayout();
				}
			}
		));
		
		//FGlobalTabmanager::Get()->SetOnPersistLayout(FTabManager::FOnPersistLayout::CreateSP(this, 
		//		&FAutomatedToolEditor::SaveWorkModeLayout));

		
		//SDockingArea被创建时，会将自己添加进FTabmanager::DockArea中
		//不能颠倒，此时MainTab会被加入ExistingLiveTab
		TSharedPtr<SWidget> Content = FGlobalTabmanager::Get()->RestoreFrom(DefaultLayout, Window, true);
		FGlobalTabmanager::Get()->SetMainTab(MainTab.ToSharedRef());

		MyTabManager = FGlobalTabmanager::Get()->NewTabManager(MainTab.ToSharedRef());
		MyTabManager->SetAllowWindowMenuBar(true);

		TSharedRef<SAutomatedToolEditorWidget> EditorWidgetRef = SNew(SAutomatedToolEditorWidget, 
			StaticCastSharedRef<FAutomatedToolEditor>(this->AsShared()), MyTabManager.ToSharedRef());


		MainTab->SetContent(EditorWidgetRef);
		EditorWidget = EditorWidgetRef;
		Window->SetContent(Content.ToSharedRef());
		Window->BringToFront();

	}
}

const FName& FAutomatedToolEditor::GetMainMenuName() const
{
	static FName MenuName = FName(TEXT("AutomatedTool.MainMenu"));
	return MenuName;
}

void FAutomatedToolEditor::RegisterToolBar()
{
	RegisterWorkFlowToolBar();
	RegisterActionToolBar();
}

void FAutomatedToolEditor::RegisterWorkFlowToolBar()
{
	//AutomatedTool.ToolBar.WorkFlow  WorkFlowSection  WorkFlowSelector  WorkModeButtons
	FToolMenuOwnerScoped Owner(this);

	if (!UToolMenus::Get()->IsMenuRegistered(GetWorkFlowToolBarName()))
	{
		UToolMenu* ToolBar = UToolMenus::Get()->RegisterMenu(GetWorkFlowToolBarName(), NAME_None, EMultiBoxType::ToolBar);
		{
			FNewToolMenuDelegate OnGetContent = FNewToolMenuDelegate::CreateLambda(
				[this](UToolMenu* InMenu)
				{
					if (InMenu)
					{
						FToolMenuSection& ComboButtonSection = InMenu->FindOrAddSection(NAME_None);

						for (auto& WorkFlow : this->WorkFlows)
						{
							if (WorkFlow.IsValid())
							{
								ComboButtonSection.AddMenuEntry(
									WorkFlow->GetRealName(),
									WorkFlow->GetDisplayName(),
									FText::Format(LOCTEXT("WorkFlowSelector_FormatText", "Seclect the {0} WorkFlow"), WorkFlow->GetDisplayName().Get()),
									FSlateIcon(),
									FExecuteAction::CreateLambda(
										[this, WorkFlow]()
										{
											if (WorkFlow.IsValid())
											{
												this->SetCurrentWorkFlow(WorkFlow->GetRealName());
											}
										}
									)
								);
							}
						}

					}
				}
			);

			TAttribute<FText> Label = TAttribute<FText>::Create(
				TAttribute<FText>::FGetter::CreateLambda(
					[this]()->FText
					{
						if (this->CurrentWorkFlow.IsValid())
						{
							return this->CurrentWorkFlow->GetDisplayName().Get();
						}
						return FText::GetEmpty();
					}
				)
			);

			TAttribute<FText> ToolTip = TAttribute<FText>::Create(
				TAttribute<FText>::FGetter::CreateLambda(
					[this]()
					{
						FText Text = FText::FromString(TEXT("No workflow."));
						if (this->CurrentWorkFlow.IsValid())
						{						
							Text = CurrentWorkFlow->GetDisplayName().Get();
						}
						return FText::Format(LOCTEXT("WorkFlowSelector_FormatText_ShowRow", "{0}"), Text);
					}
				)
			);

			FToolMenuEntry WorkFlowSelector = FToolMenuEntry::InitComboButton(
				"WorkFlowSelector",
				FUIAction(),
				OnGetContent,
				Label,
				ToolTip,
				FSlateIcon(),
				false,
				"WorkFlowSelector"
			);


			FToolMenuSection& WorkFlowSection = ToolBar->FindOrAddSection(NAME_None);
			WorkFlowSection.AddEntry(WorkFlowSelector);

			//可替换
			SAssignNew(WorkModeSelector, SBorder)
				[
					SNullWidget::NullWidget
				];

			WorkFlowSection.AddEntry(
				FToolMenuEntry::InitWidget
				(
					"WorkModeSelector",
					WorkModeSelector.ToSharedRef(),
					FText::GetEmpty()
				)
			);
		}
	}

}

void FAutomatedToolEditor::RegisterActionToolBar()
{
	FToolMenuOwnerScoped Owner(this);
	//AutomatedTool.ToolBar.WorkFlow  CommonActionSection
	//AutomatedTool.ToolBar.WorkFlow  WorkFlowActionSection
	//AutomatedTool.ToolBar.WorkFlow  WorkModeActionSection
	if (!UToolMenus::Get()->IsMenuRegistered(GetActionToolBarName()))
	{
		UToolMenu* ToolBar = UToolMenus::Get()->RegisterMenu(GetActionToolBarName(), NAME_None, EMultiBoxType::ToolBar);
		{
			FToolMenuSection& CommonActionSection = ToolBar->FindOrAddSection(TEXT("CommonActionSection"));
			{
				//FToolMenuExecuteAction, const FToolMenuContext&
				CommonActionSection.AddMenuEntry(FName(TEXT("CommonActionTest")), LOCTEXT("CommonActionLabel", "CommonActionTest"),
					LOCTEXT("CommonActionToolTip", "CommonActionTest"), FSlateIcon(), FUIAction());
			}
			FToolMenuSection& WorkFlowActionSection = ToolBar->FindOrAddSection(TEXT("WorkFlowActionSection"));
			{
				//FToolMenuExecuteAction, const FToolMenuContext&
				WorkFlowActionSection.AddMenuEntry(FName(TEXT("WorkFlowActionTest")), LOCTEXT("WorkFlowActionLabel", "WorkFlowActionTest"),
					LOCTEXT("WorkFlowActionToolTip", "WorkFlowActionTest"), FSlateIcon(), FUIAction());
			}
			FToolMenuSection& WorkModeActionSection = ToolBar->FindOrAddSection(TEXT("WorkModeActionSection"));
			{
				//FToolMenuExecuteAction, const FToolMenuContext&
				WorkModeActionSection.AddMenuEntry(FName(TEXT("WorkModeActionTest")), LOCTEXT("WorkModeActionLabel", "WorkModeActionTest"),
					LOCTEXT("WorkModeActionToolTip", "WorkModeActionTest"), FSlateIcon(), FUIAction());
			}
		}
	}
}

void FAutomatedToolEditor::SetWorkModeSelector(TSharedPtr<SWidget> InWidget)
{
	if (InWidget.IsValid())
	{
		WorkModeSelector->SetContent(InWidget.ToSharedRef());
	}
	else
	{
		WorkModeSelector->SetContent(SNullWidget::NullWidget);
	}
}

const FName& FAutomatedToolEditor::GetWorkFlowToolBarName() const
{
	static FName MenuName = FName(TEXT("AutomatedTool.ToolBar.WorkFlow"));
	return MenuName;
}

const FName& FAutomatedToolEditor::GetActionToolBarName() const
{
	static FName MenuName = FName(TEXT("AutomatedTool.ToolBar.Action"));
	return MenuName;
}

FString FAutomatedToolEditor::GetLayoutSaveFilePath(const FString& InWorkFlowName)
{
	FString Path = FSimpleAutomatedToolViewModule::EditorLayoutJson;
	FString Extension = FPaths::GetExtension(Path, true);
	Path.RemoveFromEnd(Extension);
	return Path + TEXT("_") + InWorkFlowName + Extension;
}

TSharedRef<SWidget> FAutomatedToolEditor::GenerateWorkModeSelectorToolbarWidget()
{
	return CurrentWorkFlow.IsValid() ? CurrentWorkFlow->GenerateWorkModeSelectorToolbarWidget() : SNullWidget::NullWidget;
}

TSharedRef<SWidget> FAutomatedToolEditor::GenerateWorkFlowSelectorToolbarWidget()
{
	FToolMenuContext MenuContext(GetCommandList());
	RegisterMenuContextObject(MenuContext);

	UToolMenu* WorkFlowToolBar = UToolMenus::Get()->GenerateMenu(GetWorkFlowToolBarName(), MenuContext);

	TSharedRef<SWidget> WorkFlowToolBarWidget = UToolMenus::Get()->GenerateWidget(WorkFlowToolBar);

	return WorkFlowToolBarWidget;
}

TSharedRef<SWidget> FAutomatedToolEditor::GenerateActionToolbarWidget()
{
	FToolMenuContext MenuContext(GetCommandList());
	RegisterMenuContextObject(MenuContext);
	
	UToolMenu* ActionToolBar = UToolMenus::Get()->GenerateMenu(GetActionToolBarName(), MenuContext);

	TSharedRef<SWidget> ActionToolBarWidget = UToolMenus::Get()->GenerateWidget(ActionToolBar);

	return ActionToolBarWidget;
}

FName FAutomatedToolEditor::GetDefaultName() const
{
	return FName(FAutomatedToolViewCommonMethod::GetNameWithSerialNumber<FAutomatedToolWorkMode>(TEXT("Editor")));
}

void FAutomatedToolEditor::RegisterMenuContextObject(FToolMenuContext& InMenuContext)
{
	UAutomatedToolEditorContext* EditorContext = NewObject<UAutomatedToolEditorContext>();
	EditorContext->EditorInstance = StaticCastSharedRef<FAutomatedToolEditor>(this->AsShared());
	InMenuContext.AddObject(EditorContext);
	if(CurrentWorkFlow.IsValid())
	{
		CurrentWorkFlow->RegisterMenuContextObject(InMenuContext);
	}
}

void FAutomatedToolEditor::AddNewWorkFlow(TSharedPtr<FAutomatedToolWorkFlow> InNewWorkFlow)
{
	if (InNewWorkFlow.IsValid() && !WorkFlows.Contains(InNewWorkFlow))
	{
		if (!InNewWorkFlow->IsInitialized())
		{
			InNewWorkFlow->Initialize();
		}

		//用于辨识的Real Name, 可自定义, 但不可重复
		if (ensure(WorkFlowsNames.Find(InNewWorkFlow->GetRealName()) == INDEX_NONE))
		{
			WorkFlows.Add(InNewWorkFlow);
			WorkFlowsNames.Add(InNewWorkFlow->GetRealName());
		}
		else
		{
			UE_LOG(SimpleAutomatedToolViewLog, Log, TEXT("the real name of the WorkFlow is repetitive."));
		}
	}
}

void FAutomatedToolEditor::RegisterWorkFlow(TSharedRef<FAutomatedToolWorkFlow> InWorkFlow)
{
	AddNewWorkFlow(InWorkFlow);
}

void FAutomatedToolEditor::SetCurrentWorkFlow(TSharedPtr<FAutomatedToolWorkFlow> InNewWorkFlow)
{
	if (CurrentWorkFlow == InNewWorkFlow)
	{
		return;
	}

	if (InNewWorkFlow.IsValid())
	{
		TSharedPtr<FAutomatedToolWorkFlow> PendingActiveWorkFlow = nullptr;
		for (auto& WorkFlow : WorkFlows)
		{
			if (WorkFlow == InNewWorkFlow)
			{
				PendingActiveWorkFlow = WorkFlow;
				break;
			}
		}

		if (PendingActiveWorkFlow.IsValid())
		{
			if (CurrentWorkFlow.IsValid())
			{
				CurrentWorkFlow->DeactivateWorkFlow();
			}
			CurrentWorkFlow = PendingActiveWorkFlow;
			CurrentWorkFlow->ActivateWorkFlow();
		}
	}
	else
	{
		if (CurrentWorkFlow.IsValid())
		{
			CurrentWorkFlow->DeactivateWorkFlow();
			CurrentWorkFlow = nullptr;
		}
	}

}

void FAutomatedToolEditor::SetCurrentWorkFlow(FName InWorkFlowName)
{
	if (InWorkFlowName == NAME_None)
	{
		if (CurrentWorkFlow.IsValid())
		{
			CurrentWorkFlow->DeactivateWorkFlow();
			CurrentWorkFlow = nullptr;
		}
		return;
	}
	else
	{
		if (CurrentWorkFlow.IsValid() && CurrentWorkFlow->GetRealName() == InWorkFlowName)
		{
			return;
		}

		TSharedPtr<FAutomatedToolWorkFlow> PendingActiveWorkFlow = nullptr;
		for (auto& WorkFlow : WorkFlows)
		{
			if (WorkFlow->GetRealName() == InWorkFlowName)
			{
				PendingActiveWorkFlow = WorkFlow;
				break;
			}
		}

		if (CurrentWorkFlow.IsValid())
		{
			CurrentWorkFlow->DeactivateWorkFlow();
		}

		CurrentWorkFlow = PendingActiveWorkFlow;
		CurrentWorkFlow->ActivateWorkFlow();
	}
}

void FAutomatedToolEditor::OnEditMenu(UToolMenu* InMenu)
{
}

void FAutomatedToolEditor::SetShowExtensionPoint(bool InBool)
{
	bShowExtensionPoint = InBool;
	UToolMenus::Get()->SetEditMenusMode(InBool);
	EditorWidget.Pin()->RegenerateMenusAndToolBar();
}

bool FAutomatedToolEditor::GetShowExtensionPoint()
{
	return bShowExtensionPoint;
}

void FAutomatedToolEditor::SetShowMultiBoxHooks(bool InBool)
{
	bShowMultiBoxHooks = InBool;
	EditorWidget.Pin()->RegenerateMenusAndToolBar();
}

bool FAutomatedToolEditor::GetShowMultiBoxHooks()
{
	return bShowMultiBoxHooks;
}

void FAutomatedToolEditor::OnSaveEditorState(TSharedRef<FJsonObject> InJsonObject)
{
	InJsonObject->SetStringField("LastWorkFlow", CurrentWorkFlow.IsValid() ? CurrentWorkFlow->GetRealName().ToString() : FString());
}

void FAutomatedToolEditor::OnLoadEditorState(TSharedRef<FJsonObject> InJsonObject)
{
	FString CurrentWorkFlowName;
	SavedEditorState.Clear();
	if (InJsonObject->TryGetStringField("LastWorkFlow", CurrentWorkFlowName))
	{
		if (CurrentWorkFlowName.IsEmpty())
		{
			return;
		}
		else
		{
			for (auto& WorkFlow : WorkFlows)
			{
				if (WorkFlow->GetRealName().ToString().Equals(CurrentWorkFlowName, ESearchCase::IgnoreCase))
				{
					SavedEditorState.LastWorkFlow = WorkFlow;
					break;
				}
			}
		}
	}


}

TSharedPtr<FAutomatedToolWorkFlow> FAutomatedToolEditor::GetCurrentWorkFlow() const 
{ 
	return CurrentWorkFlow; 
}

TSharedPtr<FAutomatedToolWorkMode> FAutomatedToolEditor::GetCurrentWorkMode() const
{
	return CurrentWorkFlow.IsValid() ? CurrentWorkFlow->GetCurrentWorkMode() : nullptr; 
}

//CommonCommand
void FAutomatedToolEditor::RegisterCommand()
{

}

void FAutomatedToolEditor::BindCommand()
{
}

void FAutomatedToolEditor::RegisterEditorStateSection()
{
	Super::RegisterEditorStateSection();

	//可以顶掉两个代理，选择是否记录父类的状态
	GetEditorStateStorageMap().RegisterStateSectionUsage(
		"AutomatedToolEditor",
		FOnSerializeState::CreateSP(this, &FAutomatedToolEditor::OnSaveEditorState),
		FOnDeserializeState::CreateSP(this, &FAutomatedToolEditor::OnLoadEditorState)
		);
}

void FAutomatedToolEditor::SaveLayoutState(const TSharedRef<FTabManager::FLayout>& InLayout)
{
	FLayoutSaveRestore::SaveToConfig(GetLayoutSaveFilePath(CurrentWorkFlow->GetRealName().ToString()), InLayout);
}

TSharedRef<FTabManager::FLayout> FAutomatedToolEditor::LoadWorkModeLayout()
{
	TSharedPtr<FAutomatedToolWorkMode> CurrentAutomatedToolWorkMode = GetCurrentWorkMode();

	if (CurrentAutomatedToolWorkMode.IsValid())
	{
		TSharedRef<FTabManager::FLayout> DefaultLayout = CurrentAutomatedToolWorkMode->GetWorkModeLayout();
		DefaultLayout = FLayoutSaveRestore::LoadFromConfig(GetLayoutSaveFilePath(CurrentWorkFlow->GetRealName().ToString()), DefaultLayout);
		return DefaultLayout;
	}
	return FTabManager::FLayout::NullLayout;
}

void FAutomatedToolEditor::SaveWorkModeLayout(const TSharedRef<FTabManager::FLayout>& InLayout)
{
	if(CurrentWorkFlow.IsValid())
	{
		FLayoutSaveRestore::SaveToConfig(GetLayoutSaveFilePath(CurrentWorkFlow->GetRealName().ToString()), InLayout);
	}
}

void FAutomatedToolEditor::OnMainTabClosed(TSharedRef<SDockTab> InTab)
{
	
}

void FAutomatedToolEditor::NotifyActivateWorkMode(TSharedPtr<FAutomatedToolWorkMode> InWorkMode)
{
	if (InWorkMode.IsValid())
	{
		EditorWidget.Pin()->RestoreFromLayout(LoadWorkModeLayout());
		//InWorkMode->InvokeTabs(MyTabManager.ToSharedRef());
	}
}

void FAutomatedToolEditor::NotifyDeactivateWorkMode(TSharedPtr<FAutomatedToolWorkMode> InWorkMode)
{
	if (InWorkMode.IsValid())
	{
		EditorWidget.Pin()->ClearLayout();
		MyTabManager->CloseAllAreas();
	}
}

void FAutomatedToolEditor::NotifyActivateWorkFlow(TSharedPtr<FAutomatedToolWorkFlow> InWorkFlow)
{
}

void FAutomatedToolEditor::NotifyDeactivateWorkFlow(TSharedPtr<FAutomatedToolWorkFlow> InWorkFlow)
{
}

#undef LOCTEXT_NAMESPACE


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

