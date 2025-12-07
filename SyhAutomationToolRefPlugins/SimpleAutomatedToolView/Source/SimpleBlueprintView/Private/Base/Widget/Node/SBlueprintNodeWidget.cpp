#include "Base/Widget/Node/SBlueprintNodeWidget.h"
#include "Rendering/RenderingCommon.h"
#include "Rendering/DrawElementTypes.h"
#include "Base/Widget/Panel/SBlueprintEntryPanelWidget.h"
#include "Base/Entry/BlueprintNodeEntry.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Text/SInlineEditableTextBlock.h"
#include "SimpleBlueprintViewStyle.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


FSlateFontInfo SBlueprintNodeWidget::NodeDisplayNameFontInfo;
FSlateFontInfo SBlueprintNodeWidget::NodeNameFontInfo;



SBlueprintNodeWidget::SBlueprintNodeWidget() : 
	Super(),
	IBlueprintWidgetBase(),
	bIsSelected(false)
{
	NodeDisplayNameFontInfo = FCoreStyle::Get().GetFontStyle("Font.Large.Bold");
	NodeNameFontInfo = FCoreStyle::Get().GetFontStyle("NormalFontItalic");

	NodeDisplayNameFontInfo.Size = 16.f;
	NodeNameFontInfo.Size = 8.f;
}


SBlueprintNodeWidget::~SBlueprintNodeWidget()
{
}

bool SBlueprintNodeWidget::InitializeSelf()
{
	check(IsInitialized());
	NodeEntry = GetTypeSP<FBlueprintNodeEntry>(GetEntry());
	//NodeRealNameWidget->SetText(FText::FromString(NodeEntry->GetName()));
	return true;
}

bool SBlueprintNodeWidget::DeinitializeSelf()
{
	NodeEntry.Reset();
	return true;
}

void SBlueprintNodeWidget::Construct(const FArguments& InArgs)
{
	SetDisplayName(InArgs._DisplayName);

	ChildSlot
		[
			SNew(SBorder)
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				.BorderImage(FSimpleBlueprintViewStyle::Get().GetBrush("Graph.Node.Body"))
				.BorderBackgroundColor(FLinearColor(1.0f, 1.0f, 1.0f, 0.5f))
				.Padding(0.f)			
				[
					SNew(SOverlay)
						+ SOverlay::Slot()
						.HAlign(HAlign_Fill)
						.VAlign(VAlign_Fill)
						[
							SNew(SVerticalBox)
								+ SVerticalBox::Slot()	//标题行
								.HAlign(HAlign_Fill)
								.VAlign(VAlign_Top)
								.AutoHeight()
								[
									SNew(SOverlay)
										+ SOverlay::Slot()
										.HAlign(HAlign_Fill)
										.VAlign(VAlign_Fill)
										[
											SNew(SImage)
												.Image(FSimpleBlueprintViewStyle::Get().GetBrush("Graph.Node.TitleGloss"))
												.ColorAndOpacity_Raw(this, &SBlueprintNodeWidget::GetTitleGloss)
										]
										+ SOverlay::Slot()
										.HAlign(HAlign_Fill)
										.VAlign(VAlign_Fill)
										[
											SNew(SBorder)
												.BorderImage(FSimpleBlueprintViewStyle::Get().GetBrush("Graph.Node.ColorSpill"))
												.BorderBackgroundColor_Raw(this, &SBlueprintNodeWidget::GetTitleGloss)
										]
										+ SOverlay::Slot()
										.HAlign(HAlign_Fill)
										.VAlign(VAlign_Fill)
										[
											SNew(SBorder)
												.BorderImage(FSimpleBlueprintViewStyle::Get().GetBrush("Graph.Node.TitleHighlight"))
												.BorderBackgroundColor(FLinearColor(1.0f, 1.0f, 1.0f, 0.7f))
										]
										+ SOverlay::Slot()
										.HAlign(HAlign_Fill)
										.VAlign(VAlign_Fill)
										[
											SNew(SVerticalBox)
												+ SVerticalBox::Slot()
												.Padding(4.f, 2.f)
												.HAlign(HAlign_Center)
												.AutoHeight()
												[
													SNew(SInlineEditableTextBlock)
														.Justification(ETextJustify::Center)
														.Text_Raw(this, &IBlueprintWidgetBase::GetDisplayNameText)
														.OnTextCommitted_Raw(this, &IBlueprintWidgetBase::SetDisplayNameText)
														.Font(NodeDisplayNameFontInfo)
														.ColorAndOpacity(FLinearColor::White)
												]
												+ SVerticalBox::Slot()
												.Padding(4.f, 0.f)
												.HAlign(HAlign_Center)
												.AutoHeight()
												[
													SNew(STextBlock)
													.Font(NodeNameFontInfo)
													.ColorAndOpacity(FLinearColor::White)
													.Text_Raw(this, &IBlueprintWidgetBase::GetRealNameText)
												]
										]									
								]

								+ SVerticalBox::Slot()	//Pin布局行
								.HAlign(HAlign_Fill)
								.VAlign(VAlign_Top)
								.AutoHeight()
								[
									SNew(SOverlay)
										+ SOverlay::Slot()
										.HAlign(HAlign_Fill)
										.VAlign(VAlign_Fill)
										[
											SNew(SHorizontalBox)
												+ SHorizontalBox::Slot()
												.HAlign(HAlign_Left)
												.Padding(1.f)
												[
													SAssignNew(InputPins, SVerticalBox)
												]
												+ SHorizontalBox::Slot()
												.HAlign(HAlign_Right)
												.Padding(1.f)
												[
													SAssignNew(OutputPins, SVerticalBox)
												]
										]
								]
						]
				]
		];
}

