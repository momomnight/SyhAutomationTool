#pragma once
#include "Base/Widget/Core/IBlueprintWidgetBase.h"
#include "Widgets/SPanel.h"
#include "Framework/MarqueeRect.h"
#include "Base/Widget/Node/SBlueprintNodeWidget.h"
#include "Base/Widget/Pin/SBlueprintPinWidget.h"

class IBlueprintViewDragDropInterface;
class FNodesSelectedManager;
struct FBlueprintEntryBase;
struct FBlueprintEntryPanelEntry;

DECLARE_DELEGATE_RetVal_OneParam(TSharedPtr<IBlueprintViewDragDropInterface>, FOnGetDragDropInterface, TSharedPtr<FDragDropOperation>)

class SIMPLEBLUEPRINTVIEW_API SBlueprintEntryPanelWidget : public SPanel, public IBlueprintWidgetBase
{
	using Super = SPanel;

public:
	SLATE_BEGIN_ARGS(SBlueprintEntryPanelWidget) :
		_DisplayName(TEXT(""))
		{}

	//当使用外部拖拽时，定义的拖拽类型必须继承IBlueprintViewDragDropInterface，实现相关接口
	//并且需要绑定从FDragDropOperation到IBlueprintViewDragDropInterface转换的代理
	SLATE_EVENT(FOnGetDragDropInterface, OnGetDragDropInterface);

	SLATE_ARGUMENT(FString, DisplayName)

	SLATE_END_ARGS()

	SBlueprintEntryPanelWidget();
	~SBlueprintEntryPanelWidget();
	void Construct(const FArguments& InArgs);

	void SetOnGetDragDropInterface(FOnGetDragDropInterface InEvent)
	{
		OnGetDragDropInterface = InEvent;
	}

	FOnGetDragDropInterface GetOnGetDragDropInterface()
	{
		return OnGetDragDropInterface;
	}

public:
	TSharedPtr<FBlueprintEntryPanelEntry> GetPanelEntry();
	const TSharedPtr<FBlueprintEntryPanelEntry> GetPanelEntry() const;

	FVector2D GetViewOffset() const;
	void SetViewOffset(const FVector2D& InViewOffset);
	bool IsViewOffsetChanged();
	void UpdateViewOffset();

	float GetScale() const;
	void SetScale(float InScale);
	bool IsScaleChanged();
	void UpdateScale();

	FVector2D GetMiddlePositionOfPanel() const;

	float GetGridStepLength() const noexcept
	{
		//FMath::Frac(Scale)返回浮点数小数部分，采用Lerp避免剧烈波动
		return BasicStepLengthPanelCoord * FMath::Lerp(0.5f, 1.f, FMath::Frac(GetScale()));
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
	static constexpr float BasicStepLengthPanelCoord = 200;
	static constexpr float GridSubdivision = 8.f;
	static constexpr FLinearColor GridColor = FLinearColor(1.f, 1.f, 1.f);
	static constexpr FLinearColor InternalGridColor = FLinearColor(0, 0, 0);
	static constexpr float Thickness = 2.f;
	static constexpr float ScaleTextScale = 2.f;//右上角Sclae的文本的缩放
	
public:
	// Start of SWidget interface
	virtual bool SupportsKeyboardFocus() const;
	virtual FReply OnFocusReceived(const FGeometry& MyGeometry, const FFocusEvent& InFocusEvent);
	virtual void OnFocusLost(const FFocusEvent& InFocusEvent);

	virtual FReply OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override;
	virtual FReply OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& KeyEvent) override;
	virtual FReply OnKeyUp(const FGeometry& MyGeometry, const FKeyEvent& KeyEvent) override;
	virtual FReply OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual FReply OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual FReply OnMouseWheel(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual void OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual void OnMouseLeave(const FPointerEvent& MouseEvent) override;

	//OnPaint使用的PaintSpaceGeometry，这是相对于窗口的几何体
	virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry,
		const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId,
		const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime);

	// End of SWidget interface

	// Start of SPanel interface
	virtual void OnArrangeChildren(const FGeometry& AllottedGeometry, FArrangedChildren& ArrangedChildren) const override;
	virtual FVector2D ComputeDesiredSize(float) const override;
	virtual FChildren* GetChildren() override;
	// End of SPanel interface

	// Start of IBlueprintWidgetBase interface
	virtual EBlueprintWidgetType GetBlueprintWidgetType() const noexcept override { return EBlueprintWidgetType::Panel; }

	virtual TSharedPtr<SWidget> GetSWidget() noexcept override;
	virtual TSharedPtr<IBlueprintWidgetBase> GetWidgetBase() noexcept override;

	virtual bool IsRoot() const noexcept override { return true; }

private:
	virtual bool InitializeSelf() override;
	virtual bool DeinitializeSelf() override;

	virtual int32 FindChildWidget(TSharedPtr<IBlueprintWidgetBase>) const override;
	virtual void AddChildWidget(TSharedPtr<IBlueprintWidgetBase>) override;
	virtual void RemoveChildWidget(TSharedPtr<IBlueprintWidgetBase>) override;
	virtual void ClearChildrenWidget() override;

	// End of IBlueprintWidgetBase interface

public:
	//void BuildSlot(TSharedPtr<SWidget> InWidget);
	//void BuildBlueprintNodeSlot();
	//void AddSlot(TSharedPtr<SWidget>& InWidget);

	void MoveSelectedNodes(const FGeometry& MyGeometry, const FPointerEvent& PointerEvent);
	void MoveViewport(const FGeometry& MyGeometry, const FPointerEvent& PointerEvent);
	bool OnWindowAction(const TSharedRef<FGenericWindow>&, EWindowAction::Type);
	void OnWidgetContainerSizeChanged();
	void OnParentTabActivated(TSharedRef<SDockTab>, ETabActivationCause);
public:
	void ArrangeChildNodes(const FGeometry& AllottedGeometry, FArrangedChildren& ArrangedChildren) const;
	TSharedPtr<class IBlueprintWidgetBase> FindWidgetUnderMouse(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) const;

	void AddSelectedNode(TSharedPtr<class SBlueprintNodeWidget> InNode);
	void RemoveSelectedNode(TSharedPtr<class SBlueprintNodeWidget> InNode);
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

	void UpdateOnTick(const FGeometry& AllottedGeometry);
	void UpdateGridPoint(const FGeometry& AllottedGeometry);

protected:
	TSlotlessChildren<SBlueprintNodeWidget> Nodes;

	struct FBlueprintConnection
	{
		TSharedPtr<SBlueprintPinWidget> Start{ nullptr };
		TSharedPtr<SBlueprintPinWidget> End{ nullptr };
	};
	TArray<FBlueprintConnection> Connections{};

	bool bDragPin{ false };

	TSharedPtr<FNodesSelectedManager> SelectedNodesManager{ nullptr };

	//
	FVector2D CachedMouseGraphCoordinate{ EForceInit::ForceInitToZero };
	TSharedPtr<class IBlueprintWidgetBase> CachedWidgetUnderMouseCursor{nullptr};

	//可能是不正确的，需要GetCorrectMarqueeRect()
	//使用GraphCoord
	struct FBlueprintMarquee
	{
		bool bStartupMarquee{ false };
		bool bhasClearedNode{ false };
		FMarqueeRect CachedMarqueeRect{FVector2D(EForceInit::ForceInitToZero)};
		FMarqueeRect CachedCorrectMarqueeRect{ FVector2D(EForceInit::ForceInitToZero) };
	};
	FBlueprintMarquee Marquee{};

	//用于计算死区
	float TotalMouseDelta{0.f};

	TArray<TArray<FVector2D>> GridPoints{};

	FSlateFontInfo ScaleTextFontInfo{};

	bool bFocusThis{false};

	//在OnTick执行一次更新
	bool bNeedUpdateOnTick{ false };

	//EBlueprintExecutionDirection ExecutionDirection{ EBlueprintExecutionDirection::LeftToRight};
	TSharedPtr<FBlueprintEntryPanelEntry> PanelEntry{nullptr};

	FVector2D LastAllottedGeometrySize{0, 0};

protected:
	FOnGetDragDropInterface OnGetDragDropInterface;

	FDelegateHandle OnWindowActionHandle;
};