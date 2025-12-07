#include "Base/Widget/Panel/SBlueprintEntryPanelWidget.h"
#include "Base/Widget/Panel/NodesSelectedManager.h"
#include "Base/Widget/Node/SBlueprintNodeWidget.h"
#include "Base/Widget/Pin/SBlueprintPinWidget.h"
#include "Base/Widget/Panel/FBlueprintConnection.h"
#include "Base/CommonMethod.h"
#include "Fonts/FontMeasure.h"
#include "Base/Entry/BlueprintEntryPanelEntry.h"
#include "SimpleBlueprintViewStyle.h"
#include "Base/Delegate.h"
#include "DllExport/SimpleBlueprintViewDragDropInterface.h"
#include "DllExports/CommonDragDropOperationDefinition.h"
#include "Base/Entry/BlueprintNodeEntry.h"
#include "GenericPlatform/GenericWindow.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

#define LOCTEXT_NAMESPACE "SBlueprintEntryPanelWidget"

static const FString PanelDisplayName = TEXT("PanelName");

static float ComputeCurviness(const FVector2D P0, const FVector2D P1, const FVector2D P2, const FVector2D P3)
{
	FVector2D TwoP1Deviations = P0 + P2 - 2 * P1;
	FVector2D TwoP2Deviations = P1 + P3 - 2 * P2;
	float TwoDeviations = FMath::Abs(TwoP1Deviations.X) + FMath::Abs(TwoP1Deviations.Y) + FMath::Abs(TwoP2Deviations.X) + FMath::Abs(TwoP2Deviations.Y);
	return TwoDeviations;
}

//德卡斯特里奥分割算法
static void deCasteljauSplit(const FVector2D P0, const FVector2D P1, const FVector2D P2, const FVector2D P3, FVector2D OutCurveParams[7])
{
	FVector2D L1 = (P0 + P1) * 0.5f;
	FVector2D M = (P1 + P2) * 0.5f;
	FVector2D R2 = (P2 + P3) * 0.5f;

	FVector2D L2 = (L1 + M) * 0.5f;
	FVector2D R1 = (M + R2) * 0.5f;

	FVector2D L3R0 = (L2 + R1) * 0.5f;

	OutCurveParams[0] = P0;
	OutCurveParams[1] = L1;
	OutCurveParams[2] = L2;
	OutCurveParams[3] = L3R0;
	OutCurveParams[4] = R1;
	OutCurveParams[5] = R2;
	OutCurveParams[6] = P3;
}

static void SubdivideRecursive(const FVector2D P0, const FVector2D P1, const FVector2D P2, const FVector2D P3, 
	TArray<FVector2D>& SubdividePoints, float MaxBiasTimesTwo = 1.0f)
{
	const float Curviness = ComputeCurviness(P0, P1, P2, P3);
	if (Curviness > MaxBiasTimesTwo)
	{
		FVector2D TwoCurves[7];
		deCasteljauSplit(P0, P1, P2, P3, TwoCurves);
		SubdivideRecursive(TwoCurves[0], TwoCurves[1], TwoCurves[2], TwoCurves[3], SubdividePoints, MaxBiasTimesTwo);
		SubdivideRecursive(TwoCurves[3], TwoCurves[4], TwoCurves[5], TwoCurves[6], SubdividePoints, MaxBiasTimesTwo);
	}
	else
	{
		//在此处，四点组成的线，近似直线，只需要Start和End即可
		//若有细分，则Left和Right共享3号点，相当于Right添加了Start
		SubdividePoints.Add(P3);
	}
}

static void Subdivide(const FVector2D P0, const FVector2D P1, const FVector2D P2, const FVector2D P3,
	TArray<FVector2D>& SubdividePoints, float MaxBiasTimesTwo = 1.0f)
{
	SubdividePoints.Add(P0);
	SubdivideRecursive(P0, P1, P2, P3, SubdividePoints, MaxBiasTimesTwo);
}

SBlueprintEntryPanelWidget::SBlueprintEntryPanelWidget() : 
	Super(), 
	IBlueprintWidgetBase(),
	Nodes(this),
	ScaleTextFontInfo(FSimpleBlueprintViewStyle::Get().GetFontStyle(TEXT("Graph.ZoomText")))
{
}

