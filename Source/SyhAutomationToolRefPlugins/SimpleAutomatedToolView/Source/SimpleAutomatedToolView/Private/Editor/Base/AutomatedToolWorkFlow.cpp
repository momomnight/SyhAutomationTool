#include "Editor/Base/AutomatedToolWorkFlow.h"
#include "Editor/Base/AutomatedToolEditor.h"
#include "Editor/Base/AutomatedToolWorkMode.h"
#include "Editor/MenuContext/AutomatedToolWorkFlowContext.h"
#include "Widgets/Layout/SWrapBox.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

#define LOCTEXT_NAMESPACE "FAutomatedToolWorkFlow"

FAutomatedToolWorkFlow::FAutomatedToolWorkFlow(TSharedRef<FAutomatedToolEditor> InEditor, const FName& InWorkFlowName)
	: Super(InEditor.ToSharedPtr(), InWorkFlowName), EditorInstance(InEditor)
{

}

void FAutomatedToolWorkFlow::Initialize()
{
	Super::Initialize();

	RegisterWorkModes();

	
}


void FAutomatedToolWorkFlow::RegisterToolBar(const FName& InParentName)
{
	
}

const FName& FAutomatedToolWorkFlow::GetToolBarName() const
{
	static FName BaseWorkFlowToolBarName = FName(TEXT("WorkFlow"));
	return BaseWorkFlowToolBarName;
}

void FAutomatedToolWorkFlow::RegisterMenu(UToolMenu* InMenu)
{
	FToolMenuOwnerScoped Owner(this);
	FToolMenuSection& Section1 = InMenu->FindOrAddSection("WorkFlowSection1");
	Section1.Label = LOCTEXT("WorkFlowSection1_Label", "WorkFlowSection1");

	{
		Section1.AddMenuEntry(
			"WorkFlowSection1_Test1",
			LOCTEXT("WorkFlowSection1_Test1_Label","WorkFlowSection1_Test1"),
			LOCTEXT("WorkFlowSection1_Test1_Tooltip", "WorkFlowSection1_Test1_Tooltip"),
			FSlateIcon(),
			FToolUIAction()
		);

		Section1.AddSubMenu(
			"WorkFlowSection1_Test2",
			LOCTEXT("WorkFlowSection1_Test2_Label", "WorkFlowSection1_Test2"),
			LOCTEXT("WorkFlowSection1_Test2_Tooltip", "WorkFlowSection1_Test2_Tooltip"),
			FNewToolMenuDelegate::CreateLambda(
				[](UToolMenu* InSubMenu)
				{
					if (InSubMenu)
					{
						FToolMenuSection& SubMenuSection1 = InSubMenu->FindOrAddSection(NAME_None);
						SubMenuSection1.AddMenuEntry(
							"WorkFlowSection1_SubMenu_Test1",
							LOCTEXT("WorkFlowSection1_SubMenu_Test1_Label", "WorkFlowSection1_SubMenu_Test1"),
							LOCTEXT("WorkFlowSection1_SubMenu_Test1_Tooltip", "WorkFlowSection1_SubMenu_Test1_Tooltip"),
							FSlateIcon(),
							FToolUIAction()
						);
					}
				}
			)
		);
	}
	FToolMenuSection& Section2 = InMenu->FindOrAddSection("WorkFlowSection2");
	Section2.Label = LOCTEXT("WorkFlowSection2_Label", "WorkFlowSection2");
	{
		Section2.AddMenuEntry(
			"WorkFlowSection2_Test1",
			LOCTEXT("WorkFlowSection2_Test1_Label", "WorkFlowSection2_Test1"),
			LOCTEXT("WorkFlowSection2_Test1_Tooltip", "WorkFlowSection2_Test1_Tooltip"),
			FSlateIcon(),
			FToolUIAction()
		);
	}
}

TSharedRef<SWidget> FAutomatedToolWorkFlow::GenerateWorkModeSelectorToolbarWidget()
{
	//TSharedRef<SHorizontalBox> WorkModeSelector = SNew(SHorizontalBox);
	TSharedRef<SWrapBox> WorkModeSelector = SNew(SWrapBox);

	for (auto& WorkMode : WorkModes)
	{
		if(WorkMode.IsValid())
		{
			WorkModeSelector->AddSlot()
				[
					WorkMode->GenerateWorkModeInvokerWidget()
				];
		}
	}
	return WorkModeSelector;
}

void FAutomatedToolWorkFlow::SetCurrentWorkMode(FName InWorkModeName)
{
	//InWorkModeName == NAME_None?
	if (InWorkModeName == NAME_None)
	{
		if (CurrentWorkMode.IsValid())
		{
			CurrentWorkMode->DeactivateWorkMode();
			CurrentWorkMode = nullptr;
		}
		return;
	}
	else
	{
		if (CurrentWorkMode.IsValid() && CurrentWorkMode->GetRealName() == InWorkModeName)
		{
			return;
		}

		TSharedPtr<FAutomatedToolWorkMode> WillActivateWorkMode = nullptr;
		for (auto& WorkMode : WorkModes)
		{
			if (WorkMode->GetRealName() == InWorkModeName)
			{
				WillActivateWorkMode = WorkMode;
				break;
			}
		}

		if (CurrentWorkMode.IsValid())
		{
			CurrentWorkMode->DeactivateWorkMode();
		}

		CurrentWorkMode = WillActivateWorkMode;
		CurrentWorkMode->ActivateWorkMode();
	}
}

