#include "Widget/SAutomatedToolViewMainFrame.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Widgets/Layout/SWidgetSwitcher.h"
#include "Widgets/Input/SComboBox.h"
#include "Widgets/SOverlay.h"
#include "Widgets/Input/SSearchBox.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Layout/SWrapBox.h"
#include "SimpleAutomatedToolViewType.h"
#include "SimpleAutomatedToolViewWidgetFactory.h"

#define LOCTEXT_NAMESPACE "SAutomatedToolViewMainFrame"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

SAutomatedToolViewMainFrame::SAutomatedToolViewMainFrame()
{
}

void SAutomatedToolViewMainFrame::Construct(const FArguments& InArgs)
{
	ConstructChild();

	Initialize();
	
	RefreshModePageButtonBar();
}

void SAutomatedToolViewMainFrame::ConstructChild()
{
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
			//SAssignNew(ToolBarSwitcher, SWidgetSwitcher)
			SAssignNew(WrapBox, SWrapBox)
			.UseAllottedWidth(true)
			.InnerSlotPadding(FVector2d(4.f, 4.f))
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

void SAutomatedToolViewMainFrame::Initialize()
{
	//初始化配置的模式及对应的Pages信息
	SimpleAutomatedToolViewType::InitViewButtonInfo();

	//收集所有的模式名
	RefreshText();

	if(Modes.Num() > 0)
	{
		//设置初始状态，可通过Load配置来读取
		SetCurrentMode(Modes[0]);
	}

	//设置SWidgetSwitcher子元素
	for (int32 i = 0; i < (int32)EToolViewModePages::MP_Max; i++)
	{
		if (TSharedPtr<SWidget> Widget = SimpleAutomatedToolViewWidgetFactory::CreateWidget((EToolViewModePages)i))
		{
			EditorSwitcher->AddSlot()
				[
					Widget.ToSharedRef()
				];
		}
	}
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
			RefreshModePageButtonBar();
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

FReply SAutomatedToolViewMainFrame::OnClicked(int32 InWidgetIndex, enum class EToolViewModePages InPageType)
{
	CallButtonAction(
		[&](TSharedPtr<SButton> InButton) ->  bool
		{
			if (InButton)
			{
				return true;
			}
			return false;
		}
	);
	
	if (Buttons.Num() > InWidgetIndex && InWidgetIndex >= 0)
	{
		EditorSwitcher->SetActiveWidgetIndex((int32)InPageType);
	}

	return FReply::Handled();
}

void SAutomatedToolViewMainFrame::CallButtonAction(TFunction<bool(TSharedPtr<SButton>)> InMethod)
{
}

void SAutomatedToolViewMainFrame::RefreshModePageButtonBar()
{
	WrapBox->ClearChildren();
	Buttons.Empty();
	if (auto ButtonInfos = SimpleAutomatedToolViewType::FindButtonInfos(FText::FromString(*CurrentMode)))
	{
		for (auto& Temp : *ButtonInfos)
		{
			TSharedPtr<SButton>& Button = Buttons.AddDefaulted_GetRef();

			WrapBox->AddSlot()
			[
				SAssignNew(Button, SButton)
				.Text(Temp.Name)
				.HAlign(HAlign_Center)
				.OnClicked(this, &SAutomatedToolViewMainFrame::OnClicked, Buttons.Num() - 1, Temp.PageType)
			];
		}
	}

	OnClicked(0, EToolViewModePages::MP_Automated_Editor);
}

void SAutomatedToolViewMainFrame::RefreshText()
{
	Modes.Reset();

	TArray<FText> TempModes;
	SimpleAutomatedToolViewType::GatherModeName(TempModes);

	for (auto& Temp : TempModes)
	{
		Modes.Add(MakeShareable(new FString(Temp.ToString())));
	}
}

void SAutomatedToolViewMainFrame::SetCurrentMode(TSharedPtr<FString> InStr)
{
	//注意
	CurrentMode = InStr;
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

#undef LOCTEXT_NAMESPACE
