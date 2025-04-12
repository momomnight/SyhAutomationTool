#pragma once


#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "FileTreeWidget/SFileTreeWidgetBase.h"


class SIMPLESLATEFILETREE_API SFolderWidget : public SFileTreeWidgetBase
{
public:
	SLATE_BEGIN_ARGS(SFolderWidget){}
	SLATE_EVENT(FOnGetCurrentContextMenuTransform, OnGetCurrentContextMenuTransform)

	SLATE_ARGUMENT(TSharedPtr<class SFileTreeDragDropContextMenu>, DragDropContextMenu)

	SLATE_ARGUMENT(TSharedPtr<class SFileTreeContextMenu>, ContextMenu)

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, TSharedPtr<SimpleSlateFileTree::FFileTree_Folder> InFolder);
	virtual void ConstructChild() override;
};