void SBlueprintNodeWidget::OnThisNodeSelected()
{
	this->SetThisNodeSelected();
}

void SBlueprintNodeWidget::OnThisNodeNotSelected()
{
	this->CancelThisNodeSelected();
}

TSharedPtr<FBlueprintNodeEntry> SBlueprintNodeWidget::GetNodeEntry()
{
	check(NodeEntry.IsValid());
	return NodeEntry;
}

const TSharedPtr<FBlueprintNodeEntry> SBlueprintNodeWidget::GetNodeEntry() const
{
	check(NodeEntry.IsValid());
	return NodeEntry;
}

void SBlueprintNodeWidget::SetOffsetPosition(const FVector2D& InPos) noexcept
{
	GetNodeEntry()->SetOffsetPosition(InPos);
}

FVector2D SBlueprintNodeWidget::GetOffsetPosition() const noexcept
{
	return GetNodeEntry()->GetOffsetPosition();
}

void SBlueprintNodeWidget::ArrangeChildPins(const FGeometry& AllottedGeometry, FArrangedChildren& ArrangedChildren) const
{
	if (!InputPins.IsValid())
	{
		return;
	}

	for (int32 I = 0; I < InputPins->NumSlots(); I++)
	{
		const TSharedRef<SWidget>& ChildPin = InputPins->GetChildren()->GetChildAt(I);
		const FGeometry& PinGeomertry = ChildPin->GetTickSpaceGeometry();
		FVector2D Offset = AllottedGeometry.AbsoluteToLocal(PinGeomertry.GetAbsolutePosition());

		//const float Scale = PinGeomertry.GetAccumulatedLayoutTransform().GetScale();
		//const FVector2f RenderSize = PinGeomertry.GetLocalSize() * Scale;
		//FArrangedWidget Widget2 = AllottedGeometry.MakeChild(ChildPin, RenderSize,
		//	FSlateLayoutTransform{ Scale, Offset });
		//FArrangedWidget Widget3 = AllottedGeometry.MakeChild(ChildPin, PinGeomertry.GetLocalSize(),
		//	FSlateLayoutTransform{ Scale, Offset });
		// 注：缩放情况MakeChild中已经处理
		FArrangedWidget ArrangedPin = AllottedGeometry.MakeChild(ChildPin, PinGeomertry.GetLocalSize(),
			FSlateLayoutTransform{ 1.f, Offset });
		ArrangedChildren.AddWidget(ArrangedPin);
	}
}

