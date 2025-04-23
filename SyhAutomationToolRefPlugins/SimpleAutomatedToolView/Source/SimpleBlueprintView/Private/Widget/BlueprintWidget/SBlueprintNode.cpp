#include "Widget/BlueprintWidget/SBlueprintNode.h"
#include "Widget/WidgetCommonMethod.h"
#include "Widget/BlueprintWidget/SBlueprintPin.h"


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

SBlueprintNode::SBlueprintNode() : Super()
{
	NodeName = TEXT("New Node");
}


void SBlueprintNode::Construct(const FArguments& InArgs)
{
	PinsLayout = InArgs._PinsLayout;
	Framework = GetWidgetWP<SBlueprintFramework>(InArgs._Framework);
	
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
		.Padding(0.f)
		.BorderImage(FAppStyle::GetBrush("Graph.StateNode.Body"))
		[
			SNew(SOverlay)
			+ SOverlay::Slot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			[
				SNew(SButton)
			]
			+ SOverlay::Slot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			[
				PinsLayoutInNode.ToSharedRef()
			]
		]
	];

	
	AddPin(TEXT("PinName"), EBlueprintPinType::Exec_Input, EBlueprintPinConnectionDirection::TopToBottom);
	AddPin(TEXT("PinName"), EBlueprintPinType::Exec_Output, EBlueprintPinConnectionDirection::TopToBottom);
	AddPin(TEXT("PinName"), EBlueprintPinType::Exec_Output, EBlueprintPinConnectionDirection::TopToBottom);

	AddPin(TEXT("PinName"), EBlueprintPinType::Param_Input, EBlueprintPinConnectionDirection::TopToBottom);
	AddPin(TEXT("PinName"), EBlueprintPinType::Param_Output, EBlueprintPinConnectionDirection::TopToBottom);

}


void SBlueprintNode::AddPin(const FString& InPinName, EBlueprintPinType PinViewType, 
	EBlueprintPinConnectionDirection ConnectionDirection)
{
	EBlueprintPinEdge PinEdge = CalculatePinDirection(PinViewType, ConnectionDirection);

	TSharedPtr<SBlueprintPin> Pin = SNew(SBlueprintPin)
		.Framework(GetWidgetRaw<SBlueprintFramework>(Framework))
		.Owner(this)
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
	return false;
}

FReply SBlueprintNode::OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	return Super::OnDrop(MyGeometry, DragDropEvent);
}

void SBlueprintNode::AddLeftRightPin(TSharedPtr<class SVerticalBox> InPins, 
	const FString& InPinName, EBlueprintPinType PinViewType, 
	EBlueprintPinConnectionDirection ConnectionDirection, EVerticalAlignment Alignment,
	bool bAuto)
{
	TSharedPtr<SBlueprintPin> Pin = SNew(SBlueprintPin)
		.Framework(GetWidgetRaw<SBlueprintFramework>(Framework))
		.Owner(this)
		.PinConnectionDirection(ConnectionDirection)
		.PinEdge(CalculatePinDirection(PinViewType, ConnectionDirection))
		.PinType(PinViewType)
		.Name(InPinName);

	if (bAuto)
	{
		InPins->AddSlot()
			.AutoHeight()
			.Padding(3.f)
			.VAlign(Alignment)
			[
				Pin.ToSharedRef()
			];
	}
	else
	{
		InPins->AddSlot()
			.FillHeight(1.f)
			.Padding(3.f)
			.VAlign(Alignment)
			[
				Pin.ToSharedRef()
			];
	}

}

void SBlueprintNode::AddTopBottomPin(TSharedPtr<class SHorizontalBox> InPins, 
	const FString& InPinName, EBlueprintPinType PinViewType, 
	EBlueprintPinConnectionDirection ConnectionDirection, EHorizontalAlignment Alignment, 
	bool bAuto)
{
	TSharedPtr<SBlueprintPin> Pin = SNew(SBlueprintPin)
		.Framework(GetWidgetRaw<SBlueprintFramework>(Framework))
		.Owner(this)
		.PinConnectionDirection(ConnectionDirection)
		.PinEdge(CalculatePinDirection(PinViewType, ConnectionDirection))
		.PinType(PinViewType);
	if (bAuto)
	{
		InPins->AddSlot()
			.AutoWidth()
			.Padding(3.f)
			.HAlign(Alignment)
			[
				Pin.ToSharedRef()
			];
	}
	else
	{
		InPins->AddSlot()
			.FillWidth(1.f)
			.Padding(3.f)
			.HAlign(Alignment)
			[
				Pin.ToSharedRef()
			];
	}
}

EBlueprintPinEdge SBlueprintNode::CalculatePinDirection(EBlueprintPinType ViewType, 
	EBlueprintPinConnectionDirection ConnectionDirection)
{
	switch (PinsLayout)
	{
	case EBlueprintPinsLayout::Separation:
	{
		switch (ConnectionDirection)
		{
		case EBlueprintPinConnectionDirection::TopToBottom:
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
		case EBlueprintPinConnectionDirection::LeftToRight:
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
		case EBlueprintPinConnectionDirection::None:
		default:
			break;
		}
		break;
	}
	case EBlueprintPinsLayout::Aggregation:
	{
		switch (ConnectionDirection)
		{
		case EBlueprintPinConnectionDirection::TopToBottom:
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
		case EBlueprintPinConnectionDirection::LeftToRight:
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
		case EBlueprintPinConnectionDirection::None:
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

void SBlueprintNode::StartMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{

}

void SBlueprintNode::Move(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
}

void SBlueprintNode::EndMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
}

FText SBlueprintNode::GetNodeNameText() const
{
	return FText::FromString(NodeName);
}

FReply SBlueprintNode::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return Super::OnMouseButtonUp(MyGeometry, MouseEvent);
}

FReply SBlueprintNode::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return Super::OnMouseButtonDown(MyGeometry, MouseEvent);
}

FReply SBlueprintNode::OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return Super::OnMouseMove(MyGeometry, MouseEvent);
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
