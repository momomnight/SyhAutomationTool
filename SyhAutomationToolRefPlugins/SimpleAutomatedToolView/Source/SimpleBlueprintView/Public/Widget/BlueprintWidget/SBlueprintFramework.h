#pragma once
#include "Widget/BlueprintWidget/Core/SBlueprintMoveableWidget.h"
#include "SimpleBlueprintViewType.h"
#include "Widgets/SPanel.h"
#include "SBlueprintNode.h"
#include "Framework/MarqueeRect.h"

class SIMPLEBLUEPRINTVIEW_API SBlueprintFramework : public SPanel
{
	using Super = SPanel;

public:
	SLATE_BEGIN_ARGS(SBlueprintFramework){}


	SLATE_END_ARGS()

	SBlueprintFramework();
	~SBlueprintFramework();
	void Construct(const FArguments& InArgs);

public:
	FVector2D GetViewOffset() const noexcept {return LastViewOffset;}
	float GetScale() const noexcept { return LastScale; }

	bool IsScaleChanged() { return NewScale != LastScale; }
	bool IsViewOffsetChanged() { return NewViewOffset != LastViewOffset; }
	
	float GetGridStepLength() const noexcept
	{
		//FMath::Frac(Scale)返回浮点数小数部分，采用Lerp避免剧烈波动
		return BasicStepLength * FMath::Lerp(0.5f, 1.f, FMath::Frac(GetScale()));
	}

	FVector2D SnapGrid(const FVector2D& InGraphPosition) const noexcept
	{
		const float GridInternalStepLengthGraphCoord = GetGridStepLength() / (GetScale() * GridSubdivision);
		//通过舍入进行就近捕捉
		return FVector2D(
			FMath::RoundToFloat(InGraphPosition.X / GridInternalStepLengthGraphCoord) * GridInternalStepLengthGraphCoord,
			FMath::RoundToFloat(InGraphPosition.Y / GridInternalStepLengthGraphCoord) * GridInternalStepLengthGraphCoord
		);
	}

	//根据缓存的StartPoint和EndPoint，获取正确的矩形
	//StartPoint和EndPoint都是Panel坐标，这样可以在Panel上绘制选区
	FMarqueeRect GetCorrectMarqueeRect() const;

	//GraphCoord代表逻辑坐标，PanelCoord代表视口坐标，OffsetPosition代表Widget左上角相对于逻辑坐标原点的偏移
	FVector2D GraphCoordToPanelCoord(const FVector2D& GraphSpaceCoordinate) const;
	FVector2D PanelCoordToGraphCoord(const FVector2D& PanelSpaceCoordinate) const;


public:
	static constexpr float BasicStepLength = 200;
	static constexpr float GridSubdivision = 8.f;
	static constexpr FLinearColor GridColor = FLinearColor(1.f, 1.f, 1.f);
	static constexpr FLinearColor InternalGridColor = FLinearColor(0, 0, 0);
	static constexpr float Thickness = 2.f;

public:
	// Start of SWidget interface
	virtual FReply OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override;
	virtual FReply OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& KeyEvent) override;
	virtual FReply OnKeyUp(const FGeometry& MyGeometry, const FKeyEvent& KeyEvent) override;
	virtual FReply OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual FReply OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual FReply OnMouseWheel(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual void OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual void OnMouseLeave(const FPointerEvent& MouseEvent) override;

	virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry,
		const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId,
		const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime);

	// End of SWidget interface

	// SPanel interface
	virtual void OnArrangeChildren(const FGeometry& AllottedGeometry, FArrangedChildren& ArrangedChildren) const override;
	virtual FVector2D ComputeDesiredSize(float) const override;
	virtual FChildren* GetChildren() override;
	// End of SPanel interface


public:
	void BuildSlot(TSharedPtr<SWidget> InWidget);
	void BuildBlueprintNodeSlot();
	void AddSlot(TSharedPtr<SWidget>& InWidget);

	void MoveSelectedNodes(const FGeometry& MyGeometry, const FPointerEvent& PointerEvent);
	void MoveViewport(const FGeometry& MyGeometry, const FPointerEvent& PointerEvent);

public:
	void ArrangeChildNodes(const FGeometry& AllottedGeometry, FArrangedChildren& ArrangedChildren) const;

	void AddSelectedNode(TSharedPtr<class SBlueprintNode> InNode) const;
	void RemoveSelectedNode(TSharedPtr<class SBlueprintNode> InNode) const;
	void ClearAllSelectedNodes();

	void InvokeContextMenu();
	void InvokeNodesContextMenu();

protected:
	void InitializeMouseOperation()
	{
		CachedWidgetUnderMouseCursor = nullptr;
		CachedMouseGraphCoordinate = FVector2D(0.f);
		Marquee.bStartupMarquee = false;
		Marquee.bhasClearedNode = false;
		TotalMouseDelta = 0;
	}

	void ChangeScale(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);

	void OnTickNeedUpdate(const FGeometry& AllottedGeometry);
	void UpdateGridPoint(const FGeometry& AllottedGeometry);

protected:
	TArray<FBlueprintWidgetInfo> AllChildern;

	//相比于PanelChildren，TSlotLessChildren直接存储控件
	TSlotlessChildren<SBlueprintNode> Nodes;
	//TSlotlessChildren<SBlueprintConnection > Connections;
	TArray<TSharedPtr<SBlueprintNode>> NodesInViewPort;
	//TArray<TSharedPtr<class SBlueprintNode>> Nodes;
	//TArray<TSharedPtr<class SBlueprintConnection>> Connection;

	bool bLeftCtrl;
	//bool bFocusThis;

	TSharedPtr<class FNodesSelectedManager> SelectedNodesManager;

	//左键按压移动的选区
	float LastScale;
	float NewScale;

	//鼠标向右下拉，ViewOffset - Delta相当于视口往左上角跑
	//鼠标向左上拉，ViewOffset - Delta相当于视口往右下角跑
	//ViewOffset就是视口相对于逻辑坐标的偏移
	FVector2D LastViewOffset;
	FVector2D NewViewOffset;

	//
	FVector2D CachedMouseGraphCoordinate;
	TSharedPtr<class SBlueprintMoveableWidget> CachedWidgetUnderMouseCursor;

	struct
	{
		bool bStartupMarquee{ false };
		bool bhasClearedNode{ false };
		FMarqueeRect CachedMarqueeRect{FVector2D(0,0)};

	} Marquee;

	//用于计算死区
	float TotalMouseDelta;

	const FSlateBrush* NodeHighLightBox;

	TArray<TArray<FVector2D>> GridPoints;
};