SBlueprintEntryPanelWidget::~SBlueprintEntryPanelWidget()
{
}

void SBlueprintEntryPanelWidget::Construct(const FArguments& InArgs)
{
	SetDisplayName(InArgs._DisplayName.IsEmpty() ? PanelDisplayName : InArgs._DisplayName);
	SelectedNodesManager = MakeShareable(new FNodesSelectedManager);
	SetClipping(EWidgetClipping::ClipToBoundsWithoutIntersecting);
	
	OnGetDragDropInterface = InArgs._OnGetDragDropInterface;
	bNeedUpdateOnTick = true;
}

TSharedPtr<FBlueprintEntryPanelEntry> SBlueprintEntryPanelWidget::GetPanelEntry()
{
	check(PanelEntry.IsValid());
	return PanelEntry;
}

const TSharedPtr<FBlueprintEntryPanelEntry> SBlueprintEntryPanelWidget::GetPanelEntry() const
{
	check(PanelEntry.IsValid());
	return PanelEntry;
}

FVector2D SBlueprintEntryPanelWidget::GetViewOffset() const
{
	return GetPanelEntry()->GetViewOffset();
}

void SBlueprintEntryPanelWidget::SetViewOffset(const FVector2D& InViewOffset)
{
	GetPanelEntry()->SetViewOffset(InViewOffset);
}

bool SBlueprintEntryPanelWidget::IsViewOffsetChanged()
{
	return GetPanelEntry()->IsViewOffsetChanged();
}

void SBlueprintEntryPanelWidget::UpdateViewOffset()
{
	GetPanelEntry()->UpdateViewOffset();
}

float SBlueprintEntryPanelWidget::GetScale() const
{
	return GetPanelEntry()->GetScale();
}

void SBlueprintEntryPanelWidget::SetScale(float InScale)
{
	GetPanelEntry()->SetScale(InScale);
}

bool SBlueprintEntryPanelWidget::IsScaleChanged()
{
	return GetPanelEntry()->IsScaleChanged();
}

void SBlueprintEntryPanelWidget::UpdateScale()
{
	GetPanelEntry()->UpdateScale();
}

FVector2D SBlueprintEntryPanelWidget::GetMiddlePositionOfPanel() const
{
	return PanelCoordToGraphCoord(GetTickSpaceGeometry().GetLocalSize() / 2);
}

