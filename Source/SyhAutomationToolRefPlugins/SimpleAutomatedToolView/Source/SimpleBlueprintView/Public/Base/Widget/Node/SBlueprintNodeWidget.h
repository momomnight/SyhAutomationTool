#pragma once
#include "Base/Widget/Core/IBlueprintWidgetBase.h"

class SBlueprintEntryPanelWidget;
class SBlueprintPinWidget;
struct FBlueprintNodeEntry;

class SIMPLEBLUEPRINTVIEW_API SBlueprintNodeWidget : public SCompoundWidget, public IBlueprintWidgetBase
{
	using Super = SCompoundWidget;
public:

	SLATE_BEGIN_ARGS(SBlueprintNodeWidget):
		_DisplayName(TEXT(""))
		{}

	SLATE_ARGUMENT(FString, DisplayName)

	SLATE_END_ARGS()

	SBlueprintNodeWidget();
	~SBlueprintNodeWidget();
	void Construct(const FArguments& InArgs);

public:
	constexpr static float BorderThicknessOnSelected = 3.f;

public:
	bool IsNodeSelected() const noexcept { return bIsSelected;}

	virtual void OnThisNodeSelected();
	virtual void OnThisNodeNotSelected();

protected:
	void SetThisNodeSelected() noexcept { bIsSelected = true; }
	void CancelThisNodeSelected() noexcept { bIsSelected = false; }

public:
	virtual void InvokeContextMenu();

public:
	FSlateColor GetTitleGloss() const;

	TSharedPtr<FBlueprintNodeEntry> GetNodeEntry();
	const TSharedPtr<FBlueprintNodeEntry> GetNodeEntry() const;

	void SetOffsetPosition(const FVector2D& InPos) noexcept;
	FVector2D GetOffsetPosition() const noexcept;

public:
	//此函数不用于Paint
	void ArrangeChildPins(const FGeometry& AllottedGeometry, FArrangedChildren& ArrangedChildren) const;


	//~ Begin IBlueprintWidgetBase

	virtual EBlueprintWidgetType GetBlueprintWidgetType() const noexcept override { return EBlueprintWidgetType::Node; }
	virtual TSharedPtr<SWidget> GetSWidget() noexcept override;
	virtual TSharedPtr<IBlueprintWidgetBase> GetWidgetBase() noexcept override;

private:
	virtual bool InitializeSelf() override;
	virtual bool DeinitializeSelf() override;

	virtual int32 FindChildWidget(TSharedPtr<IBlueprintWidgetBase> InChildWidget) const override;
	virtual void AddChildWidget(TSharedPtr<IBlueprintWidgetBase> InChildWidget) override;
	virtual void RemoveChildWidget(TSharedPtr<IBlueprintWidgetBase> InChildWidget) override;

	virtual void ClearChildrenWidget() override;
	//~ End IBlueprintWidgetBase

public:
	//~ Begin SWdiget
	virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry,
		const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements,
		int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;
	//~ End SWdiget

private:
	int32 FindChildWidget(TSharedPtr<SVerticalBox> InVerticalBox, TSharedPtr<IBlueprintWidgetBase> InChildWidget) const;
	int32 FindChildWidgetInsertIndex(TSharedPtr<SVerticalBox> InVerticalBox, EBlueprintPinType InPinType) const;
	void AddChildWidget(TSharedPtr<SVerticalBox> InVerticalBox, TSharedRef<SBlueprintPinWidget> InChildWidget);
	void RemoveChildWidget(TSharedPtr<SVerticalBox> InVerticalBox, TSharedPtr<SBlueprintPinWidget> InChildWidget);

protected:
	TSharedPtr<SVerticalBox> InputPins;
	TSharedPtr<SVerticalBox> OutputPins;

	bool bIsSelected;


protected:
	TSharedPtr<FBlueprintNodeEntry> NodeEntry;
	TSharedPtr<STextBlock> NodeRealNameWidget;


private:

	static FSlateFontInfo NodeDisplayNameFontInfo;
	static FSlateFontInfo NodeNameFontInfo;

};