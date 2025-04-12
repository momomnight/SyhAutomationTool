#pragma once


#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "FileTreeWidget/SFileTreeWidgetBase.h"
#include "FileTreeEvent.h"


class SFileWidget : public SFileTreeWidgetBase
{
public:
	SLATE_BEGIN_ARGS(SFileWidget) {}
	SLATE_EVENT(FOnGetCurrentContextMenuTransform, OnGetCurrentContextMenuTransform)
	SLATE_ARGUMENT(TSharedPtr<class SFileTreeContextMenu>, ContextMenu)
	SLATE_ARGUMENT(TSharedPtr<class SFileTreeDragDropContextMenu>, DragDropContextMenu)
	SLATE_END_ARGS()

	void SIMPLESLATEFILETREE_API Construct(const FArguments& InArgs, TSharedPtr<SimpleSlateFileTree::FFileTree_File> InFile);

};