int32 SBlueprintEntryPanelWidget::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, 
	const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, 
	const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	int32 MaxLayerId = LayerId;
	int32 ChildLayerId = LayerId;

	//Background
	{
		static const FSlateBrush* Background = FSimpleBlueprintViewStyle::Get().GetBrush("Graph.Panel.SolidBackground");
		FSlateDrawElement::MakeBox(
			OutDrawElements,
			ChildLayerId,
			AllottedGeometry.ToPaintGeometry(),
			Background,
			ESlateDrawEffect::None,
			Background->TintColor.GetSpecifiedColor()
		);
		ChildLayerId++;
	}

	//Grid
	{
		static const FLinearColor RegularColor = FLinearColor(0.035f, 0.035f, 0.035f);
		static const FLinearColor RuleColor = FLinearColor(0.008f, 0.008f, 0.008f);


		for (int32 I = 0; I < GridPoints.Num(); I++)
		{
			const bool MainFrameLine = I % (int32)GridSubdivision == 0;

			FSlateDrawElement::MakeLines(
				OutDrawElements,
				MainFrameLine ? ChildLayerId + 1: ChildLayerId,
				AllottedGeometry.ToPaintGeometry(),
				GridPoints[I],
				ESlateDrawEffect::None,
				MainFrameLine ? RuleColor : RegularColor,
				false
			);
		}

		MaxLayerId = ChildLayerId + 1;
		ChildLayerId = MaxLayerId + 1;
	}

	//
	FPaintArgs NewPaintArgs(Args.WithNewParent(this));
	const bool bIsEnable = ShouldBeEnabled(bParentEnabled);

	FArrangedChildren Children(EVisibility::Visible);
	ArrangeChildNodes(AllottedGeometry, Children);
	{
		for (int32 I = 0; I < Children.Num(); I++)
		{
			FArrangedWidget& Child = Children[I];
			int32 ReturnLayerId = Child.Widget->Paint(NewPaintArgs, Child.Geometry, MyCullingRect, OutDrawElements,
				ChildLayerId, InWidgetStyle, bIsEnable);
			MaxLayerId = FMath::Max(ReturnLayerId, MaxLayerId);
		}
		ChildLayerId = MaxLayerId + 1;
	}
	

	if (bDragPin)
	{
		if(TSharedPtr<SBlueprintPinWidget> Pin = GetTypeSP<SBlueprintPinWidget>(CachedWidgetUnderMouseCursor))
		{
			FVector2D StartPoint = AllottedGeometry.AbsoluteToLocal(Pin->GetPaintSpaceGeometry().GetAbsolutePositionAtCoordinates(FVector2D(0.5f, 0.5f)));
		
			FVector2D Direction = GraphCoordToPanelCoord(CachedMouseGraphCoordinate) - StartPoint;
			FVector2D StartDir = FVector2D((Direction).X, 0);
			FVector2D EndDir = FVector2D((Direction).X, 0);
			FSlateDrawElement::MakeSpline(
				OutDrawElements, ChildLayerId, AllottedGeometry.ToPaintGeometry(),
				StartPoint, StartDir,
				GraphCoordToPanelCoord(CachedMouseGraphCoordinate), EndDir,
				Thickness
			);
			MaxLayerId = ChildLayerId;
			ChildLayerId++;			
		}
	}

	/*if(Connections.Num() > 0)
	{
		++MaxLayerId;
		for(auto& Connection : Connections)
		{
			FVector2D StartPinAbsolutePosition = Connection.Start->GetPaintSpaceGeometry()
				.GetAbsolutePositionAtCoordinates(FVector2D(0.5f, 0.5f));
			FVector2D EndPinAbsolutePosition = Connection.End->GetPaintSpaceGeometry()
				.GetAbsolutePositionAtCoordinates(FVector2D(0.5f, 0.5f));
			FVector2D StartPoint = AllottedGeometry.AbsoluteToLocal(StartPinAbsolutePosition);
			FVector2D EndPoint = AllottedGeometry.AbsoluteToLocal(EndPinAbsolutePosition);

			FSlateDrawElement::MakeSpline(
				OutDrawElements, MaxLayerId, AllottedGeometry.ToPaintGeometry(), 
				StartPoint, Connection.Start->GetDirection(), 
				EndPoint, Connection.End->GetDirection(),
				Thickness
				);
		}
	}*/

	//Marqee
	if(Marquee.bStartupMarquee)
	{
		const bool IsInDeadZone = TotalMouseDelta <= FSlateApplication::Get().GetDragTriggerDistance();
		static const FSlateBrush* MarqueeBrush = FSimpleBlueprintViewStyle::Get().GetBrush("MarqueeSelection");
		if(!IsInDeadZone)
		{		
			FGeometry MarqeeGeometry = AllottedGeometry.MakeChild(
				Marquee.CachedCorrectMarqueeRect.GetSize() * GetScale(), FSlateLayoutTransform(GraphCoordToPanelCoord(Marquee.CachedCorrectMarqueeRect.StartPoint))
			);

			FSlateDrawElement::MakeBox(
				OutDrawElements, ChildLayerId,
				MarqeeGeometry.ToPaintGeometry(),
				MarqueeBrush
			);

			MaxLayerId = ChildLayerId;
			ChildLayerId++;

			
		}
	}

	//ScaleText
	{
		const static FText ScaleTestText = LOCTEXT("BlueprintFramework.DrawScaleText", "Scale: 1.1   ");

		TSharedPtr<FSlateFontMeasure> FontMeasure = FSlateApplication::Get().GetRenderer()->GetFontMeasureService();
		const FVector2D TextOriginalSize = FontMeasure->Measure(ScaleTestText, ScaleTextFontInfo);

		//
		FGeometry TextGeometry = AllottedGeometry.MakeChild(TextOriginalSize,
			FSlateLayoutTransform(ScaleTextScale, FVector2D((AllottedGeometry.GetLocalSize().X - TextOriginalSize.X * ScaleTextScale), 0)));

		const FText Text = FText::Format(LOCTEXT("BlueprintFramework.DrawScaleText", "Scale: {0}"), FText::AsNumber(GetScale()));
		FSlateDrawElement::MakeText(
			OutDrawElements,
			ChildLayerId,
			TextGeometry.ToPaintGeometry(),
			Text,
			ScaleTextFontInfo,
			ESlateDrawEffect::None,
			FLinearColor::White
		);

		MaxLayerId = ChildLayerId;
		ChildLayerId++;
	}

	//Border
	if(bFocusThis)
	{
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



	return MaxLayerId;
}

