#include "Editor/TabSpawners/TabSpawnerElement.h"
#include "Editor/TabSpawners/TabSpawnerManager.h"

#define LOCTEXT_NAMESPACE "TabSpawnerElement"

FTabSpawnerElement::FTabSpawnerElement(const FName& InTabName, TSharedRef<FTabSpawnerManager> InTabSpawnerManager)
	: TabName(InTabName), ReferencedTab(nullptr), ReferencedTabSpawnerManager(InTabSpawnerManager),
		CheckBoxState(ECheckBoxState::Undetermined)
{
}

TSharedRef<SDockTab> FTabSpawnerElement::OnSpawnDockTab(const FSpawnTabArgs& InArgs)
{
	TSharedRef<SDockTab> DockTab = SNew(SDockTab);

	CheckBoxState = ECheckBoxState::Checked;

	SetDockTabContent(DockTab, InArgs);

	DockTab->SetOnTabClosed(SDockTab::FOnTabClosedCallback::CreateSP(this, &FTabSpawnerElement::OnTabClosed));

	return DockTab;
}

void FTabSpawnerElement::OnTabClosed(TSharedRef<SDockTab> InDockTab)
{
	ensure(GetCheckBoxState() == ECheckBoxState::Checked);
	SetCheckBoxState(ECheckBoxState::Unchecked);
}

bool FTabSpawnerElement::IsValid() const
{
	return ReferencedTabSpawner.IsValid() && ReferencedTab.IsValid() && TabName != NAME_None;
}

TSharedPtr<FTabManager>  FTabSpawnerElement::GetTabManager() const
{
	return ReferencedTabSpawnerManager.IsValid() ? ReferencedTabSpawnerManager.Pin()->GetTabManager() : nullptr;
}

TSharedPtr<FTabSpawnerEntry> FTabSpawnerElement::GetTabSpawnerEntry() const
{
	return ReferencedTabSpawner.Pin();
}

void FTabSpawnerElement::RegisterTab()
{
	TSharedPtr<FTabManager> TabManager = GetTabManager();
	if(TabManager.IsValid())
	{
		FTabSpawnerEntry& ReturnTabSpawner = TabManager->RegisterTabSpawner(
			TabName, 
			FOnSpawnTab::CreateSP(this, &FTabSpawnerElement::OnSpawnDockTab),
			FCanSpawnTab::CreateSP(this, &FTabSpawnerElement::OnCanSpawnTab)
		);
		ReferencedTabSpawner = StaticCastSharedRef<FTabSpawnerEntry>(ReturnTabSpawner.AsShared());
	}
}

TSharedPtr<SDockTab> FTabSpawnerElement::InvokerTab()
{
	TSharedPtr<FTabManager> TabManager = GetTabManager();
	if (TabManager.IsValid() && TabName != NAME_None)
	{
		TSharedPtr<SDockTab> DockTab = TabManager->TryInvokeTab(TabName);
		if(DockTab.IsValid())
		{
			DockTab->SetOnTabClosed(SDockTab::FOnTabClosedCallback::CreateSP(this, &FTabSpawnerElement::OnTabClosed));

			SetCheckBoxState(ECheckBoxState::Checked);
			ReferencedTab = DockTab;
			return DockTab;
		}
	}
	ReferencedTab = nullptr;
	SetCheckBoxState(ECheckBoxState::Undetermined);
	return nullptr;
}

FToolMenuEntry FTabSpawnerElement::MakeCheckBox()
{
	TSharedPtr<FTabSpawnerEntry> Spawner = GetTabSpawnerEntry();
	FToolMenuEntry CheckBoxMenuEntry;

	if(Spawner.IsValid())
	{
		FText Label = FText::Format(LOCTEXT("TabSpawnerCheckBox_Label", "{0}"), FText::FromName(TabName));
		FText Tooltip = FText::Format(LOCTEXT("TabSpawnerCheckBox_Tooltip", "{Open or close the {0} tab.}"), FText::FromName(TabName));

		FUIAction UIAction;
		UIAction.ExecuteAction.BindSP(this, &FTabSpawnerElement::ExecuteCheckBoxAction);
		UIAction.GetActionCheckState.BindSP(this, &FTabSpawnerElement::GetCheckBoxState);

		FToolMenuEntry CheckBoxMenuEntry = FToolMenuEntry::InitMenuEntry(
			Spawner->GetTabType(),
			Spawner->GetDisplayName(),
			Spawner->GetTooltipText(),
			FSlateIcon(),
			UIAction,
			EUserInterfaceActionType::Check,
			Spawner->GetTabType()
		);
	}
	else
	{
		CheckBoxMenuEntry = FToolMenuEntry::InitMenuEntry(
			"Invalid Check Box",
			LOCTEXT("InvalidCheckBox_Label", "InvalidCheckBox"),
			LOCTEXT("InvalidCheckBox_Tooltip", "this is a invalid check box"),
			FSlateIcon(),
			FUIAction(),
			EUserInterfaceActionType::Check,
			"Invalid Check Box"
		);
	}

	return CheckBoxMenuEntry;
}

void FTabSpawnerElement::ExecuteCheckBoxAction()
{
	if (ensure(ReferencedTab.IsValid() && GetTabManager().IsValid()))
	{
		switch (CheckBoxState)
		{
		case ECheckBoxState::Unchecked:
		{
			InvokerTab();
			return;
		}
		case ECheckBoxState::Checked:
		{
			ReferencedTab.Pin()->RequestCloseTab();		
			return;
		}
		case ECheckBoxState::Undetermined:
		default:
			break;
		}
	}
}

ECheckBoxState FTabSpawnerElement::GetCheckBoxState()
{
	check(CheckState());
	return CheckBoxState;
}

void FTabSpawnerElement::SetCheckBoxState(ECheckBoxState InState)
{
	CheckBoxState = InState;
}

bool FTabSpawnerElement::CheckState()
{
	switch (CheckBoxState)
	{
	case ECheckBoxState::Unchecked:
	{
		if (ReferencedTab.IsValid())
		{
			return false;
		}
	}
	case ECheckBoxState::Checked:
	{
		if (!ReferencedTab.IsValid())
		{
			return false;
		}

		TSharedPtr<SDockTab> DockTab = GetTabManager()->FindExistingLiveTab(TabName);
		if (!DockTab.IsValid())
		{
			return false;
		}
		
		if (ReferencedTab != DockTab)
		{
			return false;
		}
	}
	case ECheckBoxState::Undetermined:
	{
		if (ReferencedTab.IsValid())
		{
			return false;
		}
	}
	default:
		break;
	}
	return true;
}

#undef LOCTEXT_NAMESPACE