#pragma once


#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "FileTreeEvent.h"
#include "ContextMenu/SFileTreeDragDropContextMenu.h"

class SIMPLESLATEFILETREE_API SFileTreeWidgetBase : public SButton
{
public:
	SLATE_BEGIN_ARGS(SFileTreeWidgetBase) {}

	SLATE_EVENT(FOnGetCurrentContextMenuTransform, OnGetCurrentContextMenuTransform)

	SLATE_ARGUMENT(TSharedPtr<class SFileTreeDragDropContextMenu>, DragDropContextMenu)

	SLATE_ARGUMENT(TSharedPtr<class SFileTreeContextMenu>, ContextMenu)

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, TSharedPtr<SimpleSlateFileTree::FFileTreeBase> InFile);
	virtual void ConstructChild();


	virtual FReply OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual FReply OnDragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual FReply OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent);
	FReply OnClicked();

	void SetOnGetCurrentContextMenuTransform(FOnGetCurrentContextMenuTransform InDelegate);
	
	TSharedPtr<SimpleSlateFileTree::FFileTreeBase> GetFileTreeData()
	{
		if (FileBase.IsValid())
		{
			return FileBase.Pin();
		}
		else
		{
			return nullptr;
		}
	}

protected:
	void InvokeContextMenu(const FPointerEvent& PointerEvent);
	void InvokeDragDropContextMenu(const FPointerEvent& PointerEvent, SimpleSlateFileTree::FFileTreeDragDropDefinition InData);

protected:
	TWeakPtr<struct SimpleSlateFileTree::FFileTreeBase> FileBase;
	TWeakPtr<class SFileTreeDragDropContextMenu> DragDropContextMenu;
	TWeakPtr<class SFileTreeContextMenu> ContextMenu;
private:
	FOnGetCurrentContextMenuTransform OnGetCurrentContextMenuTransform;

};