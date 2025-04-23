#pragma once
#include "Widget/BlueprintWidget/Core/SBlueprintMoveableWidget.h"
#include "SimpleBlueprintViewType.h"

class SBlueprintFramework;
class SBlueprintPin;
class SIMPLEBLUEPRINTVIEW_API SBlueprintNode : public SBlueprintMoveableWidget
{
	using Super = SBlueprintMoveableWidget;
public:
	SLATE_BEGIN_ARGS(SBlueprintNode)
		:_PinsLayout(EBlueprintPinsLayout::Aggregation),
		_Framework(nullptr)
		{}

	SLATE_ARGUMENT(EBlueprintPinsLayout, PinsLayout)

	SLATE_ARGUMENT(SBlueprintFramework*, Framework)

	SLATE_END_ARGS()

	SBlueprintNode();

	void Construct(const FArguments& InArgs);

public:
	void AddPin(const FString& InPinName, EBlueprintPinType PinViewType,
		EBlueprintPinConnectionDirection ConnectionDirection);


	bool DoesContainThisPin(SBlueprintPin* InPin) const;

	virtual FReply OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override;

protected:
	void AddLeftRightPin(TSharedPtr<class SVerticalBox> InPins, const FString& InPinName, 
		EBlueprintPinType PinViewType, EBlueprintPinConnectionDirection Direction, 
		EVerticalAlignment Alignment, bool bAuto);
	void AddTopBottomPin(TSharedPtr<class SHorizontalBox> InPins, const FString& InPinName,
		EBlueprintPinType PinViewType, EBlueprintPinConnectionDirection ConnectionDirection,
		EHorizontalAlignment Alignment, bool bAuto);

	EBlueprintPinEdge CalculatePinDirection(EBlueprintPinType ViewType,
		EBlueprintPinConnectionDirection ConnectionDirection);

public:
	virtual void StartMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual void Move(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual void EndMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);

public:
	FText GetNodeNameText() const;


public:
	virtual FReply OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

	virtual FReply OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

protected:
	TSharedPtr<SHorizontalBox> TopPins;
	TSharedPtr<SHorizontalBox> BottomPins;

	TSharedPtr<SVerticalBox> LeftPins;
	TSharedPtr<SVerticalBox> RightPins;

	TArray<TSharedPtr<SBlueprintPin>> AllPins;

	EBlueprintPinsLayout PinsLayout;
	TWeakPtr<SBlueprintFramework> Framework;

};