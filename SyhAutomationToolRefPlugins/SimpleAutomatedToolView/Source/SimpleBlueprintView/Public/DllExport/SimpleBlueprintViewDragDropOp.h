#pragma once
#include "Input/DragAndDrop.h"
#include "DllExport/SimpleBlueprintViewType.h"
#include "DllExport/SimpleBlueprintViewMethod.h"

class FSimpleBlueprintViewCreateNodeOp;
class FSimpleBlueprintViewDragDropPinOp;

class SIMPLEBLUEPRINTVIEW_API FSimpleBlueprintViewDragDropOp : public FDragDropOperation
{

public:
	FSimpleBlueprintViewDragDropOp(EBlueprintDragDropType InDragDropType) : DragDropType(InDragDropType){}

	DRAG_DROP_OPERATOR_TYPE(FSimpleBlueprintViewDragDropOp, FDragDropOperation);

	virtual TSharedPtr<FSimpleBlueprintViewCreateNodeOp> AsOperationOfCreateNode() { return nullptr;}

	virtual TSharedPtr<FSimpleBlueprintViewDragDropPinOp> AsOperationOfDragDropPin() { return nullptr; }

	EBlueprintDragDropType DragDropType;
};

class SIMPLEBLUEPRINTVIEW_API FSimpleBlueprintViewCreateNodeOp : public FSimpleBlueprintViewDragDropOp
{

public:
	FSimpleBlueprintViewCreateNodeOp() : FSimpleBlueprintViewDragDropOp(EBlueprintDragDropType::CreateNode){}

	DRAG_DROP_OPERATOR_TYPE(FSimpleBlueprintViewCreateNodeOp, FSimpleBlueprintViewDragDropOp);	

	virtual TSharedPtr<FSimpleBlueprintViewCreateNodeOp> AsOperationOfCreateNode() { return StaticCastSharedRef<FSimpleBlueprintViewCreateNodeOp>(this->AsShared()); }

	TArray<TSharedPtr<FSimpleBlueprintNodeSpawner>> PendingCreatedNodes;
};

class SIMPLEBLUEPRINTVIEW_API FSimpleBlueprintViewDragDropPinOp : public FSimpleBlueprintViewDragDropOp
{

public:
	FSimpleBlueprintViewDragDropPinOp() : FSimpleBlueprintViewDragDropOp(EBlueprintDragDropType::DragDropPin) {}

	DRAG_DROP_OPERATOR_TYPE(FSimpleBlueprintViewDragDropPinOp, FSimpleBlueprintViewDragDropOp);

	virtual TSharedPtr<FSimpleBlueprintViewDragDropPinOp> AsOperationOfDragDropPin() { return StaticCastSharedRef<FSimpleBlueprintViewDragDropPinOp>(this->AsShared()); }

	TSharedPtr<class SBlueprintPinWidget> DragPin;
};