void SBlueprintEntryPanelWidget::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	if (bNeedUpdateOnTick)
	{//其它原因
		bNeedUpdateOnTick = false;
		UpdateScale();
		UpdateViewOffset();
		UpdateOnTick(AllottedGeometry);
	}
	else
	{

		FVector2D AllottedGeometrySize = AllottedGeometry.GetAbsoluteSize();

		bool bScaleChanged = IsScaleChanged();
		bool bViewOffsetChanged = IsViewOffsetChanged();

		if (bScaleChanged)
		{
			UpdateScale();
		}

		if (bViewOffsetChanged)
		{
			UpdateViewOffset();
		}

		if (bScaleChanged || bViewOffsetChanged || !AllottedGeometrySize.Equals(LastAllottedGeometrySize))
		{
			UpdateOnTick(AllottedGeometry);
			LastAllottedGeometrySize = AllottedGeometrySize;
		}
	}

	if (Marquee.bStartupMarquee)
	{
		FArrangedChildren Children(EVisibility::Visible);
		ArrangeChildNodes(AllottedGeometry, Children);

		FSlateRect MarqueeRect = Marquee.CachedCorrectMarqueeRect.ToSlateRect();;

		for (int32 I = 0; I < Children.Num(); I++)
		{
			FArrangedWidget& Child = Children[I];
			FVector2D LeftTop = PanelCoordToGraphCoord(AllottedGeometry.AbsoluteToLocal(Child.Geometry.GetAbsolutePosition()));

			//Child.Geometry.GetLocalSize()存储的是GraphCoord情况下的大小
			FVector2D RightBottom = LeftTop + Child.Geometry.GetLocalSize();
			FSlateRect NodeRect(LeftTop, RightBottom);

			TSharedPtr<SBlueprintNodeWidget> Node = GetTypeSP<SBlueprintNodeWidget>(Child.Widget);

			if (FSlateRect::DoRectanglesIntersect(MarqueeRect, NodeRect))
			{
				this->AddSelectedNode(Node);
			}
			else if (Node->IsNodeSelected())
			{
				this->RemoveSelectedNode(Node);
			}
		}
	}
}

void SBlueprintEntryPanelWidget::AddSelectedNode(TSharedPtr<SBlueprintNodeWidget> InNode)
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

void SBlueprintEntryPanelWidget::RemoveSelectedNode(TSharedPtr<SBlueprintNodeWidget> InNode)
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

void SBlueprintEntryPanelWidget::ClearAllSelectedNodes()
{
	SelectedNodesManager->UpdateForSelectedNodes(FOnUpdateForSelectedNodes::CreateLambda(
		[](TSharedPtr<SBlueprintNodeWidget> InNode)
		{
			InNode->OnThisNodeNotSelected();
		}
	));
	SelectedNodesManager->ClearSelectedNodes();
}

void SBlueprintEntryPanelWidget::InvokeContextMenu()
{

}

void SBlueprintEntryPanelWidget::InvokeNodesContextMenu()
{
}

void SBlueprintEntryPanelWidget::ChangeScale(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{	
	//在二维坐标系中，缩放是沿着X Y轴进行的。
	//缩放时需要将图像平移到原点再进行缩放，否则图像会包含平移
	//缩放是以鼠标为为中心的，故其Panel坐标前后相同，Panel坐标对应的Graph坐标也要前后相同
	FVector2D PanelPositionBeforeChanged = MyGeometry.AbsoluteToLocal(MouseEvent.GetScreenSpacePosition());
	FVector2D GraphPositionBeforeChanged = PanelCoordToGraphCoord(PanelPositionBeforeChanged);
	
	float NumberPerTime = MouseEvent.GetWheelDelta() > 0 ? 0.1 : - 0.1;
	float NewScale = FMath::Clamp(GetScale() + NumberPerTime, 0.1f, 2.f);

	//推导出的公式
	// NewOffset = GraphCoord - (PanelCoord / NewScale)
	// OldGraphCoord = NewGraphCoord	要求缩放时，鼠标对应的图坐标不变，看着像是以该处的图坐标缩放
	// OldPanelCoord = NewPanelCoord	缩放时鼠标位置不变
	FVector2D NewViewOffset = GraphPositionBeforeChanged - PanelPositionBeforeChanged / NewScale;
	SetScale(NewScale);
	SetViewOffset(NewViewOffset);
}

void SBlueprintEntryPanelWidget::ArrangeChildNodes(const FGeometry& AllottedGeometry, FArrangedChildren& ArrangedChildren) const
{
	for (int32 I = 0; I < Nodes.Num(); I++)
	{
		const auto& Child = Nodes[I];
		
		//Child->GetDesiredSize()是GraphCoord情况下的大小
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

TSharedPtr<class IBlueprintWidgetBase> SBlueprintEntryPanelWidget::FindWidgetUnderMouse(const FGeometry& MyGeometry, 
	const FPointerEvent& MouseEvent) const
{
	TSharedPtr<class IBlueprintWidgetBase> Result = nullptr;

	FArrangedChildren Children(EVisibility::Visible);
	ArrangeChildNodes(MyGeometry, Children);

	int32 ChildIndex = FindChildUnderMouse(Children, MouseEvent);
	if (ChildIndex != INDEX_NONE)
	{
		//查看光标下是否时Pin
		FArrangedWidget& Child = Children[ChildIndex];
		FArrangedChildren PinsOfChild(EVisibility::Visible);
		GetTypeSP<SBlueprintNodeWidget>(Child.Widget)->ArrangeChildPins(Child.Geometry, PinsOfChild);
		int32 PinIndex = FindChildUnderMouse(PinsOfChild, MouseEvent);

		if (PinIndex != INDEX_NONE)
		{
			//说明光标下为Pin
			Result = GetTypeSP<SBlueprintPinWidget>(PinsOfChild[PinIndex].Widget);
		}
		else
		{
			//说明光标下为Node
			Result = GetTypeSP<SBlueprintNodeWidget>(Children[ChildIndex].Widget);
		}
	}
	return Result;
}

bool SBlueprintEntryPanelWidget::SupportsKeyboardFocus() const
{
	return true;
}

FReply SBlueprintEntryPanelWidget::OnFocusReceived(const FGeometry& MyGeometry, const FFocusEvent& InFocusEvent)
{
	bFocusThis = true;
	return FReply::Handled();
}

void SBlueprintEntryPanelWidget::OnFocusLost(const FFocusEvent& InFocusEvent)
{
	bFocusThis = false;
}

FReply SBlueprintEntryPanelWidget::OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	FReply Reply = Super::OnDrop(MyGeometry, DragDropEvent);
	

	if (TSharedPtr<FDragDropOperation> Op = DragDropEvent.GetOperation())
	{	
		if (Op->IsOfType<FFileDragDropOperation>() && OnGetDragDropInterface.IsBound())
		{
			TSharedPtr<IBlueprintViewDragDropInterface> Interface = OnGetDragDropInterface.Execute(Op);
			TSharedPtr<FBlueprintNodeEntry> NodeEntry = Interface->MakeNode();		

			NodeEntry->SetOffsetPosition(PanelCoordToGraphCoord(MyGeometry.AbsoluteToLocal(DragDropEvent.GetScreenSpacePosition())));
			GetPanelEntry()->AddChild(NodeEntry);
			return Reply.EndDragDrop();
		}
	}

	
	return Reply;
}

FReply SBlueprintEntryPanelWidget::OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& KeyEvent)
{
	FReply Reply = Super::OnKeyDown(MyGeometry, KeyEvent);

	if (KeyEvent.GetKey() == EKeys::Delete)
	{
		const TSet<TSharedPtr<SBlueprintNodeWidget>>& SelectedNodes = SelectedNodesManager->GetSelectedNodes();
		for (auto& Node : SelectedNodes)
		{
			GetPanelEntry()->DestoryChild(Node->GetNodeEntry());
		}
		SelectedNodesManager->ClearSelectedNodes();
		return Reply.Handled();
	}

	return Reply;
}

FReply SBlueprintEntryPanelWidget::OnKeyUp(const FGeometry& MyGeometry, const FKeyEvent& KeyEvent)
{
	FReply Reply = Super::OnKeyUp(MyGeometry, KeyEvent);


	return Reply;
}

FReply SBlueprintEntryPanelWidget::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	InitializeMouseOperation();

	CachedWidgetUnderMouseCursor = FindWidgetUnderMouse(MyGeometry, MouseEvent);

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
			if (CachedWidgetUnderMouseCursor->GetBlueprintWidgetType() == EBlueprintWidgetType::Pin)
			{
				bDragPin = true;
			}
		}
		else
		{//左键 + Framework -- 选区框
			Reply = FReply::Handled()
				.CaptureMouse(this->AsShared())
				.UseHighPrecisionMouseMovement(this->AsShared());
			//开始选区
			Marquee.bStartupMarquee = true;
			Marquee.CachedMarqueeRect.StartPoint = CachedMouseGraphCoordinate;
			Marquee.CachedMarqueeRect.EndPoint = CachedMouseGraphCoordinate;
			Marquee.CachedCorrectMarqueeRect = Marquee.CachedMarqueeRect;
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

FReply SBlueprintEntryPanelWidget::OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	//FReply Reply = Super::OnMouseMove(MyGeometry, MouseEvent);
	FReply Reply = FReply::Handled();

	bool IsRightMouseButtonDown = MouseEvent.IsMouseButtonDown(EKeys::RightMouseButton);
	bool IsLeftMouseButtonDown = MouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton);
	bool IsCtrlDown = MouseEvent.IsControlDown();
	FVector2D MousePositionGraphCoord = PanelCoordToGraphCoord(MyGeometry.AbsoluteToLocal(MouseEvent.GetScreenSpacePosition()));

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
				{//清理被选择的节点
					ClearAllSelectedNodes();
					Marquee.bhasClearedNode = true;
				}
				//选区
				Marquee.CachedMarqueeRect.UpdateEndPoint(MousePositionGraphCoord);
				Marquee.CachedCorrectMarqueeRect = GetCorrectMarqueeRect();
			}
			else
			{
				if (CachedWidgetUnderMouseCursor.IsValid())
				{
					if (CachedWidgetUnderMouseCursor->GetBlueprintWidgetType() == EBlueprintWidgetType::Node)
					{
						TSharedPtr<SBlueprintNodeWidget> Node = GetTypeSP<SBlueprintNodeWidget>(CachedWidgetUnderMouseCursor);
						if (!Node->IsNodeSelected())
						{
							if (!IsCtrlDown)
							{
								ClearAllSelectedNodes();
							}
							AddSelectedNode(Node);
						}
						MoveSelectedNodes(MyGeometry, MouseEvent);
					}
					else if (CachedWidgetUnderMouseCursor->GetBlueprintWidgetType() == EBlueprintWidgetType::Pin && !bCursorInDeadZone)
					{
						CachedMouseGraphCoordinate = PanelCoordToGraphCoord(MyGeometry.AbsoluteToLocal(MouseEvent.GetScreenSpacePosition()));
					}
				}
			}
		}
	}

	return Reply;
}

