#include "Widget/BlueprintWidget/SBlueprintFramework.h"
#include "Widget/BlueprintWidget/NodesSelectedManager.h"
#include "Widget/BlueprintWidget/SBlueprintNode.h"
#include "Widget/WidgetCommonMethod.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

#define LOCTEXT_NAMESPACE "SBlueprintFramework"


SBlueprintFramework::SBlueprintFramework() : 
	Super(), 
	Nodes(this),
	bLeftCtrl(false),
	SelectedNodesManager(nullptr), 
	LastScale(1.1f),
	NewScale(1.f),
	LastViewOffset(1.f),
	NewViewOffset(0.f),
	CachedMouseGraphCoordinate(0),
	CachedWidgetUnderMouseCursor(nullptr),
	Marquee(),
	TotalMouseDelta(0),
	NodeHighLightBox(nullptr)
{
	NodeHighLightBox = new FSlateColorBrush(FLinearColor::Yellow);
	SelectedNodesManager = MakeShareable(new FNodesSelectedManager);

}

SBlueprintFramework::~SBlueprintFramework()
{
	if (NodeHighLightBox)
	{
		delete NodeHighLightBox;
		NodeHighLightBox = nullptr;
	}
}

void SBlueprintFramework::Construct(const FArguments& InArgs)
{
	BuildBlueprintNodeSlot();
	BuildBlueprintNodeSlot();
	BuildBlueprintNodeSlot();

	SetClipping(EWidgetClipping::ClipToBoundsWithoutIntersecting);
	
}

