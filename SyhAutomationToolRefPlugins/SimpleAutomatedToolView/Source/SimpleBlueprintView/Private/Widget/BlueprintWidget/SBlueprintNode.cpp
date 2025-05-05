#include "Widget/BlueprintWidget/SBlueprintNode.h"
#include "Widget/WidgetCommonMethod.h"
#include "Widget/BlueprintWidget/SBlueprintPin.h"
#include "Rendering/RenderingCommon.h"
#include "Rendering/DrawElementTypes.h"
#include "Widget/BlueprintWidget/SBlueprintFramework.h"
#include "Styling/SlateBrush.h"


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

SBlueprintNode::SBlueprintNode() : Super(), bIsSelected(false)
{
	NodeName = TEXT("New Node");
	WidgetType = EBlueprintWidgetType::Node;
}


void SBlueprintNode::Construct(const FArguments& InArgs)
{
	PinsLayout = InArgs._PinsLayout;
	Outer = GetWidgetWP<SBlueprintFramework>(InArgs._Outer);

	HighLightBox = InArgs._HighLightBox;

	SetVisibility(EVisibility::Visible);
	
	MoveableWidget = SharedThis(this);

	TSharedPtr<SHorizontalBox> TopLine = 
		SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		.Padding(0.f)
		.FillWidth(1.f)
		.HAlign(HAlign_Left)
		[
			SNew(SSpacer)
			.Size(20.f)
		]
		+ SHorizontalBox::Slot()
		.Padding(0.f)
		.AutoWidth()
		.VAlign(VAlign_Fill)
		[
			SAssignNew(TopPins, SHorizontalBox)
			
		]
		+ SHorizontalBox::Slot()
		.Padding(0.f)
		.FillWidth(1.f)
		.HAlign(HAlign_Right)
		[
			SNew(SSpacer)
				.Size(20.f)
		];

	TSharedPtr<SHorizontalBox> BottomLine =
		SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		.Padding(0.f)
		.FillWidth(1.f)	//决定Slot分配剩余的空间, 如果使用Auto, 效果类似SizeToContent
						//想实现左中右均匀分配，则都需要使用Fill，且比例相同
						//想实现左右固定大小，而中间自适应，则左右使用Fill，中间使用Auto
		.HAlign(HAlign_Left)//如果不向左对齐且Slot提供的宽度大于content的宽度，则有可能跑到右边其他地方
		[
			SNew(SSpacer)
			//如果Slot尺寸更大：(SHorizontalBox大小固定)
			//	使用 HAlign_Fill SSpacer会忽略Size, 选择填充Slot
			//	使用 HAlign_Center SSpacer会居中, 选择填充Slot
			//如果SSpacer尺寸更大：(SHorizontalBox大小固定)
			//	对齐无用
			
			//如果Slot尺寸更大：(SHorizontalBox大小不固定，但有一个最小大小)
			//	使用 HAlign_Fill SSpacer会忽略Size, 选择填充Slot
			//	使用 HAlign_Center SSpacer会居中, 选择填充Slot
			//如果SSpacer尺寸更大：(SHorizontalBox大小不固定，但有一个最小大小)
			//	对齐无用，SSpacer会撑大SHorizontalBox

				.Size(20.f)
		]
		+ SHorizontalBox::Slot()
		.Padding(0.f)
		.AutoWidth()
		.HAlign(HAlign_Fill)//在尺寸小于Slot给予的尺寸的情况下，填充
		[
			SAssignNew(BottomPins, SHorizontalBox)

		]
	+ SHorizontalBox::Slot()
		.Padding(0.f)
		.FillWidth(1.f)
		.HAlign(HAlign_Right)
		[
			SNew(SSpacer)
				.Size(20.f)
		];

	
	TSharedPtr<SVerticalBox> PinsLayoutInNode = 
	SNew(SVerticalBox)
	+ SVerticalBox::Slot()
		//.VAlign(VAlign_Top)无用，因为AutoHeight且外部垂直高度不固定
		.HAlign(HAlign_Fill)//填充SVerticalBox插槽给予的大小
		.AutoHeight()
		[
			TopLine.ToSharedRef()
		]
	+ SVerticalBox::Slot()
		.HAlign(HAlign_Fill)
		//.VAlign(VAlign_Fill)无用，因为AutoHeight且外部垂直高度不固定
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.FillWidth(1.f)
			.HAlign(HAlign_Left)
			//.VAlign(VAlign_Fill)
				[
					SAssignNew(LeftPins, SVerticalBox)
				]
			+ SHorizontalBox::Slot()
			//.HAlign(HAlign_Fill)
			.AutoWidth()
			.VAlign(VAlign_Top)
				[
					SNew(SBorder)
					[
						SNew(STextBlock)
							.AutoWrapText(true)
							.WrapTextAt(150.f)//以空格和长度换行
							.Text(TAttribute<FText>::CreateSP((const SBlueprintNode*)this, &SBlueprintNode::GetNodeNameText))
					]
				]
			+ SHorizontalBox::Slot()
			.FillWidth(1.f)
			.HAlign(HAlign_Right)
			//.VAlign(VAlign_Fill)
				[
					SAssignNew(RightPins, SVerticalBox)
				]
		]
	+ SVerticalBox::Slot()
		.AutoHeight()
		//.VAlign(VAlign_Bottom)无用，因为AutoHeight且外部垂直高度不固定
		.HAlign(HAlign_Fill)
		[
			BottomLine.ToSharedRef()
		];
	
	
	ChildSlot
	[
		SNew(SBorder)
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		.Padding(0.f)
		.BorderImage(FAppStyle::GetBrush("Graph.StateNode.Body"))
		[
			SNew(SOverlay)
			+ SOverlay::Slot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			[
				SNew(SButton)
				.Visibility(EVisibility::SelfHitTestInvisible)
			]
			+ SOverlay::Slot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			[
				PinsLayoutInNode.ToSharedRef()
			]
		]
	];
	
	AddPin(TEXT("PinName"), EBlueprintPinType::Exec_Input, EBlueprintExecutionDirection::TopToBottom);
	AddPin(TEXT("PinName"), EBlueprintPinType::Exec_Output, EBlueprintExecutionDirection::TopToBottom);
	AddPin(TEXT("PinName"), EBlueprintPinType::Exec_Output, EBlueprintExecutionDirection::TopToBottom);

	AddPin(TEXT("PinName"), EBlueprintPinType::Param_Input, EBlueprintExecutionDirection::TopToBottom);
	AddPin(TEXT("PinName"), EBlueprintPinType::Param_Output, EBlueprintExecutionDirection::TopToBottom);

}


