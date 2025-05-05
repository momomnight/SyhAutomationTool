#pragma once
#include "Widget/BlueprintWidget/Core/SBlueprintBaseWidget.h"
#include "SimpleBlueprintViewType.h"


class SIMPLEBLUEPRINTVIEW_API SBlueprintMoveableWidget : public SBlueprintBaseWidget
{
	using Super = SBlueprintBaseWidget;
public:
	SBlueprintMoveableWidget();

public:

	virtual void StartMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual void Move(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual void EndMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);


	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime);

	virtual void ClearAllState();

	void Update();

public:
	bool IsMoved() const noexcept { return bIsMoved;}
	bool DoesStartMove() const noexcept { return bStartMove; }
protected:
	bool bStartMove;
	bool bIsMoved;

	TWeakPtr<SWidget> MoveableWidget;


};