int32 SBlueprintFramework::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, 
	const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, 
	const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	int32 MaxLayerId = LayerId;
	int32 ChildLayerId = LayerId;

	//
	FPaintArgs NewPaintArgs(Args.WithNewParent(this));
	const bool bIsEnable = ShouldBeEnabled(bParentEnabled);

	FArrangedChildren Children(EVisibility::Visible);
	ArrangeChildNodes(AllottedGeometry, Children);
	{
		for (int32 I = 0; I < Children.Num(); I++)
		{
			FArrangedWidget& Child = Children[I];
			ChildLayerId = ChildLayerId + 1;
			int32 ReturnLayerId = Child.Widget->Paint(NewPaintArgs, Child.Geometry, MyCullingRect, OutDrawElements,
				ChildLayerId, InWidgetStyle, bIsEnable);
			MaxLayerId = FMath::Max(ReturnLayerId, MaxLayerId);
		}
	}
	
	//Marqee
	if(Marquee.bStartupMarquee)
	{
		const bool IsInDeadZone = TotalMouseDelta <= FSlateApplication::Get().GetDragTriggerDistance();
		if(!IsInDeadZone)
		{
			FMarqueeRect DrawMarquee = GetCorrectMarqueeRect();			
			FGeometry MarqeeGeometry = AllottedGeometry.MakeChild(
				DrawMarquee.GetSize(), FSlateLayoutTransform(1.f, DrawMarquee.StartPoint)
			);

			FSlateDrawElement::MakeBox(
				OutDrawElements, MaxLayerId,
				MarqeeGeometry.ToPaintGeometry(),
				NodeHighLightBox,
				ESlateDrawEffect::DisabledEffect,
				FLinearColor::White
			);

			//将选区的点从Panel坐标转换为Graph坐标，从而和节点的Graph坐标进行比对
			//注意，通过公式获得的坐标就是逻辑坐标，获取的节点的OffsetPosition
			DrawMarquee.StartPoint = PanelCoordToGraphCoord(DrawMarquee.StartPoint);
			DrawMarquee.EndPoint = PanelCoordToGraphCoord(DrawMarquee.EndPoint);
			
			FSlateRect ViewportRect = DrawMarquee.ToSlateRect();;

			for (int32 I = 0; I < Children.Num(); I++)
			{
				FArrangedWidget& Child = Children[I];

				//不能-ViewOffset?
				FSlateLayoutTransform TransformToParent = FSlateLayoutTransform(1.f,
					GetWidgetSP<SBlueprintNode>(Child.Widget)->GetOffsetPosition());
				FVector2D LeftTopInParent = TransformToParent.TransformPoint(FVector2D(0, 0));
				FVector2D RightBottomInParent = TransformToParent.TransformPoint(Child.Geometry.GetLocalSize());

				TSharedPtr<SBlueprintNode> Node = GetWidgetSP<SBlueprintNode>(Child.Widget);
				if (FSlateRect::DoRectanglesIntersect(ViewportRect, FSlateRect(LeftTopInParent, RightBottomInParent)))
				{
					AddSelectedNode(Node);
				}
				else if(Node->IsNodeSelected())
				{
					RemoveSelectedNode(Node);
				}
			}
		}
	}

	//Border
	//if(bFocusThis)
	{
		MaxLayerId++;
		const FVector2D AllottedGeometrySize = AllottedGeometry.GetLocalSize();
		TArray<FVector2D> BorderPoint{
			{1,1},
			{AllottedGeometrySize.X, 1},
			{AllottedGeometrySize.X, AllottedGeometrySize.Y},
			{1, AllottedGeometrySize.Y},			
			{1,1}
			};
		FSlateDrawElement::MakeLines(OutDrawElements, MaxLayerId, AllottedGeometry.ToPaintGeometry(), 
			BorderPoint, ESlateDrawEffect::None, FLinearColor::Yellow, false, 1.f);
	}

	{
		const float TextScale = 2.f;
		const FVector2D TextSize = FVector2D(200, 100);


		FSlateLayoutTransform LayoutTransform(TextScale, FVector2D(AllottedGeometry.GetLocalSize().X 
			- TextScale * TextSize.X, 0));
		FGeometry TextGeometry = AllottedGeometry.MakeChild(TextSize, LayoutTransform);
		const FText Text = FText::Format(LOCTEXT("BlueprintFramework.DrawScaleText","Scale: {0}"), FText::AsNumber(GetScale()));
		
		FSlateDrawElement::MakeText(
			OutDrawElements, 
			MaxLayerId, 
			TextGeometry.ToPaintGeometry(), 
			Text, 
			FAppStyle::GetFontStyle(TEXT("Graph.Node.CommentFont")));
	}

	//Grid
	{
		for (int32 I = 0; I < GridPoints.Num(); I++)
		{
			FSlateDrawElement::MakeLines(
				OutDrawElements,
				LayerId,
				AllottedGeometry.ToPaintGeometry(),
				GridPoints[I],
				ESlateDrawEffect::None,
				(I % (int32)GridSubdivision == 0) ? GridColor : InternalGridColor,
				false,
				(I % (int32)GridSubdivision == 0) ? Thickness : Thickness * 0.5 
			);
		}
	}

	return MaxLayerId;
}

void SBlueprintFramework::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	bool bScaleChanged = IsScaleChanged();
	bool bViewOffsetChanged = IsViewOffsetChanged();

	if (bScaleChanged)
	{
		LastScale = NewScale;
	}

	if (bViewOffsetChanged)
	{
		LastViewOffset = NewViewOffset;
	}

	if (bScaleChanged || bViewOffsetChanged)
	{
		OnTickNeedUpdate(AllottedGeometry);
	}

}

void SBlueprintFramework::AddSelectedNode(TSharedPtr<SBlueprintNode> InNode) const
{
	if(InNode.IsValid())
	{
		if (!InNode->IsNodeSelected())
		{
			InNode->OnThisNodeSelected();
			SelectedNodesManager->AddSelectedNode(InNode);
		}
	}
}

void SBlueprintFramework::RemoveSelectedNode(TSharedPtr<SBlueprintNode> InNode) const
{
	if (InNode.IsValid())
	{
		if (InNode->IsNodeSelected())
		{
			InNode->OnThisNodeNotSelected();
			SelectedNodesManager->RemoveSelectedNode(InNode);
		}	
	}
}

