#include "Editor/Misc/MenuConfig.h"
#include "Editor/Base/AutomatedToolEditor.h"
#include "Editor/Base/AutomatedToolWorkFlow.h"
#include "Editor/Base/AutomatedToolWorkMode.h"
#include "ISlateReflectorModule.h"
#include "WorkFlow/WorkFlow_Automation.h"
#include "Editor/MenuContext/AutomatedToolEditorContext.h"
#include "Editor/MenuContext/AutomatedToolWorkFlowContext.h"
#include "Editor/MenuContext/AutomatedToolWorkModeContext.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

#define LOCTEXT_NAMESPACE "FAutomatedToolEditor"

void FAutomatedToolEditor::RegisterMainMenu()
{
	if (!UToolMenus::Get()->IsMenuRegistered(GetMainMenuName()))
	{
		FToolMenuOwnerScoped ToolMenuOwnerScoped(this);
		UToolMenu* MainMenu = UToolMenus::Get()->RegisterMenu(GetMainMenuName(), NAME_None, EMultiBoxType::MenuBar);

		//直接注册AutomatedTool.MainMenu为MenuBar, AutomatedTool.MainMenu.File为Menu
		//UToolMenus::GenerateSubMenu会通过JoinMenuPaths(InGeneratedParent->GetMenuName(), InBlockName)组合出子菜单名
		//然后，查找Menu的Map
		//1
		MainMenu->AddSubMenu(
			ToolMenuOwnerScoped.GetOwner(),	//@Owner
			NAME_None,						//@SectionName
			"File",							//@SubMenuName 会组合成AutomatedTool.MainMenu.File作为子菜单的UToolMenu, 但使用的是ExtendMenu
			LOCTEXT("AutomatedTool.MainMenu.File_Label", "File"),
			LOCTEXT("AutomatedTool.MainMenu.File_Tooltip", "Open the File menu")
		);									//@return 返回AutomatedTool.MainMenu.File的UToolMenu,

		//2
		MainMenu->AddSubMenu(
			ToolMenuOwnerScoped.GetOwner(),	//Owner
			NAME_None,						//SectionName
			"Edit",
			LOCTEXT("AutomatedTool.MainMenu.Edit_Label", "Edit"),
			LOCTEXT("AutomatedTool.MainMenu.Edit_Tooltip", "Open the Edit menu")
		);

		//3
		MainMenu->AddSubMenu(
			ToolMenuOwnerScoped.GetOwner(),	//Owner
			NAME_None,						//SectionName
			"Asset",
			LOCTEXT("AutomatedTool.MainMenu.Asset_Label", "Asset"),
			LOCTEXT("AutomatedTool.MainMenu.Asset_Tooltip", "Open the Asset menu")
		);

		//4
		MainMenu->AddSubMenu(
			ToolMenuOwnerScoped.GetOwner(),	//Owner
			NAME_None,						//SectionName
			"Window",
			LOCTEXT("AutomatedTool.MainMenu.Window_Label", "Window"),
			LOCTEXT("AutomatedTool.MainMenu.Window_Tooltip", "Open the Window menu")
		);

		//5
		FToolMenuSection& MainMenuSection = MainMenu->FindOrAddSection(NAME_None);
		MainMenuSection.AddSubMenu(
			"WorkFlow",
			LOCTEXT("AutomatedTool.MainMenu.WorkFlow_Label", "WorkFlow"),
			LOCTEXT("AutomatedTool.MainMenu.WorkFlow_Tooltip", "Open the WorkFlow menu"),
			FNewToolMenuDelegate::CreateLambda(
				[](UToolMenu* InMenu)
				{
					if(InMenu)
					{
						//使用Context不使用this，防止不一致，便于检查错误
						UAutomatedToolWorkFlowContext* Context = InMenu->FindContext<UAutomatedToolWorkFlowContext>();

						if (Context && Context->WorkFlowInstance.IsValid())
						{
							TSharedPtr<FAutomatedToolWorkFlow> WorkFlow = Context->WorkFlowInstance.Pin();
							WorkFlow->RegisterMenu(InMenu);
						}
					}
				}
			)
		);

		//6
		MainMenuSection.AddSubMenu(
			"WorkMode",
			LOCTEXT("AutomatedTool.MainMenu.WorkMode_Label", "WorkMode"),
			LOCTEXT("AutomatedTool.MainMenu.WorkMode_Tooltip", "Open the WorkMode menu"),
			FNewToolMenuDelegate::CreateLambda(
				[](UToolMenu* InMenu)
				{
					if (InMenu)
					{
						//使用Context不使用this，防止不一致，便于检查错误
						UAutomatedToolWorkModeContext* Context = InMenu->FindContext<UAutomatedToolWorkModeContext>();

						if (Context && Context->WorkModeInstance.IsValid())
						{
							TSharedPtr<FAutomatedToolWorkMode> WorkMode = Context->WorkModeInstance.Pin();
							WorkMode->RegisterMenu(InMenu);
						}
					}
				}
			)
		);

		//7
		MainMenu->AddSubMenu(
			ToolMenuOwnerScoped.GetOwner(),	//Owner
			NAME_None,						//SectionName
			"Tools",
			LOCTEXT("AutomatedTool.MainMenu.Tools_Label", "Tools"),
			LOCTEXT("AutomatedTool.MainMenu.Tools_Tooltip", "Open the Tools menu")
		);

		//8
		MainMenu->AddSubMenu(
			ToolMenuOwnerScoped.GetOwner(),	//Owner
			NAME_None,						//SectionName
			"Help",
			LOCTEXT("AutomatedTool.MainMenu.Help_Label", "Help"),
			LOCTEXT("AutomatedTool.MainMenu.Help_Tooltip", "Open the Help menu")
		);


		RegisterFileMenu();
		RegisterEditMenu();
		RegisterAssetMenu();
		RegisterWindowMenu();
		RegisterWorkFlowMenu();
		RegisterWorkModeMenu();
		RegisterToolsMenu();
		RegisterHelpMenu();
	}
}

