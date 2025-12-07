#include "Editor/Base/AutomatedToolWorkMode.h"
#include "Editor/Base/AutomatedToolEditor.h"
#include "Editor/Base/AutomatedToolWorkFlow.h"
#include "Editor/MenuContext/AutomatedToolWorkModeContext.h"
#include "SimpleAutomatedToolViewEditorID.h"


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

#define LOCTEXT_NAMESPACE "FAutomatedToolWorkMode"

FAutomatedToolWorkMode::FAutomatedToolWorkMode(TSharedRef<FAutomatedToolEditor> InWidgetEditor,
	TSharedRef<FAutomatedToolWorkFlow> InWorkFlow, FName InModeName)
	: Super(InWorkFlow.ToSharedPtr(), InModeName), WorkFlowInstance(InWorkFlow), EditorInstance(InWidgetEditor)
{
	TSharedRef<FTabManager::FLayout> Layout = FTabManager::NewLayout("DefaultLayout");
	Layout->AddArea(FTabManager::NewPrimaryArea());
	SetWorkModeLayout(Layout);
}
void FAutomatedToolWorkMode::Initialize()
{
	Super::Initialize();
	GetWorkspaceItemCategory()->AddItem(FEditorTabType::GetTabSpawnerEntry<ETabType::DefaultTabName>());
}

FName FAutomatedToolWorkMode::GetDefaultName() const
{
	return FName(FAutomatedToolViewCommonMethod::GetNameWithSerialNumber<FAutomatedToolWorkMode>(TEXT("WorkMode")));
}

void FAutomatedToolWorkMode::RegisterMenuContextObject(FToolMenuContext& InMenuContext)
{
	UAutomatedToolWorkModeContext* WorkModeContext = NewObject<UAutomatedToolWorkModeContext>();
	WorkModeContext->WorkModeInstance = StaticCastSharedRef<FAutomatedToolWorkMode>(this->AsShared());
	InMenuContext.AddObject(WorkModeContext);
}

void FAutomatedToolWorkMode::RegisterCommand()
{

}

void FAutomatedToolWorkMode::BindCommand()
{

}

void FAutomatedToolWorkMode::RegisterMenu(UToolMenu* InMenu)
{
	FToolMenuOwnerScoped Owner(this);
	FToolMenuSection& Section1 = InMenu->FindOrAddSection("WorkModeSection1");
	Section1.Label = LOCTEXT("WorkModeSection1_Label", "WorkModeSection1");
	{
		Section1.AddMenuEntry(
			"WorkModeSection1_Test1",
			LOCTEXT("WorkModeSection1_Test1_Label", "WorkModeSection1_Test1"),
			LOCTEXT("WorkModeSection1_Test1_Tooltip", "WorkModeSection1_Test1_Tooltip"),
			FSlateIcon(),
			FToolUIAction()
		);

		Section1.AddSubMenu(
			"WorkModeSection1_Test2",
			LOCTEXT("WorkModeSection1_Test2_Label", "WorkModeSection1_Test2"),
			LOCTEXT("WorkModeSection1_Test2_Tooltip", "WorkModeSection1_Test2_Tooltip"),
			FNewToolMenuDelegate::CreateLambda(
				[](UToolMenu* InSubMenu)
				{
					if (InSubMenu)
					{
						InSubMenu->FindOrAddSection(NAME_None)
							.AddMenuEntry(
								"WorkModeSection1_SubMenu_Test1",
								LOCTEXT("WorkModeSection1_SubMenu_Test1_Label", "WorkModeSection1_SubMenu_Test1"),
								LOCTEXT("WorkModeSection1_SubMenu_Test1_Tooltip", "WorkModeSection1_SubMenu_Test1_Tooltip"),
								FSlateIcon(),
								FToolUIAction()
							);
					}
				}
			)
		);
	}
	FToolMenuSection& Section2 = InMenu->FindOrAddSection("WorkModeSection2");
	Section2.Label = LOCTEXT("WorkModeSection2_Label", "WorkModeSection2");
	{
		Section2.AddMenuEntry(
			"WorkModeSection2_Test1",
			LOCTEXT("WorkModeSection2_Test1_Label", "WorkModeSection2_Test1"),
			LOCTEXT("WorkModeSection2_Test1_Tooltip", "WorkModeSection2_Test1_Tooltip"),
			FSlateIcon(),
			FToolUIAction()
		);
	}
}

TSharedRef<SWidget> FAutomatedToolWorkMode::GenerateWorkModeInvokerWidget()
{
	FOnClicked OnClicked = FOnClicked::CreateLambda(
		[this]()
		{
			this->WorkFlowInstance.Pin()->SetCurrentWorkMode(this->GetRealName());
			return FReply::Handled();
		}
	);
	return SNew(SButton)
	.OnClicked(OnClicked)
	.HAlign(HAlign_Center)
	.VAlign(VAlign_Center)
	.Text(GetDisplayName());
}

void FAutomatedToolWorkMode::ActivateWorkMode()
{
	check(EditorInstance.IsValid());
	check(EditorInstance.Pin()->GetTabManager());

	EditorInstance.Pin()->GetTabManager()->AddLocalWorkspaceMenuItem(GetWorkspaceItemCategory());
	RegisterTabSpawner(EditorInstance.Pin()->GetTabManager().ToSharedRef());
	EditorInstance.Pin()->NotifyActivateWorkMode(StaticCastSharedPtr<FAutomatedToolWorkMode>(this->AsShared().ToSharedPtr()));
}

void FAutomatedToolWorkMode::DeactivateWorkMode()
{
	check(EditorInstance.IsValid());
	check(EditorInstance.Pin()->GetTabManager());
	EditorInstance.Pin()->NotifyDeactivateWorkMode(StaticCastSharedPtr<FAutomatedToolWorkMode>(this->AsShared().ToSharedPtr()));
	UnregisterTabSpawner(EditorInstance.Pin()->GetTabManager().ToSharedRef());
	EditorInstance.Pin()->GetTabManager()->ClearLocalWorkspaceMenuCategories();
}

void FAutomatedToolWorkMode::RegisterTabSpawner(TSharedRef<FTabManager> InTabManager)
{
	FEditorTabType::RegisterTabSpawner<ETabType::DefaultTabName>(InTabManager);
}

void FAutomatedToolWorkMode::UnregisterTabSpawner(TSharedRef<FTabManager> InTabManager)
{
	FEditorTabType::UnregisterTabSpawner<ETabType::DefaultTabName>(InTabManager);
}

void FAutomatedToolWorkMode::InvokeTabs(TSharedRef<FTabManager> InTabManager)
{
	FEditorTabType::InvokeTab<ETabType::DefaultTabName>(InTabManager);
}

void FAutomatedToolWorkMode::AddTabSummonerMenuEntryInGiveMenu(UToolMenu* InMenu)
{
	UAutomatedToolWorkModeContext* Context = InMenu->FindContext<UAutomatedToolWorkModeContext>();
	USlateTabManagerContext* SlateTabManagerContext = InMenu->FindContext<USlateTabManagerContext>();
	if (Context && Context->WorkModeInstance.Pin().Get() == this)
	{
		FToolMenuSection& Section = InMenu->FindOrAddSection(GetRealName());

		FToolUIActionChoice UIAction;
		AddCheckBoxInSection(Section, ETabType::DefaultTabName, UIAction);
	}
}

#undef LOCTEXT_NAMESPACE



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT