#pragma once
#include "Widgets/Views/STableViewBase.h"
#include "FileTreeEvent.h"

class FFileTreeDragDrop;
class SFileTreeWidgetBase;

class SIMPLESLATEFILETREE_API SFileTreeWidgetBase : public STableRow<TSharedPtr<SlateFileTree::FFileTreeBase>>
{
	using Super = STableRow<TSharedPtr<SlateFileTree::FFileTreeBase>>;

public:
	SLATE_BEGIN_ARGS(SFileTreeWidgetBase) {}


	//当我们需要使用FFileTreeDragDrop的派生类时，通过此代理由外部创建
	SLATE_EVENT(FOnCreateDragDropOp, OnCreateDragDropOp);

	SLATE_END_ARGS()

	void SetOnCreateDragDropOp(FOnCreateDragDropOp InEvent);
	FOnCreateDragDropOp GetOnCreateDragDropOp();

	void Construct(const FArguments& InArgs, const TSharedRef<class STableViewBase>& InOwnerTable, TSharedPtr<SlateFileTree::FFileTreeBase> InFile);

	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual FReply DragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual FReply Drop(const FDragDropEvent& DragDropEvent);

	TSharedPtr<class STextBlock> GetDragDropText() const;
	TSharedPtr<class SFileTreeView> GetOwnerTable();
	TSharedPtr<SlateFileTree::FFileTreeBase> GetFileDataNode();

private:
	virtual TSharedRef<SWidget> ConstructChild(TSharedPtr<SlateFileTree::FFileTreeBase> InFileNode);

private:
	FOnCreateDragDropOp OnCreateDragDropOp;

protected:
	//用于拖拽显示
	TWeakPtr<class STextBlock> Text;
	TWeakPtr<SlateFileTree::FFileTreeBase> FileDataNode;
};