void FAutomatedToolEditor::RegisterFileMenu()
{
	FName FileMenuName = FName(GetMainMenuName().ToString() + TEXT(".File"));

	if(!UToolMenus::Get()->IsMenuRegistered(FileMenuName))
	{
		UToolMenu* FileMenu = UToolMenus::Get()->RegisterMenu(FileMenuName, NAME_None, EMultiBoxType::Menu);

		//可在此处提前填充菜单
		FToolMenuSection& FileSection1 = FileMenu->FindOrAddSection("File_Section_1");
		FileSection1.Label = LOCTEXT("File_Section_1_Label", "File_Section_1");
		{
			FileSection1.AddMenuEntry(
				"Test1",
				LOCTEXT("File_Section_Test1_Label", "Test1"),
				LOCTEXT("File_Section_Test1_Tootip", "a Menu Entry named Test1."),
				FSlateIcon(),
				FUIAction()
			);
		}
		FToolMenuSection& FileSection2 = FileMenu->FindOrAddSection("File_Section_2");
		FileSection2.Label = LOCTEXT("File_Section_2_Label", "File_Section_2");
		{
			FileSection2.AddMenuEntry(
				"Test1",
				LOCTEXT("File_Section_Test1_Label", "Test1"),
				LOCTEXT("File_Section_Test1_Tootip", "a Menu Entry named Test1."),
				FSlateIcon(),
				FUIAction()
			);
		}
	}

}

void FAutomatedToolEditor::RegisterEditMenu()
{
	FName EditMenuName = FName(GetMainMenuName().ToString() + TEXT(".Edit"));

	if (!UToolMenus::Get()->IsMenuRegistered(EditMenuName))
	{
		UToolMenu* EditMenu = UToolMenus::Get()->RegisterMenu(EditMenuName, NAME_None, EMultiBoxType::Menu);

	}

}

void FAutomatedToolEditor::RegisterAssetMenu()
{
	FName AssetMenuName = FName(GetMainMenuName().ToString() + TEXT(".Asset"));

	if (!UToolMenus::Get()->IsMenuRegistered(AssetMenuName))
	{
		UToolMenu* AssetMenu = UToolMenus::Get()->RegisterMenu(AssetMenuName, NAME_None, EMultiBoxType::Menu);

		//可在此处提前填充菜单
	}
}

