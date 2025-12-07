#include "Widget/SAutomatedToolViewMainFrame.h"
#include "SimpleAutomatedToolView.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Widgets/Layout/SWidgetSwitcher.h"
#include "Widgets/Input/SComboBox.h"
#include "Widgets/SOverlay.h"
#include "Widgets/Input/SSearchBox.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Layout/SWrapBox.h"
#include "SimpleAutomatedToolViewType.h"
#include "SimpleAutomatedToolView.h"
#include "Framework/Docking/LayoutService.h"
#include "Serialization/JsonReader.h"

#define LOCTEXT_NAMESPACE "SAutomatedToolViewMainFrame"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

TSharedPtr<FString> SAutomatedToolViewMainFrame::InvalidMode = MakeShareable(new FString(TEXT("None")));

SAutomatedToolViewMainFrame::SAutomatedToolViewMainFrame() : 
	WorkModeInstanceRef(FSimpleAutomatedToolViewWorkMode::Get()), CurrentModeIndex(INDEX_NONE)
{
}

void SAutomatedToolViewMainFrame::Construct(const FArguments& InArgs, TSharedRef<SDockTab> InOwnerTab, TSharedRef<SWindow> Window)
{
	OwnerTab = InOwnerTab;
	OwnerWindow = Window;
	
	//Data
	Initialize();
	//Widget
	ConstructChild();	
	RefreshWorkMode();
	
	int32 LoadedCurrentModeIndex = LoadLayoutState();

	check(Modes.IsValidIndex(LoadedCurrentModeIndex));
	OnSelectionChanged(Modes[LoadedCurrentModeIndex], ESelectInfo::Direct);
}

void SAutomatedToolViewMainFrame::ConstructChild()
{
	//层级1--模式加ToolBar
	TSharedRef<SBorder> Level_1 = 
	SNew(SBorder)
	[
		SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		.AutoWidth()
		[
			SNew(SBox)
			.MinDesiredWidth(100)
			.MaxDesiredWidth(150)
			.HeightOverride(25)
			[
				//模式选择
				SAssignNew(ModeSelector, SComboBox<TSharedPtr<FString>>)
				.OptionsSource(&Modes)
				.OnGenerateWidget(this, &SAutomatedToolViewMainFrame::MakeComboBoxItemWidget)//每个模式如何生成
				.OnSelectionChanged(this, &SAutomatedToolViewMainFrame::OnSelectionChanged)
				[
					SNew(STextBlock)
					.Text(this, &SAutomatedToolViewMainFrame::GetSelectedModeText)//当前模式如何生成
				]
			]
		]
		+ SHorizontalBox::Slot()
		.Padding(10.f, 0.f, 0.f, 0.f)
		.FillWidth(1.f)
		[
			SAssignNew(WrapBox, SWrapBox)
				.UseAllottedWidth(true)
				.InnerSlotPadding(FVector2d(4.f, 4.f))
		]
	];

	//层级2--编辑器
	TSharedRef<SBorder> Level_2 =
		SNew(SBorder)
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		[
			SAssignNew(WorkModeSwitcher, SWidgetSwitcher)
		];



	this->ChildSlot
		[
			SNew(SOverlay)//可叠加
				+ SOverlay::Slot()
				.HAlign(EHorizontalAlignment::HAlign_Fill)
				.VAlign(EVerticalAlignment::VAlign_Fill)
				[
					SNew(SBorder)
						[
							SNew(SVerticalBox)
								+ SVerticalBox::Slot()
								.AutoHeight()
								[	//层级1--模式加ToolBar
									Level_1
								]
							+ SVerticalBox::Slot()
								.HAlign(HAlign_Fill)
								.VAlign(VAlign_Fill)
								.Padding(5.f)
								[	//层级2--编辑器
									Level_2
								]
						]

				]
				+ SOverlay::Slot()
				.HAlign(EHorizontalAlignment::HAlign_Right)
				.VAlign(EVerticalAlignment::VAlign_Bottom)
				.Padding(10.f)
				[
					SAssignNew(NotificationList, SNotificationList)
					.Visibility(EVisibility::SelfHitTestInvisible)
				]
		];
}

