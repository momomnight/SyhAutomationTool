#pragma once


#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "FileTreeEvent.h"

class SFileTreeWidgetBase : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SFileTreeWidgetBase) {}

	//右键点击唤醒情景菜单
	SLATE_EVENT(FOnRightMouseKeyClick, OnRightMouseKeyClick)

	//左键点击，功能未定
	SLATE_EVENT(FOnLeftMouseKeyClick, OnLeftMouseKeyClick)

	//拖拽完成后，执行的代理
	SLATE_EVENT(FOnFileTreeWidgetDrag, OnFileTreeWidgetDrag)

	SLATE_END_ARGS()

	void SIMPLESLATEFILETREE_API Construct(const FArguments& InArgs, TSharedPtr<SimpleSlateFileTree::FFileTreeBase> InFile);
	virtual FReply SIMPLESLATEFILETREE_API OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual FReply SIMPLESLATEFILETREE_API OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual FReply SIMPLESLATEFILETREE_API OnDragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual FReply SIMPLESLATEFILETREE_API OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent);
	FReply OnClicked();

	void SetOnRightMouseKeyClick(FOnRightMouseKeyClick InDelegate);
	void SetOnLeftMouseKeyClick(FOnLeftMouseKeyClick InDelegate);
	void SetOnFileTreeWidgetDrag(FOnFileTreeWidgetDrag InDelegate);
protected:
	TSharedPtr<class SButton> Button;
	TWeakPtr<SimpleSlateFileTree::FFileTreeBase> FileBase;

private:
	FOnRightMouseKeyClick OnRightMouseKeyClick;
	FOnLeftMouseKeyClick OnLeftMouseKeyClick;
	FOnFileTreeWidgetDrag OnFileTreeWidgetDrag;
};