FReply SBlueprintEntryPanelWidget::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	FReply Reply = FReply::Unhandled();

	
	bool IsLeftMouseButtonEffecting = MouseEvent.GetEffectingButton() == EKeys::LeftMouseButton;
	bool IsRightMouseButtonEffecting = MouseEvent.GetEffectingButton() == EKeys::RightMouseButton;
	bool IsCtrlDown = MouseEvent.IsControlDown();
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
					if (CachedWidgetUnderMouseCursor->GetBlueprintWidgetType() == EBlueprintWidgetType::Node)
					{
						//光标左键点击节点，且没有位移
						TSharedPtr<SBlueprintNodeWidget> Node = GetTypeSP<SBlueprintNodeWidget>(CachedWidgetUnderMouseCursor);

						if(IsCtrlDown)
						{
							if (Node->IsNodeSelected())
							{
								RemoveSelectedNode(Node);
							}
							else
							{
								AddSelectedNode(Node);
							}
						}
						else
						{
							ClearAllSelectedNodes();
							//将光标下的节点设置为点击
							AddSelectedNode(Node);
						}
					}
					else if (CachedWidgetUnderMouseCursor->GetBlueprintWidgetType() == EBlueprintWidgetType::Pin)
					{
						bDragPin = false;
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
					if (CachedWidgetUnderMouseCursor->GetBlueprintWidgetType() == EBlueprintWidgetType::Node)
					{
						TSharedPtr<SBlueprintNodeWidget> Node = GetTypeSP<SBlueprintNodeWidget>(CachedWidgetUnderMouseCursor);
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
					else if (CachedWidgetUnderMouseCursor->GetBlueprintWidgetType() == EBlueprintWidgetType::Pin)
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
			if (IsLeftMouseButtonEffecting)
			{
				if(Marquee.bStartupMarquee)
				{
					//选区
					Marquee.bStartupMarquee = false;
				}
				else if (bDragPin)
				{
					bDragPin = false;
				}
			}

			
		}
	}
	return Reply;
}

FReply SBlueprintEntryPanelWidget::OnMouseWheel(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	FReply Reply = FReply::Unhandled();

	ChangeScale(MyGeometry, MouseEvent);

	return Reply;
}

void SBlueprintEntryPanelWidget::OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	Super::OnMouseEnter(MyGeometry, MouseEvent);
}

void SBlueprintEntryPanelWidget::OnMouseLeave(const FPointerEvent& MouseEvent)
{
	Super::OnMouseLeave(MouseEvent);
}

void SBlueprintEntryPanelWidget::OnArrangeChildren(const FGeometry& AllottedGeometry, FArrangedChildren& ArrangedChildren) const
{
	ArrangeChildNodes(AllottedGeometry, ArrangedChildren);
}

FVector2D SBlueprintEntryPanelWidget::ComputeDesiredSize(float) const
{
	return FVector2D(100, 100);
}

FChildren* SBlueprintEntryPanelWidget::GetChildren()
{
	return &Nodes;
}

bool SBlueprintEntryPanelWidget::InitializeSelf()
{
	check(GetEntry().IsValid());
	PanelEntry = GetTypeSP<FBlueprintEntryPanelEntry>(GetEntry());

	OnWindowActionHandle = FSlateApplication::Get().RegisterOnWindowActionNotification(FOnWindowAction::CreateSP(this, &SBlueprintEntryPanelWidget::OnWindowAction));
	
	/*FWidgetPath WidgetPath;

	if (FSlateApplication::Get().FindPathToWidget(this->AsShared(), WidgetPath))
	{
		for (auto& Temp : WidgetPath.)
		{

		}
	}*/

	return true;
}

bool SBlueprintEntryPanelWidget::DeinitializeSelf()
{
	PanelEntry = nullptr;
	FSlateApplication::Get().UnregisterOnWindowActionNotification(OnWindowActionHandle);

	return true;
}

TSharedPtr<SWidget> SBlueprintEntryPanelWidget::GetSWidget() noexcept
{
	return this->AsShared();
}

TSharedPtr<IBlueprintWidgetBase> SBlueprintEntryPanelWidget::GetWidgetBase() noexcept
{
	return GetTypeSP<IBlueprintWidgetBase, SBlueprintEntryPanelWidget>(this->AsShared());
}

int32 SBlueprintEntryPanelWidget::FindChildWidget(TSharedPtr<IBlueprintWidgetBase> InChildWidget) const
{
	check(CheckChildLink(InChildWidget, false));
	return Nodes.Find(GetTypeSR<SBlueprintNodeWidget>(InChildWidget));
}