void SBlueprintFramework::ClearAllSelectedNodes()
{
	SelectedNodesManager->UpdateForSelectedNodes(FOnUpdateForSelectedNodes::CreateLambda(
		[](TSharedPtr<SBlueprintNode> InNode)
		{
			InNode->OnThisNodeNotSelected();
		}
	));
	SelectedNodesManager->ClearSelectedNodes();
}

void SBlueprintFramework::InvokeContextMenu()
{
	//FSlateApplication::Get().OnFocusChanging();
}

void SBlueprintFramework::InvokeNodesContextMenu()
{
}

void SBlueprintFramework::ChangeScale(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{	
	//在二维坐标系中，缩放是沿着X Y轴进行的。
	//缩放时需要将图像平移到原点再进行缩放，否则图像会包含平移
	//缩放是以鼠标为为中心的，故其Panel坐标前后相同，Panel坐标对应的Graph坐标也要前后相同
	FVector2D PanelPositionBeforeChanged = MyGeometry.AbsoluteToLocal(MouseEvent.GetScreenSpacePosition());
	FVector2D GraphPositionBeforeChanged = PanelCoordToGraphCoord(PanelPositionBeforeChanged);
	
	float NumberPerTime = MouseEvent.GetWheelDelta() > 0 ? 0.1 : - 0.1;
	NewScale = FMath::Clamp(LastScale + NumberPerTime, 0.5f, 5.f);
	//推导出的公式
	// NewOffset = GraphCoord - (PanelCoord / NewScale)
	// OldGraphCoord = NewGraphCoord	要求缩放时，鼠标对应的图坐标不变，看着像是以该处的图坐标缩放
	// OldPanelCoord = NewPanelCoord	缩放时鼠标位置不变
	NewViewOffset = GraphPositionBeforeChanged - PanelPositionBeforeChanged / NewScale;
}

void SBlueprintFramework::ArrangeChildNodes(const FGeometry& AllottedGeometry, FArrangedChildren& ArrangedChildren) const
{
	for (int32 I = 0; I < Nodes.Num(); I++)
	{
		const auto Child = Nodes[I];
		
		FSlateLayoutTransform LayoutTransform(GetScale(), GraphCoordToPanelCoord(SnapGrid(Child->GetOffsetPosition())));
		//绘制要在PanelCoord上绘制
		ArrangedChildren.AddWidget(
			AllottedGeometry.MakeChild(
				Child,
				Child->GetDesiredSize(),
				LayoutTransform)
		);
	}
}

FReply SBlueprintFramework::OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	FReply Reply = Super::OnDrop(MyGeometry, DragDropEvent);
	
	
	return Reply;
}

FReply SBlueprintFramework::OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& KeyEvent)
{
	FReply Reply = Super::OnKeyDown(MyGeometry, KeyEvent);


	return Reply;
}

FReply SBlueprintFramework::OnKeyUp(const FGeometry& MyGeometry, const FKeyEvent& KeyEvent)
{
	FReply Reply = Super::OnKeyUp(MyGeometry, KeyEvent);


	return Reply;
}

