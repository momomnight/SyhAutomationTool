#pragma once


#include "Widgets/Views/STreeView.h"
#include "FileTreeType.h"

class SIMPLESLATEFILETREE_API SFileTreeView : public STreeView<TSharedPtr<SlateFileTree::FFileTreeBase>>
{
	using Super = STreeView<TSharedPtr<SlateFileTree::FFileTreeBase>>;
public:
	SLATE_BEGIN_ARGS(SFileTreeView){}

	SLATE_EVENT(FOnGenerateRow, OnGenerateRow)
	SLATE_EVENT(FOnGetChildren, OnGetChildren)
	SLATE_ARGUMENT(const TArray<TSharedPtr<SlateFileTree::FFileTreeBase>>*, TreeItemsSource)
	SLATE_EVENT(FOnExpansionChanged, OnExpansionChanged)
	SLATE_ARGUMENT(TSharedPtr<SScrollBar>, ExternalScrollbar)

	SLATE_END_ARGS()


	void Construct(const FArguments& InArgs);
	void OpenContextMenu(const FDragDropEvent& PointerEvent);
	void StartDragDrop();
	void EndDragDrop();
	bool IsDragDroping();

public:

	TSharedPtr<SWidget> OnContextMenuOpening();
	
	
};