void SAutomatedToolViewMainFrame::Initialize()
{
	FGlobalTabmanager::Get()->SetOnPersistLayout(FTabManager::FOnPersistLayout::CreateSP(this, &SAutomatedToolViewMainFrame::SaveLayoutState));

	//初始化配置的模式及对应的Pages信息
	SimpleAutomatedToolViewTest::InitializeWorkMode(WorkModeInstanceRef);
	DelegateHandle = WorkModeInstanceRef.GetOnWorkModeListChanged().Add(FOnWorkModeListChanged::FDelegate::CreateSP(this, 
		&SAutomatedToolViewMainFrame::OnWorkModeListChanged));
	
	check(OwnerTab.IsValid());
	WorkModeInstanceRef.CreateTabManagers(OwnerTab.Pin().ToSharedRef(), 
		FTabManager::FOnPersistLayout::CreateSP(this, &SAutomatedToolViewMainFrame::SaveLayoutState));
	WorkModeInstanceRef.RegisterTabSpawner();
}

void SAutomatedToolViewMainFrame::SaveLayoutState(const TSharedRef<FTabManager::FLayout>& InLayout)
{
	if (!InLayout->GetPrimaryArea().IsValid())
	{
		return;
	}

	if (InLayout->GetLayoutName() == FSimpleAutomatedToolViewModule::MainLayoutName)
	{
		//GlobalTabManager
		ensure(CheckConsistency(true));
		FString JsonContents;
		TSharedRef<FJsonObject> JsonObject = MakeShared<FJsonObject>();
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonContents);

		{
			JsonObject->SetStringField(TEXT("CurrentWorkMode"), *CurrentMode);

			TSharedRef<FJsonObject> WorkModeCurrentStateJsonObject = MakeShared<FJsonObject>();

			int32 WorkModeNum = WorkModeSwitcher->GetNumWidgets();
			for (int32 I = 0; I < WorkModeNum; I++)
			{
				//WorkMode的一致性检测				
				TSharedPtr<SWidgetSwitcher> WorkModeWidgetSwitcher = WorkPageSwitcher[I];
				FString WorkPageName = WorkModeInstanceRef.FindPageButtonInfo(I, WorkModeWidgetSwitcher->GetActiveWidgetIndex()).Name.ToString();
				WorkModeCurrentStateJsonObject->SetStringField(*Modes[I], WorkPageName);
			}

			JsonObject->SetObjectField(TEXT("WorkModeCurrentState"), WorkModeCurrentStateJsonObject);
		}

		if (FJsonSerializer::Serialize(JsonObject, Writer))
		{
			FLayoutSaveRestore::SaveSectionToConfig(FSimpleAutomatedToolViewModule::EditorLayoutJson, TEXT("CurrentState"), FText::FromString(JsonContents));
		}
	}

	FLayoutSaveRestore::SaveToConfig(FSimpleAutomatedToolViewModule::EditorLayoutJson, InLayout);
}

int32 SAutomatedToolViewMainFrame::LoadLayoutState()
{
	ensure(CheckConsistency(false));
	FString JsonContents = FLayoutSaveRestore::LoadSectionFromConfig(FSimpleAutomatedToolViewModule::EditorLayoutJson, TEXT("CurrentState")).ToString();
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonContents);
	TSharedPtr<FJsonObject> JsonObject = MakeShared<FJsonObject>();
	int32 CurrentWorkModeIndex = 0;
	
	bool IsSuccessfullyDeserizlized = FJsonSerializer::Deserialize(Reader, JsonObject);
	if (IsSuccessfullyDeserizlized)
	{
		int32 WorkModeNum = WorkPageSwitcher.Num();
		const TSharedPtr<FJsonObject>& WorkModeCurrentState = JsonObject->GetObjectField(TEXT("WorkModeCurrentState"));
		for (int32 I = 0; I < WorkModeNum; I++)
		{
			FString ThisModeCurrentState = WorkModeCurrentState->GetStringField(*Modes[I]);
			int32 ThisModeCurrentStateIndex = WorkModeInstanceRef.FindPageButtonIndex(I, FText::FromString(ThisModeCurrentState));
			
			if (ThisModeCurrentStateIndex != INDEX_NONE)
			{
				WorkPageSwitcher[I]->SetActiveWidgetIndex(ThisModeCurrentStateIndex);
			}			
		}

		FString CurrentWorkModeName = JsonObject->GetStringField(TEXT("CurrentWorkMode"));
		CurrentWorkModeIndex = WorkModeInstanceRef.FindWorkModeIndex(FText::FromString(CurrentWorkModeName));
	}

	if (!IsSuccessfullyDeserizlized)
	{
		FGlobalTabmanager::Get()->RequestSavePersistentLayout();
	}

	return CurrentWorkModeIndex;
}

TSharedRef<SWidget> SAutomatedToolViewMainFrame::MakeComboBoxItemWidget(TSharedPtr<FString> InItem)
{	//可以叠加背景
	if (InItem.IsValid())
	{
		return SNew(STextBlock).Text(FText::FromString(*InItem));
	}
	else
	{
		return SNew(STextBlock).Text(LOCTEXT("Invalid String", "Invalid String"));
	}

}

void SAutomatedToolViewMainFrame::OnSelectionChanged(TSharedPtr<FString> InItem, ESelectInfo::Type InType)
{
	if (InItem.IsValid() && Modes.Contains(InItem))
	{	//注意
		if (InType == ESelectInfo::OnMouseClick || InType == ESelectInfo::Direct)
		{	
			SetCurrentMode(InItem);
			RefreshCurrentModePageButtonBar();		
		}
	}
}

FText SAutomatedToolViewMainFrame::GetSelectedModeText() const
{
	if (CurrentMode.IsValid())
	{
		return FText::FromString(*CurrentMode);
	}
	else
	{
		//可以尝试反序列化读取上一次配置
		return LOCTEXT("Empty Mode", "Empty Mode");
	}

}

FReply SAutomatedToolViewMainFrame::OnClicked(int32 InWidgetIndex)
{	
	SetCurrentPage(InWidgetIndex);
	return FReply::Handled();
}

void SAutomatedToolViewMainFrame::RefreshCurrentModePageButtonBar()
{
	WrapBox->ClearChildren();
	Buttons.Empty();
	TArray<FPageButtonInfo> ButtonInfos = WorkModeInstanceRef.GetPageButtonInfosByModeIndex(CurrentModeIndex);

	for (int32 I = 0; I < ButtonInfos.Num(); ++I)
	{
		const FPageButtonInfo& ButtonInfo = ButtonInfos[I];
		TSharedPtr<SButton>& Button = Buttons.AddDefaulted_GetRef();
		
		WrapBox->AddSlot()
			.HAlign(HAlign_Center)
			[
				SAssignNew(Button, SButton)
					.Text(ButtonInfo.Name)
					.HAlign(HAlign_Center)
					.OnClicked(this, &SAutomatedToolViewMainFrame::OnClicked, I)
			];
	}
}

void SAutomatedToolViewMainFrame::RefreshWorkMode()
{
	//先清理
	Modes.Empty();
	for (auto& WorkPage : WorkPageSwitcher)
	{
		WorkModeSwitcher->RemoveSlot(WorkPage.ToSharedRef());
	}
	WorkPageSwitcher.Empty();

	//刷新，按顺序添加
	TArray<FText> WorkModeNames = WorkModeInstanceRef.GatherWorkMode();

	for (auto& ModeName : WorkModeNames)
	{
		Modes.Add(MakeShareable(new FString(ModeName.ToString())));
		
		TSharedPtr<SWidgetSwitcher>& ThisSwitcher = WorkPageSwitcher.AddDefaulted_GetRef();
		WorkModeSwitcher->AddSlot()[SAssignNew(ThisSwitcher, SWidgetSwitcher)];

		int32 PageButtonNum = WorkModeInstanceRef.GetPageButtonInfoNum(ModeName);

		for (int32 I = 0; I < PageButtonNum; I++)
		{
			ThisSwitcher->AddSlot()
				[
					SNew(SBorder)	//通过替换动态生成
						[
							SNullWidget::NullWidget
						]
				];
		}
	}

	CurrentModeIndex = WorkModeSwitcher->GetActiveWidgetIndex();
	CurrentMode = CurrentModeIndex == INDEX_NONE ? InvalidMode : Modes[CurrentModeIndex];
}

void SAutomatedToolViewMainFrame::SetCurrentMode(TSharedPtr<FString> InStr)
{
	int32 Index = Modes.Find(InStr);

	if (Index != INDEX_NONE)
	{
		CurrentMode = InStr;
		CurrentModeIndex = Modes.Find(CurrentMode);
		WorkModeSwitcher->SetActiveWidgetIndex(CurrentModeIndex);
		SetCurrentPage(WorkPageSwitcher[CurrentModeIndex]->GetActiveWidgetIndex());
	}
}

void SAutomatedToolViewMainFrame::SetCurrentMode(int32 Index)
{
	if (Modes.IsValidIndex(Index))
	{
		CurrentModeIndex = Index;
		CurrentMode = Modes[Index];
		WorkModeSwitcher->SetActiveWidgetIndex(CurrentModeIndex);
		SetCurrentPage(WorkPageSwitcher[CurrentModeIndex]->GetActiveWidgetIndex());
	}	
}

void SAutomatedToolViewMainFrame::SetCurrentPage(int32 Index)
{
	CurrentPage = WorkModeInstanceRef.FindPageButtonInfo(CurrentModeIndex, Index).Name;
	CurrentPageIndex = Index;
	WorkPageSwitcher[CurrentModeIndex]->SetActiveWidgetIndex(CurrentPageIndex);
	ReplaceNullWidget(CurrentModeIndex, WorkPageSwitcher[CurrentModeIndex]->GetActiveWidgetIndex());
}

void SAutomatedToolViewMainFrame::ReplaceNullWidget(int32 WorkModeIndex, int32 PageButtonIndex)
{
	//检查
	if (!WorkPageSwitcher.IsValidIndex(WorkModeIndex)
		|| !(PageButtonIndex >= 0 && PageButtonIndex < WorkPageSwitcher[WorkModeIndex]->GetNumWidgets())
		)
	{
		return;
	}

	TSharedPtr<SBorder> CurrentPageWidget = StaticCastSharedPtr<SBorder>(WorkPageSwitcher[WorkModeIndex]->GetWidget(PageButtonIndex));

	if (CurrentPageWidget->GetContent() == SNullWidget::NullWidget)
	{
		FText WorkModeName = WorkModeInstanceRef.FindWorkMode(WorkModeIndex);
		check(!WorkModeName.IsEmpty());
		FPageButtonInfo PageButtonInfo = WorkModeInstanceRef.FindPageButtonInfo(WorkModeName, PageButtonIndex);

		//查找默认布局
		TSharedPtr<FTabManager::FLayout> DefaultLayout = WorkModeInstanceRef.FindDefualtLayout(PageButtonInfo.LayoutName);

		//从配置中读出布局
		TSharedRef<FTabManager::FLayout> CurrentLayout = FLayoutSaveRestore::LoadFromConfig(FSimpleAutomatedToolViewModule::EditorLayoutJson, DefaultLayout.ToSharedRef());
		
		TSharedPtr<FTabManager> MyTabManager = WorkModeInstanceRef.GetTabManager(WorkModeIndex, PageButtonIndex);
		
		if (CurrentLayout == DefaultLayout)
		{//读取失败, 将保存
			
			//注: 保存布局应当通过TabManager保存，否则PrimaryAreaIndex会为-1
			MyTabManager->RequestSavePersistentLayout();
		}
		TSharedPtr<SWindow> Window = MyTabManager->GetOwnerTab()->GetParentWindow(); 
		if (!Window.IsValid())
		{
			Window = OwnerWindow.Pin();
		}

		TSharedPtr<SWidget> PageWidget = MyTabManager->RestoreFrom(CurrentLayout, Window, false, EOutputCanBeNullptr::Never);
		if(PageWidget.IsValid())
		{
			CurrentPageWidget->SetContent(PageWidget.ToSharedRef());
		}
		WorkModeInstanceRef.InvokeLayoutTab(MyTabManager.ToSharedRef(), WorkModeName, PageButtonInfo.Name);
	}
}

void SAutomatedToolViewMainFrame::OnWorkModeListChanged(EWorkModeListActionType ActionType, const FText& WorkModeName, 
	int32 WorkModeIndex, const FText& PageButtonName, int32 PageButtonIndex)
{
	RefreshWorkMode();
}

bool SAutomatedToolViewMainFrame::CheckConsistency(bool bCheckCurrentState) const
{
	//WorkModeSwitcher->GetNumWidgets() -- Modes.Num() -- WorkModeInstanceRef.GetWorkModeNum() -- WorkPageSwitcher.Num()
	int32 WorkModeWidgetNum = WorkModeSwitcher->GetNumWidgets();
	if (WorkModeWidgetNum != WorkModeInstanceRef.GetWorkModeNum() ||
		WorkModeWidgetNum != Modes.Num() ||
		WorkModeWidgetNum != WorkPageSwitcher.Num())
	{
		return false;
	}

	//WorkModeSwitcher->GetWidget(I) -- WorkPageSwitcher[I]
	//*Modes[I] != WorkModeInstanceRef.FindWorkMode(I).ToString()
	for (int32 I = 0; I < WorkModeWidgetNum; I++)
	{
		TSharedPtr<SWidgetSwitcher> WorkPageWidgetSwitcher = StaticCastSharedPtr<SWidgetSwitcher>(WorkModeSwitcher->GetWidget(I));
		if (!WorkPageWidgetSwitcher.IsValid() || WorkPageWidgetSwitcher != WorkPageSwitcher[I]
			|| *Modes[I] != WorkModeInstanceRef.FindWorkMode(I).ToString())
		{
			return false;
		}
	}

	return bCheckCurrentState ? CheckCurrentStateConsistency() : true;
}

bool SAutomatedToolViewMainFrame::CheckCurrentStateConsistency() const
{
	if (!CurrentMode.IsValid() || !Modes.IsValidIndex(CurrentModeIndex)
		|| WorkModeSwitcher->GetActiveWidgetIndex() != CurrentModeIndex
		//|| ModeSelector->GetSelectedItem() != Modes[CurrentModeIndex]
		//|| ModeSelector->GetSelectedItem() != CurrentMode
		|| WorkModeInstanceRef.FindWorkMode(CurrentModeIndex).ToString() != *CurrentMode)
	{
		return false;
	}
	//ModeSelector->SetSelectedItem();
	if (!CurrentPage.IsEmpty() || Buttons.IsValidIndex(CurrentPageIndex)	
		|| CurrentPage.ToString() == WorkModeInstanceRef.FindPageButtonInfo(CurrentModeIndex, CurrentPageIndex).Name.ToString()
		|| Buttons.Num() == WorkModeInstanceRef.GetPageButtonInfoNum(CurrentModeIndex))
	{
		TSharedPtr<SWidgetSwitcher> WorkPageWidgetSwitcher = StaticCastSharedPtr<SWidgetSwitcher>(WorkModeSwitcher->GetWidget(CurrentModeIndex));
		if (!WorkPageWidgetSwitcher.IsValid() || WorkPageWidgetSwitcher != WorkPageSwitcher[CurrentModeIndex]
			|| WorkPageWidgetSwitcher->GetNumWidgets() != Buttons.Num())
		{
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

#undef LOCTEXT_NAMESPACE