FReply SBlueprintFramework::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	InitializeMouseOperation();

	FArrangedChildren Children(EVisibility::Visible);
	ArrangeChildNodes(MyGeometry, Children);

	//通过范围测试(需要加入Pin的测试)
	int32 ChildIndex = FindChildUnderMouse(Children, MouseEvent);
	if (ChildIndex != INDEX_NONE)
	{
		//设置光标下的控件()
		CachedWidgetUnderMouseCursor = GetWidgetSP<SBlueprintMoveableWidget>(Children[ChildIndex].Widget.ToSharedPtr());
	}
	FVector2D MousePanelCoord = MyGeometry.AbsoluteToLocal(MouseEvent.GetScreenSpacePosition());
	CachedMouseGraphCoordinate = PanelCoordToGraphCoord(MousePanelCoord);

	FReply Reply = FReply::Unhandled();
	bool IsLeftMouseButtonEffecting = MouseEvent.GetEffectingButton() == EKeys::LeftMouseButton;
	bool IsRightMouseButtonEffecting = MouseEvent.GetEffectingButton() == EKeys::RightMouseButton;

	if (IsLeftMouseButtonEffecting)
	{
		if (CachedWidgetUnderMouseCursor.IsValid())
		{//左键 + 节点 -- 移动节点
			Reply = FReply::Handled()
				.CaptureMouse(this->AsShared())
				.UseHighPrecisionMouseMovement(this->AsShared());
		}
		else
		{//左键 + Framework -- 选区框
			Reply = FReply::Handled()
				.CaptureMouse(this->AsShared())
				.UseHighPrecisionMouseMovement(this->AsShared());
			//开始选区
			Marquee.bStartupMarquee = true;
			Marquee.CachedMarqueeRect.StartPoint = MousePanelCoord;
			Marquee.CachedMarqueeRect.EndPoint = MousePanelCoord;
		}
	}
	else if (IsRightMouseButtonEffecting)
	{
		//无论光标下是否有控件都需要捕获鼠标
		Reply = FReply::Handled()
			.CaptureMouse(this->AsShared())
			.UseHighPrecisionMouseMovement(this->AsShared());
	}

	return Reply;
}

FReply SBlueprintFramework::OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	//FReply Reply = Super::OnMouseMove(MyGeometry, MouseEvent);
	FReply Reply = FReply::Handled();

	bool IsRightMouseButtonDown = MouseEvent.IsMouseButtonDown(EKeys::RightMouseButton);
	bool IsLeftMouseButtonDown = MouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton);

	if (this->HasMouseCapture())
	{
		//用于计算是否移动
		TotalMouseDelta += MouseEvent.GetCursorDelta().Size();
		const bool bCursorInDeadZone = TotalMouseDelta <= FSlateApplication::Get().GetDragTriggerDistance();
		if (IsRightMouseButtonDown)
		{
			MoveViewport(MyGeometry, MouseEvent);
		}
		else if (IsLeftMouseButtonDown)
		{
			if (Marquee.bStartupMarquee && !bCursorInDeadZone)
			{
				if(!Marquee.bhasClearedNode)
				{
					ClearAllSelectedNodes();
					Marquee.bhasClearedNode = true;
				}
				//选区
				Marquee.CachedMarqueeRect.UpdateEndPoint(MyGeometry.AbsoluteToLocal(MouseEvent.GetScreenSpacePosition()));
			}
			else
			{
				if (CachedWidgetUnderMouseCursor.IsValid())
				{
					TSharedPtr<SBlueprintNode> Node = GetWidgetSP<SBlueprintNode>(CachedWidgetUnderMouseCursor);
					if (!Node->IsNodeSelected())
					{
						ClearAllSelectedNodes();
						AddSelectedNode(Node);
					}
					MoveSelectedNodes(MyGeometry, MouseEvent);
				}
			}
		}
	}

	return Reply;
}