void FAutomatedToolEditor::RegisterWindowMenu()
{
	FName WindowMenuName = FName(GetMainMenuName().ToString() + TEXT(".Window"));

	if (!UToolMenus::Get()->IsMenuRegistered(WindowMenuName))
	{
		UToolMenu* WindowMenu = UToolMenus::Get()->RegisterMenu(WindowMenuName, NAME_None, EMultiBoxType::Menu);

		FToolMenuSection& QuickSettingsSection = WindowMenu->AddSection(
			FName("QuickSettings"),
			LOCTEXT("QuickSettings_SectionLable", "QuickSettings"),
			FToolMenuInsert()
			);

		{
			FToolUIAction ShowExtensionPointAction;
			ShowExtensionPointAction.ExecuteAction = FToolMenuExecuteAction::CreateLambda(
				[](const FToolMenuContext& InContext)
				{
					UAutomatedToolEditorContext* EditorContext = InContext.FindContext<UAutomatedToolEditorContext>();
					if (EditorContext)
					{
						TSharedPtr<FAutomatedToolEditor> Editor = EditorContext->EditorInstance.Pin();
						if (Editor->GetShowExtensionPoint())
						{
							Editor->SetShowExtensionPoint(false);
						}
						else
						{
							Editor->SetShowExtensionPoint(true);
						}
					}
				}
			);
			ShowExtensionPointAction.GetActionCheckState = FToolMenuGetActionCheckState::CreateLambda(
				[](const FToolMenuContext& InContext)->ECheckBoxState {
				UAutomatedToolEditorContext* EditorContext = InContext.FindContext<UAutomatedToolEditorContext>();
				if (EditorContext)
				{
					if (EditorContext->EditorInstance.Pin()->GetShowExtensionPoint())
					{
						return ECheckBoxState::Checked;
					}
					else
					{
						return ECheckBoxState::Unchecked;
					}
				}
				return ECheckBoxState::Undetermined;
				});

			//UToolMenus::Get()->ShouldDisplayExtensionPoints = true;
			QuickSettingsSection.AddMenuEntry(
				FName("ShowExtensionPoint"),
				LOCTEXT("ShowExtensionPoint_EntryLable", "ShowExtensionPoint"),
				LOCTEXT("ShowExtensionPoint_EntryTooltip", "Show extension point"),
				FSlateIcon(),
				ShowExtensionPointAction,
				EUserInterfaceActionType::ToggleButton,
				FName("ShowExtensionPoint")
			);


			FToolUIAction ShowMultiboxHooksAction;
			ShowMultiboxHooksAction.ExecuteAction = FToolMenuExecuteAction::CreateLambda(
				[](const FToolMenuContext& InContext)
				{
					UAutomatedToolEditorContext* EditorContext = InContext.FindContext<UAutomatedToolEditorContext>();
					if (EditorContext)
					{
						TSharedPtr<FAutomatedToolEditor> Editor = EditorContext->EditorInstance.Pin();
						if (Editor->GetShowMultiBoxHooks())
						{
							Editor->SetShowMultiBoxHooks(false);
						}
						else
						{
							Editor->SetShowMultiBoxHooks(true);
						}
					}
				}
			);
			ShowMultiboxHooksAction.GetActionCheckState = FToolMenuGetActionCheckState::CreateLambda(
				[](const FToolMenuContext& InContext)->ECheckBoxState {
					UAutomatedToolEditorContext* EditorContext = InContext.FindContext<UAutomatedToolEditorContext>();
					if (EditorContext)
					{
						if (EditorContext->EditorInstance.Pin()->GetShowMultiBoxHooks())
						{
							return ECheckBoxState::Checked;
						}
						else
						{
							return ECheckBoxState::Unchecked;
						}
					}
					return ECheckBoxState::Undetermined;
				});

			QuickSettingsSection.AddMenuEntry(
				FName("ShowMultiboxHooks"),
				LOCTEXT("ShowMultiboxHooks_EntryLable", "ShowMultiboxHooks"),
				LOCTEXT("ShowMultiboxHooks_EntryTooltip", "Show multibox hooks"),
				FSlateIcon(),
				ShowMultiboxHooksAction,
				EUserInterfaceActionType::ToggleButton,
				FName("ShowMultiboxHooks")
			);
		}


		//可在此处提前填充菜单
		WindowMenu->AddDynamicSection(
			"WorkModeTabs",
			FNewToolMenuDelegate::CreateLambda(
				[](UToolMenu* InMenu)
				{
					if(InMenu)
					{
						USlateTabManagerContext* TabManagerContextObject = InMenu->FindContext<USlateTabManagerContext>();
						UAutomatedToolWorkModeContext* WorkModeContextObject = InMenu->FindContext<UAutomatedToolWorkModeContext>();
						TSharedPtr<FTabManager> CurrentTabManager = TabManagerContextObject->TabManager.Pin();
						TSharedPtr<FAutomatedToolWorkMode> CurrentWorkMode =  WorkModeContextObject->WorkModeInstance.Pin();
						if (CurrentTabManager.IsValid() && CurrentWorkMode.IsValid())
						{
							CurrentWorkMode->AddTabSummonerMenuEntryInGiveMenu(InMenu);
						}
					}
				}
			),
			FToolMenuInsert(FName("QuickSettings"), EToolMenuInsertType::Before)
		);


	}
}