void SBlueprintNode::AddPin(const FString& InPinName, EBlueprintPinType PinViewType, 
	EBlueprintExecutionDirection ConnectionDirection)
{
	EBlueprintPinEdge PinEdge = CalculatePinDirection(PinViewType, ConnectionDirection);

	TSharedPtr<SBlueprintPin> Pin = SNew(SBlueprintPin)
		.Framework(GetWidgetRaw<SBlueprintFramework>(Outer))
		.Outer(this)
		.PinConnectionDirection(ConnectionDirection)
		.PinEdge(PinEdge)
		.PinType(PinViewType)
		.Name(InPinName);

	switch (PinEdge)
	{
	case EBlueprintPinEdge::Top:
	{
		TopPins->AddSlot()
			.Padding(4.f)
			.FillWidth(1.f)//疑似填充，HAlign_Center才有用
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Top)
			[
				Pin.ToSharedRef()
			];
		break;
	}
	case EBlueprintPinEdge::Bottom:
	{
		BottomPins->AddSlot()
			.Padding(4.f)
			.AutoWidth()
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Bottom)
			[
				Pin.ToSharedRef()
			];
		break;
	}
	case EBlueprintPinEdge::Left:
	{
		LeftPins->AddSlot()
			.Padding(4.f)
			.AutoHeight()
			.HAlign(HAlign_Left)
			.VAlign(VAlign_Center)
			[
				Pin.ToSharedRef()
			];
		break;
	}
	case EBlueprintPinEdge::Right:
	{
		RightPins->AddSlot()
			.Padding(4.f)
			.AutoHeight()
			.HAlign(HAlign_Right)
			.VAlign(VAlign_Center)
			[
				Pin.ToSharedRef()
			];
		break;
	}
	case EBlueprintPinEdge::None:
	default:
		break;
	}
	
	
}


bool SBlueprintNode::DoesContainThisPin(SBlueprintPin* InPin) const
{
	if(InPin)
	{
		for (auto& Temp : AllPins)
		{
			if (InPin == GetWidgetRaw<SBlueprintPin>(Temp))
			{
				return true;
			}
		}
	}
	return false;
}