FReply SBlueprintFramework::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	FReply Reply = FReply::Unhandled();

	
	bool IsLeftMouseButtonEffecting = MouseEvent.GetEffectingButton() == EKeys::LeftMouseButton;
	bool IsRightMouseButtonEffecting = MouseEvent.GetEffectingButton() == EKeys::RightMouseButton;
	const bool bCursorInDeadZone = TotalMouseDelta <= FSlateApplication::Get().GetDragTriggerDistance();
	if (this->HasMouseCapture())
	{
		Reply = FReply::Handled().ReleaseMouseCapture();
		bool IsInDeadZone = TotalMouseDelta <= FSlateApplication::Get().GetDragTriggerDistance();

		if(IsInDeadZone)
		{
			if (IsLeftMouseButtonEffecting)
			{
				if (CachedWidgetUnderMouseCursor.IsValid())
				{	//左键 + 死区 + 缓存了Node/Pin
					if (CachedWidgetUnderMouseCursor->GetWidgetType() == EBlueprintWidgetType::Node)
					{
						//光标左键点击节点，且没有位移
						TSharedPtr<SBlueprintNode> Node = GetWidgetSP<SBlueprintNode>(CachedWidgetUnderMouseCursor);

						ClearAllSelectedNodes();
						//将光标下的节点设置为点击
						AddSelectedNode(Node);
					}
					else
					{

					}
				}
				else
				{//左键 + 死区
					Marquee.bStartupMarquee = false;
					ClearAllSelectedNodes();
				}
			}
			else if (IsRightMouseButtonEffecting)
			{
				if (CachedWidgetUnderMouseCursor.IsValid())
				{//右键 + 死区 + 缓存了Node/Pin
					if (CachedWidgetUnderMouseCursor->GetWidgetType() == EBlueprintWidgetType::Node)
					{
						TSharedPtr<SBlueprintNode> Node = GetWidgetSP<SBlueprintNode>(CachedWidgetUnderMouseCursor);
						if (Node->IsNodeSelected())
						{	//和所有被选中的节点相关
							InvokeNodesContextMenu();
						}
						else
						{
							ClearAllSelectedNodes();
							AddSelectedNode(Node);
							InvokeNodesContextMenu();
						}				
					}
					else
					{

					}
				}
				else
				{//右键 + 死区 
					InvokeContextMenu();
				}
			}
		}
		else
		{
			if (IsLeftMouseButtonEffecting && Marquee.bStartupMarquee)
			{
				//选区
				Marquee.bStartupMarquee = false;
			}

			
		}
	}
	return Reply;
}

FReply SBlueprintFramework::OnMouseWheel(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	FReply Reply = FReply::Unhandled();

	ChangeScale(MyGeometry, MouseEvent);

	return Reply;
}

void SBlueprintFramework::OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	Super::OnMouseEnter(MyGeometry, MouseEvent);
}

void SBlueprintFramework::OnMouseLeave(const FPointerEvent& MouseEvent)
{
	Super::OnMouseLeave(MouseEvent);
}

void SBlueprintFramework::OnArrangeChildren(const FGeometry& AllottedGeometry, FArrangedChildren& ArrangedChildren) const
{
	ArrangeChildNodes(AllottedGeometry, ArrangedChildren);
}

FVector2D SBlueprintFramework::ComputeDesiredSize(float) const
{
	return FVector2D(INFINITY, INFINITY);
}

FChildren* SBlueprintFramework::GetChildren()
{
	return &Nodes;
}

void SBlueprintFramework::BuildSlot(TSharedPtr<SWidget> InWidget)
{
}

void SBlueprintFramework::BuildBlueprintNodeSlot()
{
	//FBlueprintSlot::FSlotArguments Slot(MakeUnique<FBlueprintSlot::FSlotArguments>();
	//Nodes.Add()


	{
		TSharedPtr<SBlueprintNode> Node = SNew(SBlueprintNode)
			.Outer(this)
			.HighLightBox(NodeHighLightBox)
			.PinsLayout(EBlueprintPinsLayout::Separation);

		auto& NodeRef = AllChildern.AddDefaulted_GetRef();
		NodeRef.Type = EBlueprintWidgetType::Node;
		NodeRef.Node = Node;
		Nodes.Add(Node.ToSharedRef());
	}
}

void SBlueprintFramework::AddSlot(TSharedPtr<SWidget>& InWidget)
{
}

