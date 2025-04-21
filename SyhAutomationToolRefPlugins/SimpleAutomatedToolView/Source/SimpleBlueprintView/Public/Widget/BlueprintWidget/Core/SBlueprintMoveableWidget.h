#pragma once
#include "Widget/BlueprintWidget/Core/SBlueprintBaseWidget.h"
#include "SimpleBlueprintViewType.h"


class SBlueprintMoveableWidget : public SBlueprintBaseWidget
{
	using Super = SBlueprintBaseWidget;
public:
	SBlueprintMoveableWidget();

public:
	static void StartMove(SBlueprintMoveableWidget* InWidget, const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
		{ InWidget->StartMove(MyGeometry, MouseEvent); }
	static void Move(SBlueprintMoveableWidget* InWidget, const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) 
		{ InWidget->Move(MyGeometry, MouseEvent); }
	static void EndMove(SBlueprintMoveableWidget* InWidget, const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) 
		{ InWidget->EndMove(MyGeometry, MouseEvent); }

	void StartMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	void Move(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	void EndMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);

public:
	virtual void OnMouseLeave(const FPointerEvent& MouseEvent);


protected:
	bool bStartMove;

	FVector2D AbsolutePosition;//防止抖动
	TWeakPtr<SWidget> ParentWidget;


};