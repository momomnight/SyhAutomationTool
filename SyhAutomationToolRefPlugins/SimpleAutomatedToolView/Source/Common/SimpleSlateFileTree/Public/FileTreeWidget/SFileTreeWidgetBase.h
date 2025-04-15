#pragma once
#include "FileTreeEvent.h"
#include "Widgets/Views/STableViewBase.h"

class SIMPLESLATEFILETREE_API SFileTreeWidgetBase : public STableRow<TSharedPtr<SlateFileTree::FFileTreeBase>>
{
	using Super = STableRow<TSharedPtr<SlateFileTree::FFileTreeBase>>;

public:
	SLATE_BEGIN_ARGS(SFileTreeWidgetBase) {}

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, const TSharedRef<class STableViewBase>& InOwnerTable, TSharedPtr<SlateFileTree::FFileTreeBase> InFile);

	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual FReply DragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual FReply Drop(const FDragDropEvent& DragDropEvent);

	TSharedPtr<class STextBlock> GetDragDropText() const;
	TSharedPtr<class SFileTreeView> GetOwnerTable();

private:
	virtual TSharedRef<SWidget> ConstructChild(TSharedPtr<SlateFileTree::FFileTreeBase> InFileNode);

protected:
	//用于拖拽显示
	TWeakPtr<class STextBlock> Text;
};