void SBlueprintFramework::MoveSelectedNodes(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	FVector2D NewMouseGrpahCoord = PanelCoordToGraphCoord(MyGeometry.AbsoluteToLocal(MouseEvent.GetScreenSpacePosition()));
	FVector2D DeltaPos = NewMouseGrpahCoord- CachedMouseGraphCoordinate;
	CachedMouseGraphCoordinate = NewMouseGrpahCoord;
	SelectedNodesManager->UpdateForSelectedNodes(FOnUpdateForSelectedNodes::CreateLambda(
		[](TSharedPtr<SBlueprintNode> InNode, const FVector2D& DeltaPos)
		{
			if (InNode.IsValid())
			{
				//只改变逻辑坐标，具体的绘制会加上视口偏移
				InNode->SetOffsetPosition(InNode->GetOffsetPosition() + DeltaPos);
			}

		}, DeltaPos
	));
}

void SBlueprintFramework::MoveViewport(const FGeometry& MyGeometry, const FPointerEvent& PointerEvent)
{
	NewViewOffset -= (PanelCoordToGraphCoord(MyGeometry.AbsoluteToLocal(PointerEvent.GetScreenSpacePosition()))
		- CachedMouseGraphCoordinate);
}

FVector2D SBlueprintFramework::GraphCoordToPanelCoord(const FVector2D& GraphSpaceCoordinate) const
{
	return (GraphSpaceCoordinate - GetViewOffset()) * GetScale();
}

FVector2D SBlueprintFramework::PanelCoordToGraphCoord(const FVector2D& PanelSpaceCoordinate) const
{
	return PanelSpaceCoordinate / GetScale() + GetViewOffset();
}

FMarqueeRect SBlueprintFramework::GetCorrectMarqueeRect() const
{
	FMarqueeRect CorrectMarqueeRect;
	FVector2D Delta = Marquee.CachedMarqueeRect.EndPoint - Marquee.CachedMarqueeRect.StartPoint;
	if (Delta.X > 0)
	{
		if (Delta.Y > 0)
		{
			CorrectMarqueeRect = Marquee.CachedMarqueeRect;
		}
		else
		{
			CorrectMarqueeRect.StartPoint = FVector2D(Marquee.CachedMarqueeRect.StartPoint.X, Marquee.CachedMarqueeRect.EndPoint.Y);
			CorrectMarqueeRect.EndPoint = FVector2D(Marquee.CachedMarqueeRect.EndPoint.X, Marquee.CachedMarqueeRect.StartPoint.Y);
		}
	}
	else
	{
		if (Delta.Y > 0)
		{
			CorrectMarqueeRect.StartPoint = FVector2D(Marquee.CachedMarqueeRect.EndPoint.X, Marquee.CachedMarqueeRect.StartPoint.Y);
			CorrectMarqueeRect.EndPoint = FVector2D(Marquee.CachedMarqueeRect.StartPoint.X, Marquee.CachedMarqueeRect.EndPoint.Y);
		}
		else
		{
			CorrectMarqueeRect.StartPoint = Marquee.CachedMarqueeRect.EndPoint;
			CorrectMarqueeRect.EndPoint = Marquee.CachedMarqueeRect.StartPoint;
		}
	}
	return CorrectMarqueeRect;
}