TSharedPtr<SWidget> SBlueprintNodeWidget::GetSWidget() noexcept
{
	return this->AsShared();
}

TSharedPtr<IBlueprintWidgetBase> SBlueprintNodeWidget::GetWidgetBase() noexcept
{
	return GetTypeSP<IBlueprintWidgetBase, SBlueprintNodeWidget>(this->AsShared());
}

int32 SBlueprintNodeWidget::FindChildWidget(TSharedPtr<IBlueprintWidgetBase> InChildWidget) const
{
	check(InputPins.IsValid() && OutputPins.IsValid());

	if (InChildWidget.IsValid() && InChildWidget->GetBlueprintWidgetType() == EBlueprintWidgetType::Pin)
	{
		TSharedPtr<SBlueprintPinWidget> PinWidget = GetTypeSP<SBlueprintPinWidget>(InChildWidget);
		if (EnumHasAnyFlags(PinWidget->GetBlueprintPinType(), EBlueprintPinType::Input))
		{
			return FindChildWidget(InputPins, InChildWidget);
		}
		else if(EnumHasAnyFlags(PinWidget->GetBlueprintPinType(), EBlueprintPinType::Output))
		{
			return FindChildWidget(OutputPins, InChildWidget);
		}
		else
		{
			UE_LOG(SimpleBlueprintViewLog, Error, TEXT("EBlueprintPinType can be incorrect."));
			return INDEX_NONE;
		}
	}
	return INDEX_NONE;
}

void SBlueprintNodeWidget::AddChildWidget(TSharedPtr<IBlueprintWidgetBase> InChildWidget)
{
	check(InputPins.IsValid() && OutputPins.IsValid());

	if (InChildWidget.IsValid() && InChildWidget->GetBlueprintWidgetType() == EBlueprintWidgetType::Pin)
	{
		TSharedRef<SBlueprintPinWidget> PinWidget = GetTypeSR<SBlueprintPinWidget>(InChildWidget->GetSWidget());
		if (EnumHasAnyFlags(PinWidget->GetBlueprintPinType(), EBlueprintPinType::Input))
		{
			AddChildWidget(InputPins, PinWidget);
		}
		else if (EnumHasAnyFlags(PinWidget->GetBlueprintPinType(), EBlueprintPinType::Output))
		{
			AddChildWidget(OutputPins, PinWidget);
		}
		else
		{
			UE_LOG(SimpleBlueprintViewLog, Error, TEXT("EBlueprintPinType can be incorrect."));
			return;
		}
	}
}

void SBlueprintNodeWidget::RemoveChildWidget(TSharedPtr<IBlueprintWidgetBase> InChildWidget)
{
	check(InputPins.IsValid() && OutputPins.IsValid());

	TSharedPtr<SBlueprintPinWidget> PinWidget = GetTypeSP<SBlueprintPinWidget>(InChildWidget);

	if (EnumHasAnyFlags(PinWidget->GetBlueprintPinType(), EBlueprintPinType::Input))
	{
		RemoveChildWidget(InputPins, PinWidget);
	}
	else if (EnumHasAnyFlags(PinWidget->GetBlueprintPinType(), EBlueprintPinType::Output))
	{
		RemoveChildWidget(OutputPins, PinWidget);
	}
	else
	{
		UE_LOG(SimpleBlueprintViewLog, Error, TEXT("EBlueprintPinType can be incorrect."));
	}

}

void SBlueprintNodeWidget::ClearChildrenWidget()
{
	if(InputPins.IsValid())
	{
		InputPins->ClearChildren();
	}

	if (OutputPins.IsValid())
	{
		OutputPins->ClearChildren();
	}
}