void SBlueprintEntryPanelWidget::AddChildWidget(TSharedPtr<IBlueprintWidgetBase> InChildWidget)
{
	if (InChildWidget->GetBlueprintWidgetType() == EBlueprintWidgetType::Node)
	{
		Nodes.Add(GetTypeSR<SBlueprintNodeWidget>(InChildWidget));
	}
}

void SBlueprintEntryPanelWidget::RemoveChildWidget(TSharedPtr<IBlueprintWidgetBase> InChildWidget)
{
	if (InChildWidget->GetBlueprintWidgetType() == EBlueprintWidgetType::Node)
	{
		Nodes.Remove(GetTypeSR<SBlueprintNodeWidget>(InChildWidget));
	}
}

void SBlueprintEntryPanelWidget::ClearChildrenWidget()
{
	SelectedNodesManager->ClearSelectedNodes();
	Nodes.Empty(Nodes.Num());
}

void SBlueprintEntryPanelWidget::MoveSelectedNodes(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	FVector2D NewMouseGrpahCoord = PanelCoordToGraphCoord(MyGeometry.AbsoluteToLocal(MouseEvent.GetScreenSpacePosition()));
	FVector2D DeltaPos = NewMouseGrpahCoord - CachedMouseGraphCoordinate;
	CachedMouseGraphCoordinate = NewMouseGrpahCoord;
	SelectedNodesManager->UpdateForSelectedNodes(FOnUpdateForSelectedNodes::CreateLambda(
		[](TSharedPtr<SBlueprintNodeWidget> InNode, const FVector2D& DeltaPos)
		{
			if (InNode.IsValid())
			{
				//只改变逻辑坐标，具体的绘制会加上视口偏移
				InNode->SetOffsetPosition(InNode->GetOffsetPosition() + DeltaPos);
			}

		}, DeltaPos
	));
}

void SBlueprintEntryPanelWidget::MoveViewport(const FGeometry& MyGeometry, const FPointerEvent& PointerEvent)
{
	FVector2D ViewOffset = GetViewOffset();
	ViewOffset -= (PanelCoordToGraphCoord(MyGeometry.AbsoluteToLocal(PointerEvent.GetScreenSpacePosition()))
		- CachedMouseGraphCoordinate);
	SetViewOffset(ViewOffset);
}

bool SBlueprintEntryPanelWidget::OnWindowAction(const TSharedRef<FGenericWindow>&, EWindowAction::Type InActionType)
{
	switch (InActionType)
	{
	case EWindowAction::Maximize:
	case EWindowAction::Restore:
	{
		bNeedUpdateOnTick = true;
		break;
	}
	case EWindowAction::ClickedNonClientArea:
	case EWindowAction::WindowMenu:
	default:
		break;
	}
	return false;
}

void SBlueprintEntryPanelWidget::OnWidgetContainerSizeChanged()
{
}

void SBlueprintEntryPanelWidget::OnParentTabActivated(TSharedRef<SDockTab> InTab, ETabActivationCause InCause)
{
	bNeedUpdateOnTick = true;
}

FVector2D SBlueprintEntryPanelWidget::GraphCoordToPanelCoord(const FVector2D& GraphSpaceCoordinate) const
{
	return (GraphSpaceCoordinate - GetViewOffset()) * GetScale();
}

FVector2D SBlueprintEntryPanelWidget::PanelCoordToGraphCoord(const FVector2D& PanelSpaceCoordinate) const
{
	return PanelSpaceCoordinate / GetScale() + GetViewOffset();
}

FMarqueeRect SBlueprintEntryPanelWidget::GetCorrectMarqueeRect() const
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

void SBlueprintEntryPanelWidget::UpdateGridPoint(const FGeometry& AllottedGeometry)
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
	{	

		//X不变，Y变换
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

void SBlueprintEntryPanelWidget::UpdateOnTick(const FGeometry& AllottedGeometry)
{
	UpdateGridPoint(AllottedGeometry);
}

#undef LOCTEXT_NAMESPACE

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