void FAutomatedToolEditor::RegisterWorkFlowMenu()
{
	FName WorkFlowMenuName = FName(GetMainMenuName().ToString() + TEXT(".WorkFlow"));

	if (!UToolMenus::Get()->IsMenuRegistered(WorkFlowMenuName))
	{
		UToolMenu* WorkFlowMenu = UToolMenus::Get()->RegisterMenu(WorkFlowMenuName, NAME_None, EMultiBoxType::Menu);
	}
}

void FAutomatedToolEditor::RegisterWorkModeMenu()
{
	FName WorkModeMenuName = FName(GetMainMenuName().ToString() + TEXT(".WorkMode"));

	if (!UToolMenus::Get()->IsMenuRegistered(WorkModeMenuName))
	{
		UToolMenu* WorkModeMenu = UToolMenus::Get()->RegisterMenu(WorkModeMenuName, NAME_None, EMultiBoxType::Menu);

		//可在此处提前填充菜单
	}
}

void FAutomatedToolEditor::RegisterToolsMenu()
{
	FName ToolsMenuName = FName(GetMainMenuName().ToString() + TEXT(".Tools"));

	if (!UToolMenus::Get()->IsMenuRegistered(ToolsMenuName))
	{
		UToolMenu* ToolsMenu = UToolMenus::Get()->RegisterMenu(ToolsMenuName, NAME_None, EMultiBoxType::Menu);

		//可在此处提前填充菜单
		FToolMenuSection& DebugToolsSection = ToolsMenu->FindOrAddSection("DebugTools");
		DebugToolsSection.Label = LOCTEXT("DebugTools_SectionLabel", "DebugTools");

		DebugToolsSection.AddMenuEntry(
			"SlateReflector", 
			LOCTEXT("SlateReflector_Label", "SlateReflector"),
			LOCTEXT("SlateReflector_Tooltip", "Open the SlateReflector tool."),
			FSlateIcon(),
			FUIAction
				(FExecuteAction::CreateLambda(
				[]()
				{
					ISlateReflectorModule* Reflector = &FModuleManager::LoadModuleChecked<ISlateReflectorModule>("SlateReflector");
					Reflector->DisplayWidgetReflector();
				}
				)),
			EUserInterfaceActionType::Button,
			"SlateReflector"
			);
	}
}

void FAutomatedToolEditor::RegisterHelpMenu()
{
	FName HelpMenuName = FName(GetMainMenuName().ToString() + TEXT(".Help"));

	if (!UToolMenus::Get()->IsMenuRegistered(HelpMenuName))
	{
		UToolMenu* HelpMenu = UToolMenus::Get()->RegisterMenu(HelpMenuName, NAME_None, EMultiBoxType::Menu);

		//可在此处提前填充菜单
	}
}

void FAutomatedToolEditor::RegisterWorkFlows()
{
	TSharedRef<FAutomatedToolEditor> This = StaticCastSharedRef<FAutomatedToolEditor>(this->AsShared());
	//基本流程
	TSharedRef<FAutomatedToolWorkFlow> WorkFlow_1 = MakeShared<FWorkFlow_Automation>(This);
	WorkFlow_1->Initialize();
	RegisterWorkFlow(WorkFlow_1);

	TSharedRef<FAutomatedToolWorkFlow> WorkFlow_2 = MakeShared<FAutomatedToolWorkFlow>(This);
	WorkFlow_2->Initialize();
	RegisterWorkFlow(WorkFlow_2);
}


//FAutomatedToolWorkFlow
void FAutomatedToolWorkFlow::RegisterWorkModes()
{
	TSharedRef<FAutomatedToolWorkMode> WorkMode_1 = MakeShared<FAutomatedToolWorkMode>(EditorInstance.Pin().ToSharedRef(), 
		StaticCastSharedRef<FAutomatedToolWorkFlow>(this->AsShared()));
	WorkMode_1->Initialize();
}

#undef LOCTEXT_NAMESPACE


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT