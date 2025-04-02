#include "Widget/SAutomatedToolViewMainFrame.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Widgets/Layout/SWidgetSwitcher.h"
#include "Widgets/Input/SComboBox.h"
#include "Widgets/SOverlay.h"
#include "Widgets/Input/SSearchBox.h"
#include "Widgets/Input/SButton.h"

#define LOCTEXT_NAMESPACE "SAutomatedToolViewMainFrame"

SAutomatedToolViewMainFrame::SAutomatedToolViewMainFrame()
{
}

void SAutomatedToolViewMainFrame::Construct(const FArguments& InArgs)
{
	RefreshText();


	//层级1--模式加ToolBar
	TSharedRef<SHorizontalBox> Level_1 = 
		SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		.AutoWidth()
		[	//模式选择
			SAssignNew(ModeSelector, SComboBox<TSharedPtr<FString>>)
			.OptionsSource(&Modes)
			.OnGenerateWidget(this, &SAutomatedToolViewMainFrame::MakeComboBoxItemWidget)
			.OnSelectionChanged(this, &SAutomatedToolViewMainFrame::OnSelectionChanged)
			.OnComboBoxOpening(this, &SAutomatedToolViewMainFrame::OnModeMenuOpening)
			[
				SNew(STextBlock)
				.Text(this, &SAutomatedToolViewMainFrame::GetSelectedModeText)
			]
		]
		+ SHorizontalBox::Slot()
		.Padding(10.f, 0.f, 0.f, 0.f)
		.FillWidth(1.f)
		[	//根据模式，切换对应toolbar
			SAssignNew(ToolBarSwitcher, SWidgetSwitcher)
		];
	

	//层级2--搜索
	TSharedRef<SHorizontalBox> Level_2 = 
		SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		[
			SNew(SSearchBox)
		]
		+ SHorizontalBox::Slot()
		.Padding(10.f, 0.f, 0.f, 0.f)
		.AutoWidth()
		[
			SNew(SButton)
			.Text(LOCTEXT("Add", "xxx"))
			.OnClicked(FOnClicked::CreateSP(this, &SAutomatedToolViewMainFrame::OnSearch))
		];


	//层级3--编辑器
	TSharedRef<SBorder> Level_3 =
		SNew(SBorder)
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		[
			SAssignNew(EditorSwitcher, SWidgetSwitcher)
		];

	this->ChildSlot
	[
		SNew(SOverlay)//可叠加
		+ SOverlay::Slot()
		.HAlign(EHorizontalAlignment::HAlign_Fill)
		.VAlign(EVerticalAlignment::VAlign_Fill)
		[
			SNew(SBorder)//定制背景
			[
				SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				.AutoHeight()
				[	//层级1--模式加ToolBar
					Level_1
				]
				+ SVerticalBox::Slot()
				.HAlign(HAlign_Fill)
				.AutoHeight()
				.Padding(1.f)
				[	//层级2--搜索
					Level_2				
				]
				+ SVerticalBox::Slot()
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				.Padding(5.f)
				[	//层级3
					Level_3
				]
			]
			
		]
		+ SOverlay::Slot()
		.HAlign(EHorizontalAlignment::HAlign_Right)
		.VAlign(EVerticalAlignment::VAlign_Bottom)
		.Padding(15.f)
		[
			SAssignNew(NotificationList, SNotificationList)
			.Visibility(EVisibility::SelfHitTestInvisible)
		]
	];
}

FReply SAutomatedToolViewMainFrame::OnSearch() const
{
	return FReply::Handled();
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
	if (InItem.IsValid())
	{	//注意
		if (InType == ESelectInfo::OnMouseClick)
		{
			SetCurrentMode(InItem);
		}
	}
}

//每帧Tick
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

void SAutomatedToolViewMainFrame::OnModeMenuOpening()
{
	//RefreshText();
}

void SAutomatedToolViewMainFrame::RefreshText()
{
	Modes.Reset();
	TArray<FText> TempModes;
	TempModes.Add(LOCTEXT("MainFrame", "ModeA"));
	TempModes.Add(LOCTEXT("MainFrame", "ModeB"));

	for (auto& Temp : TempModes)
	{
		Modes.Add(MakeShareable(new FString(Temp.ToString())));
	}

	if (!Modes.Find(CurrentMode))
	{
		Modes.Add(CurrentMode);
	}
}

void SAutomatedToolViewMainFrame::SetCurrentMode(TSharedPtr<FString> InStr)
{
	//注意
	CurrentMode = InStr;
}

#undef LOCTEXT_NAMESPACE