void FAutomatedToolWorkFlow::SetCurrentWorkMode(TSharedPtr<FAutomatedToolWorkMode> InWorkMode)
{
	if (CurrentWorkMode == InWorkMode)
	{
		return;
	}

	if (InWorkMode.IsValid())
	{
		TSharedPtr<FAutomatedToolWorkMode> PendingActivatedWorkMode = nullptr;
		for (auto& WorkMode : WorkModes)
		{
			if (InWorkMode == WorkMode)
			{
				PendingActivatedWorkMode = InWorkMode;
				break;
			}
		}

		if (PendingActivatedWorkMode.IsValid())
		{
			if (CurrentWorkMode.IsValid())
			{
				CurrentWorkMode->DeactivateWorkMode();
			}
			CurrentWorkMode = PendingActivatedWorkMode;
			CurrentWorkMode->ActivateWorkMode();
		}
	}
	else
	{
		if (CurrentWorkMode.IsValid())
		{
			CurrentWorkMode->DeactivateWorkMode();
			CurrentWorkMode = nullptr;
		}
	}
}

void FAutomatedToolWorkFlow::ActivateWorkFlow()
{
	GetEditorStateStorageMap().LoadSingleStateSection("AutomatedToolWorkFlow");
	if (SavedWorkFlowState.LastWorkMode.IsValid())
	{
		SetCurrentWorkMode(SavedWorkFlowState.LastWorkMode);
	}
	else
	{
		if(WorkModes.Num() > 0)
		{
			SetCurrentWorkMode(WorkModes[0]);
		}
	}
	
	EditorInstance.Pin()->NotifyActivateWorkFlow(StaticCastSharedPtr<FAutomatedToolWorkFlow>(this->AsShared().ToSharedPtr()));
}

void FAutomatedToolWorkFlow::DeactivateWorkFlow()
{
	GetEditorStateStorageMap().SaveSingleStateSection("AutomatedToolWorkFlow");
	SetCurrentWorkMode(nullptr);
	EditorInstance.Pin()->NotifyDeactivateWorkFlow(StaticCastSharedPtr<FAutomatedToolWorkFlow>(this->AsShared().ToSharedPtr()));
}

void FAutomatedToolWorkFlow::OnSaveEditorState(TSharedRef<FJsonObject> InJsonObject)
{
	InJsonObject->SetStringField("LastWorkMode", CurrentWorkMode.IsValid() ? CurrentWorkMode->GetRealName().ToString() : FString());
}

void FAutomatedToolWorkFlow::OnLoadEditorState(TSharedRef<FJsonObject> InJsonObject)
{
	FString CurrentWorkModeName;
	SavedWorkFlowState.Clear();
	if (InJsonObject->TryGetStringField("LastWorkMode", CurrentWorkModeName))
	{
		if (CurrentWorkModeName.IsEmpty())
		{
			return;
		}
		else
		{
			for (auto& WorkMode : WorkModes)
			{
				if (WorkMode->GetRealName().ToString().Equals(CurrentWorkModeName, ESearchCase::IgnoreCase))
				{
					SavedWorkFlowState.LastWorkMode = WorkMode;
					break;
				}
			}
		}
	}
}

FName FAutomatedToolWorkFlow::GetDefaultName() const
{
	return FName(FAutomatedToolViewCommonMethod::GetNameWithSerialNumber<FAutomatedToolWorkMode>(TEXT("WorkFlow")));
}

void FAutomatedToolWorkFlow::RegisterMenuContextObject(FToolMenuContext& InMenuContext)
{
	UAutomatedToolWorkFlowContext* WorkFlowContext = NewObject<UAutomatedToolWorkFlowContext>();
	WorkFlowContext->WorkFlowInstance = StaticCastSharedRef<FAutomatedToolWorkFlow>(this->AsShared());
	InMenuContext.AddObject(WorkFlowContext);
	if(CurrentWorkMode.IsValid())
	{
		CurrentWorkMode->RegisterMenuContextObject(InMenuContext);
	}
}

void FAutomatedToolWorkFlow::RegisterCommand()
{

}

void FAutomatedToolWorkFlow::BindCommand()
{

}

void FAutomatedToolWorkFlow::RegisterEditorStateSection()
{
	Super::RegisterEditorStateSection();

	//可以顶掉两个代理，选择是否记录父类的状态
	GetEditorStateStorageMap().RegisterStateSectionUsage(
		"AutomatedToolWorkFlow",
		FOnSerializeState::CreateSP(this, &FAutomatedToolWorkFlow::OnSaveEditorState),
		FOnDeserializeState::CreateSP(this, &FAutomatedToolWorkFlow::OnLoadEditorState)
	);
}

void FAutomatedToolWorkFlow::AddNewWorkMode(TSharedPtr<FAutomatedToolWorkMode> InNewWorkMode)
{
	//new FAutomatedToolWorkMode
	//
	if (InNewWorkMode.IsValid())
	{
		if (!InNewWorkMode->IsInitialized())
		{
			InNewWorkMode->Initialize();
		}
		WorkModes.AddUnique(InNewWorkMode);
	}
}


#undef LOCTEXT_NAMESPACE


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT