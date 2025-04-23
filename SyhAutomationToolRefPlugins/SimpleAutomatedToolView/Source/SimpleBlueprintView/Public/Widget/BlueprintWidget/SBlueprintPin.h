#pragma once
#include "Widgets/SCompoundWidget.h"
#include "SimpleBlueprintViewType.h"

class SBlueprintFramework;
class SBlueprintNode;
class SBlueprintConnection;

class SBlueprintPin : public SCompoundWidget
{
	using Super = SCompoundWidget;
public:
	SLATE_BEGIN_ARGS(SBlueprintPin)
		:_Framework(nullptr),
		_Owner(nullptr),
		_PinConnectionDirection(EBlueprintPinConnectionDirection::None),
		_PinEdge(EBlueprintPinEdge::None),
		_PinType(EBlueprintPinType::None)
		{}

	SLATE_ARGUMENT(SBlueprintFramework*, Framework)

	SLATE_ARGUMENT(SBlueprintNode*, Owner)

	SLATE_ARGUMENT(EBlueprintPinConnectionDirection, PinConnectionDirection)

	SLATE_ARGUMENT(EBlueprintPinEdge, PinEdge)

	SLATE_ARGUMENT(EBlueprintPinType, PinType)

	SLATE_ARGUMENT(FString, Name)

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

public:
	virtual FReply OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

	virtual FReply OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

	virtual FReply OnMouseButtonDoubleClick(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

	virtual FReply OnDragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

	virtual FReply OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override;


public:
	EBlueprintPinConnectionDirection GetPinConnectionDirection() const noexcept {return PinConnectionDirection;}
	EBlueprintPinEdge GetPinEdge() const noexcept { return PinEdge; }
	EBlueprintPinType GetPinType() const noexcept { return PinType; }



protected:
	TWeakPtr<SBlueprintFramework> Framework;
	TWeakPtr<SBlueprintNode> Owner;
	TWeakPtr<SBlueprintConnection> Connection;
	
	EBlueprintPinConnectionDirection PinConnectionDirection;
	EBlueprintPinEdge PinEdge;
	EBlueprintPinType PinType;

	FString Name;

};