void SBlueprintNode::OnThisNodeSelected()
{
	this->SetThisNodeSelected();
}

void SBlueprintNode::OnThisNodeNotSelected()
{
	this->CancelThisNodeSelected();
}

FReply SBlueprintNode::OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	return Super::OnDrop(MyGeometry, DragDropEvent);
}

int32 SBlueprintNode::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, 
	const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, 
	const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	FVector2D LocalSize = AllottedGeometry.GetLocalSize();
	int32 ReturnLayerId = Super::OnPaint(Args, AllottedGeometry, MyCullingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled);

	if (bIsSelected)
	{
		float BorderThickness(3.);
		TArray<FVector2d> Points{{0,0},{LocalSize.X, 0},{LocalSize.X, LocalSize.Y},{0, LocalSize.Y},{0,0}};
		FSlateDrawElement::MakeLines(OutDrawElements, ReturnLayerId + 1, AllottedGeometry.ToPaintGeometry(),
			Points, ESlateDrawEffect::DisabledEffect, FLinearColor::Yellow, true, BorderThickness);
	}

	return ReturnLayerId;
}


EBlueprintPinEdge SBlueprintNode::CalculatePinDirection(EBlueprintPinType ViewType, 
	EBlueprintExecutionDirection ConnectionDirection)
{
	switch (PinsLayout)
	{
	case EBlueprintPinsLayout::Separation:
	{
		switch (ConnectionDirection)
		{
		case EBlueprintExecutionDirection::TopToBottom:
		{
			switch (ViewType)
			{
			case EBlueprintPinType::Exec_Input:
			{
				return EBlueprintPinEdge::Top;
			}
			case EBlueprintPinType::Exec_Output:
			{
				return EBlueprintPinEdge::Bottom;
			}
			case EBlueprintPinType::Param_Input:
			{
				return EBlueprintPinEdge::Left;
			}
			case EBlueprintPinType::Param_Output:
			{
				return EBlueprintPinEdge::Right;
			}
			case EBlueprintPinType::None:
			default:
				break;
			}
			break;
		}
		case EBlueprintExecutionDirection::LeftToRight:
		{
			switch (ViewType)
			{
			case EBlueprintPinType::Exec_Input:
			{
				return EBlueprintPinEdge::Left;
			}
			case EBlueprintPinType::Exec_Output:
			{
				return EBlueprintPinEdge::Right;
			}
			case EBlueprintPinType::Param_Input:
			{
				return EBlueprintPinEdge::Top;
			}
			case EBlueprintPinType::Param_Output:
			{
				return EBlueprintPinEdge::Bottom;
			}
			case EBlueprintPinType::None:
			default:
				break;
			}
		}
		case EBlueprintExecutionDirection::None:
		default:
			break;
		}
		break;
	}
	case EBlueprintPinsLayout::Aggregation:
	{
		switch (ConnectionDirection)
		{
		case EBlueprintExecutionDirection::TopToBottom:
		{
			switch (ViewType)
			{
			case EBlueprintPinType::Exec_Input:
			case EBlueprintPinType::Exec_Output:
			{
				return EBlueprintPinEdge::Top;
			}
			case EBlueprintPinType::Param_Input:
			case EBlueprintPinType::Param_Output:
			{
				return EBlueprintPinEdge::Bottom;
			}
			case EBlueprintPinType::None:
			default:
				break;
			}
			break;
		}
		case EBlueprintExecutionDirection::LeftToRight:
		{
			switch (ViewType)
			{
			case EBlueprintPinType::Exec_Input:
			case EBlueprintPinType::Exec_Output:
			{
				return EBlueprintPinEdge::Left;
			}
			case EBlueprintPinType::Param_Input:
			case EBlueprintPinType::Param_Output:
			{
				return EBlueprintPinEdge::Right;
			}
			case EBlueprintPinType::None:
			default:
				break;
			}
		}
		case EBlueprintExecutionDirection::None:
		default:
			break;
		}
	}
	case EBlueprintPinsLayout::None:
	default:
		break;
	}
	return EBlueprintPinEdge::None;
}


void SBlueprintNode::InvokeContextMenu()
{

	//唤醒菜单

}

FText SBlueprintNode::GetNodeNameText() const
{
	return FText::FromString(NodeName);
}



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
