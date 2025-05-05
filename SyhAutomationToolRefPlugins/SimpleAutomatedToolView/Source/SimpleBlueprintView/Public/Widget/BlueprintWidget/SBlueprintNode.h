#pragma once
#include "Widget/BlueprintWidget/Core/SBlueprintMoveableWidget.h"
#include "SimpleBlueprintViewType.h"
#include "Widget/BlueprintWidget/BlueprintDelegate.h"

class SBlueprintFramework;
class SBlueprintPin;
class SIMPLEBLUEPRINTVIEW_API SBlueprintNode : public SBlueprintMoveableWidget
{
	using Super = SBlueprintMoveableWidget;
public:

	SLATE_BEGIN_ARGS(SBlueprintNode)
		:_PinsLayout(EBlueprintPinsLayout::Aggregation),
		_Outer(nullptr),
		_HighLightBox(nullptr)
		{}

	SLATE_ARGUMENT(EBlueprintPinsLayout, PinsLayout)

	SLATE_ARGUMENT(SBlueprintFramework*, Outer)

	SLATE_ARGUMENT(const FSlateBrush*, HighLightBox)

	SLATE_END_ARGS()

	SBlueprintNode();

	void Construct(const FArguments& InArgs);

public:
	void AddPin(const FString& InPinName, EBlueprintPinType PinViewType,
		EBlueprintExecutionDirection ConnectionDirection);
	FText GetNodeNameText() const;
	bool DoesContainThisPin(SBlueprintPin* InPin) const;

	bool IsNodeSelected() const noexcept { return bIsSelected;}

	virtual void OnThisNodeSelected();
	virtual void OnThisNodeNotSelected();

protected:

	void SetThisNodeSelected() noexcept { bIsSelected = true; }
	void CancelThisNodeSelected() noexcept { bIsSelected = false; }

	EBlueprintPinEdge CalculatePinDirection(EBlueprintPinType ViewType,
		EBlueprintExecutionDirection ConnectionDirection);
public:
	virtual void InvokeContextMenu() override;

public:

	virtual FReply OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override;

	int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry,
		const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements,
		int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const;
protected:
	TSharedPtr<SHorizontalBox> TopPins;
	TSharedPtr<SHorizontalBox> BottomPins;

	TSharedPtr<SVerticalBox> LeftPins;
	TSharedPtr<SVerticalBox> RightPins;

	TArray<TSharedPtr<SBlueprintPin>> AllPins;

	EBlueprintPinsLayout PinsLayout;
	TWeakPtr<SBlueprintFramework> Outer;

	bool bIsSelected;

	const struct FSlateBrush* HighLightBox;
};