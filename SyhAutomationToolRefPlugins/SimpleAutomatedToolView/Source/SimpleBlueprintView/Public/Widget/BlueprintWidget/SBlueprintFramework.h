#pragma once
#include "Widget/BlueprintWidget/Core/SBlueprintMoveableWidget.h"
#include "SimpleBlueprintViewType.h"


class SBlueprintFramework : public SBlueprintMoveableWidget
{
	using Super = SBlueprintMoveableWidget;

public:
	SBlueprintFramework();
	

	SLATE_USER_ARGS(SBlueprintFramework){}



	SLATE_END_ARGS()


	void Construct(const FArguments& InArgs);
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime);


	void AddSelectedWidget(TSharedPtr<SWidget> InWidget);

	void StartMoveSelectedWidget(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	void MoveSelectedWidget(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	void EndMoveSelectedWidget(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);

public:
	virtual FReply OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& MouseEvent) override;

	virtual FReply OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& MouseEvent) override;

	virtual FReply OnKeyUp(const FGeometry& MyGeometry, const FKeyEvent& MouseEvent) override;

	virtual FReply OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

	virtual FReply OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

	virtual FReply OnMouseWheel(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	
	virtual void OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

	virtual void OnMouseLeave(const FPointerEvent& MouseEvent) override;


public:

	void BuildSlot(TSharedPtr<SWidget> InWidget);
	void BuildBlueprintNodeSlot();
	void AddSlot(TSharedPtr<SWidget>& InWidget);

	TSharedPtr<SWidget> GetCanvas() const;

public:
	void UpdateChildrenWidgets(TFunction<bool(TSharedRef<SBlueprintMoveableWidget>)> InMethod);

	void UpdateChildrenNodes(TSharedPtr<SWidget> InNode, TFunction<bool(class FBlueprintWidgetInfo&)> InMethod);


protected:

	TSharedPtr<class SConstraintCanvas> ConstraintCanvas;
	TArray<FBlueprintWidgetInfo> Nodes;

	bool bLeftCtrl;
	bool bSelectedBySelectionArea;

	//选择节点显示的高亮轮廓
	TSharedPtr<class SNodeSelectedOutline> SelectedWidget;
	//左键按压移动的选区
	//TSharedPtr<SNodeSelectionArea> SelectionArea;

};