void SBlueprintFramework::UpdateGridPoint(const FGeometry& AllottedGeometry)
{
	static const float Epsilon = 1e-3f;
	const float FloatGridStepLengthGraphCoord = GetGridStepLength() / GetScale();

	FVector2D PanelStartPositionToGraphCoord = PanelCoordToGraphCoord(FVector2D(0.f, 0.f));
	FVector2D PanelEndPositionToGraphCoord = PanelCoordToGraphCoord(AllottedGeometry.GetLocalSize());

	const float GridInternalStepLengthGraphCoord = FloatGridStepLengthGraphCoord / GridSubdivision;

	FVector2D GridStartPositionOnGraphCoord(
		FMath::Floor(PanelStartPositionToGraphCoord.X / FloatGridStepLengthGraphCoord) * FloatGridStepLengthGraphCoord,
		FMath::Floor(PanelStartPositionToGraphCoord.Y / FloatGridStepLengthGraphCoord) * FloatGridStepLengthGraphCoord
	);

	FVector2D GridEndPositionOnGraphCoord(
		FMath::CeilToFloat(PanelEndPositionToGraphCoord.X / FloatGridStepLengthGraphCoord) * FloatGridStepLengthGraphCoord,
		FMath::CeilToFloat(PanelEndPositionToGraphCoord.Y / FloatGridStepLengthGraphCoord) * FloatGridStepLengthGraphCoord
	);

	//第一条线
	TArray<TArray<FVector2D>> NewGridPoint;
	NewGridPoint.Add(
		TArray<FVector2D>
		{
			GraphCoordToPanelCoord(FVector2D(GridStartPositionOnGraphCoord.X, GridStartPositionOnGraphCoord.Y)),
			GraphCoordToPanelCoord(FVector2D(GridEndPositionOnGraphCoord.X, GridStartPositionOnGraphCoord.Y))
		}
	);

	for (int32 I = 1; GridStartPositionOnGraphCoord.Y + I * FloatGridStepLengthGraphCoord < GridEndPositionOnGraphCoord.Y + Epsilon; I++)
	{	//X不变，Y变换
		float Y = GridStartPositionOnGraphCoord.Y + I * FloatGridStepLengthGraphCoord;
		for (int32 J = 1; J < GridSubdivision; J++)
		{
			float InternalY = Y - J * GridInternalStepLengthGraphCoord;
			NewGridPoint.Add(
				TArray<FVector2D>
				{
					GraphCoordToPanelCoord(FVector2D(GridStartPositionOnGraphCoord.X, InternalY)),
					GraphCoordToPanelCoord(FVector2D(GridEndPositionOnGraphCoord.X, InternalY)),
				}
			);
		}
		NewGridPoint.Add(
			TArray<FVector2D>
			{
				GraphCoordToPanelCoord(FVector2D(GridStartPositionOnGraphCoord.X, Y)),
				GraphCoordToPanelCoord(FVector2D(GridEndPositionOnGraphCoord.X, Y))
			}
		);		
	}

	//第一条线
	NewGridPoint.Add(
		TArray<FVector2D>
		{
			GraphCoordToPanelCoord(FVector2D(GridStartPositionOnGraphCoord.X, GridStartPositionOnGraphCoord.Y)),
			GraphCoordToPanelCoord(FVector2D(GridStartPositionOnGraphCoord.X, GridEndPositionOnGraphCoord.Y))
		}
	);

	for (int32 I = 1; GridStartPositionOnGraphCoord.X + I * FloatGridStepLengthGraphCoord < GridEndPositionOnGraphCoord.X + Epsilon; I++)
	{	//X变换，Y不变
		float X = GridStartPositionOnGraphCoord.X + I * FloatGridStepLengthGraphCoord;
		for (int32 J = 1; J < GridSubdivision; J++)
		{
			float InternalX = X - J * GridInternalStepLengthGraphCoord;
			NewGridPoint.Add(
				TArray<FVector2D>
				{
					GraphCoordToPanelCoord(FVector2D(InternalX, GridStartPositionOnGraphCoord.Y)),
					GraphCoordToPanelCoord(FVector2D(InternalX, GridEndPositionOnGraphCoord.Y))
				}
			);
		}
		NewGridPoint.Add(
			TArray<FVector2D>
			{
				GraphCoordToPanelCoord(FVector2D(X, GridStartPositionOnGraphCoord.Y)),
				GraphCoordToPanelCoord(FVector2D(X, GridEndPositionOnGraphCoord.Y))
			}
		);		
	}
	GridPoints = MoveTemp(NewGridPoint);
}

void SBlueprintFramework::OnTickNeedUpdate(const FGeometry& AllottedGeometry)
{
	UpdateGridPoint(AllottedGeometry);
}

#undef LOCTEXT_NAMESPACE

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