int32 SBlueprintNodeWidget::FindChildWidget(TSharedPtr<SVerticalBox> InVerticalBox, TSharedPtr<IBlueprintWidgetBase> InChildWidget) const
{
	if(InVerticalBox.IsValid())
	{
		FChildren& Children = *InVerticalBox->GetChildren();
		for (int32 I = 0; I < Children.Num(); I++)
		{
			if (Children.GetChildAt(I) == InChildWidget->GetSWidget())
			{
				return I;
			}
		}
	}
	return INDEX_NONE;
}

int32 SBlueprintNodeWidget::FindChildWidgetInsertIndex(TSharedPtr<SVerticalBox> InVerticalBox, EBlueprintPinType InPinType) const
{
	if (InVerticalBox.IsValid())
	{
		FChildren& Children = *InVerticalBox->GetChildren();

		if (EnumHasAnyFlags(InPinType, EBlueprintPinType::Exec))
		{
			for (int32 I = 0; I < Children.Num(); I++)
			{
				TSharedRef<SBlueprintPinWidget> TempPinWidget = GetTypeSR<SBlueprintPinWidget>(Children.GetChildAt(I));
				if (!EnumHasAnyFlags(TempPinWidget->GetBlueprintPinType(), EBlueprintPinType::Exec))
				{
					return I;
				}
			}
		}
	}

	return INDEX_NONE;
}

void SBlueprintNodeWidget::AddChildWidget(TSharedPtr<SVerticalBox> InVerticalBox, TSharedRef<SBlueprintPinWidget> InChildWidget)
{
	if(InVerticalBox.IsValid())
	{
		int32 Index = INDEX_NONE;
		if (EnumHasAnyFlags(InChildWidget->GetBlueprintPinType(), EBlueprintPinType::Exec))
		{
			Index = FindChildWidgetInsertIndex(InVerticalBox, EBlueprintPinType::Exec);
		}
		else if (EnumHasAnyFlags(InChildWidget->GetBlueprintPinType(), EBlueprintPinType::Param))
		{
			Index = FindChildWidgetInsertIndex(InVerticalBox, EBlueprintPinType::Param);
		}
		else
		{
			UE_LOG(SimpleBlueprintViewLog, Error, TEXT("EBlueprintPinType can be incorrect."));
			return;
		}

		InVerticalBox->InsertSlot(Index)
			.VAlign(VAlign_Top)
			.Padding(4.f)
			.AutoHeight()
			[
				InChildWidget
			];
	}
}

void SBlueprintNodeWidget::RemoveChildWidget(TSharedPtr<SVerticalBox> InVerticalBox, TSharedPtr<SBlueprintPinWidget> InChildWidget)
{
	if (InVerticalBox.IsValid())
	{
		InVerticalBox->RemoveSlot(InChildWidget.ToSharedRef());
	}
}

int32 SBlueprintNodeWidget::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry,
	const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, 
	const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	FVector2D LocalSize = AllottedGeometry.GetLocalSize();
	int32 ReturnLayerId = Super::OnPaint(Args, AllottedGeometry, MyCullingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled);

	if (bIsSelected)
	{
		static const FSlateBrush* BackgroundBrush = FSimpleBlueprintViewStyle::Get().GetBrush(TEXT("Graph.Node.DiffHighlight"));
		static const FVector2D ShadowSize = FSimpleBlueprintViewStyle::Get().GetVector(TEXT("Graph.Node.ShadowSize"));
		static const FLinearColor BackgroundColor = FLinearColor(0.6f, 0.6f, 0, 1.f);

		ReturnLayerId = ReturnLayerId + 1;

		FSlateDrawElement::MakeBox(
			OutDrawElements,
			ReturnLayerId,
			AllottedGeometry.ToInflatedPaintGeometry(ShadowSize),
			BackgroundBrush,
			ESlateDrawEffect::None,
			BackgroundColor
		);
	}

	return ReturnLayerId;
}

void SBlueprintNodeWidget::InvokeContextMenu()
{

	//唤醒菜单

}

FSlateColor SBlueprintNodeWidget::GetTitleGloss() const
{
	FLinearColor ResultColor = GetNodeEntry()->GetTitleGloss();
	return ResultColor;
}



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
