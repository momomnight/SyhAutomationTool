#pragma once
#include "Widget/Core/SAutomatedToolViewWidget.h"
#include "FileTreeType.h"
#include <atomic>

class SAutomatedFileDirectory : public SAutomatedToolViewWidget
{

public:
	SLATE_BEGIN_ARGS(SAutomatedFileDirectory) {}

	SLATE_ARGUMENT(FString, RootPath);

	SLATE_END_ARGS()

	SAutomatedFileDirectory();
	void Construct(const FArguments& InArgs);

	void ConstructChildern();


public:
	void AsyncUpdateFileTree(TSharedPtr<SimpleSlateFileTree::FFileTree_Folder> InNode);

	FTransform2D GetCurrentContextMenuTransform(const FPointerEvent& MouseEvent);

protected:

	//STreeView
	TSharedRef<class ITableRow> OnGenerateRow(TSharedPtr<SimpleSlateFileTree::FFileTreeBase> InNode, 
		const TSharedRef<class STableViewBase>& InOwnerTable);

	void OnGetChildren(TSharedPtr<SimpleSlateFileTree::FFileTreeBase> InNode, 
		TArray<TSharedPtr<SimpleSlateFileTree::FFileTreeBase>>& OutChildren);

	void OnExpansionChanged(TSharedPtr<SimpleSlateFileTree::FFileTreeBase> InNode, bool bIsExpanded);
	void GetFileIcon(TSharedPtr<SWidget> Widget, bool bIsExpanded) const;
	void SetItemExpansion(TSharedPtr<SimpleSlateFileTree::FFileTreeBase> InNode);


	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual FReply OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);

private:
	TSharedPtr<STreeView<TSharedPtr<SimpleSlateFileTree::FFileTreeBase>>> FileTreeView;
	TArray<TSharedPtr<SimpleSlateFileTree::FFileTreeBase>> FileTreeDataSource;

	SimpleSlateFileTree::FFileTree RootPath;
	std::atomic_bool bIsLoading{false};

	TSharedPtr<class SFileTreeContextMenu> FileContextMenuWidget;
	TSharedPtr<class SFileTreeContextMenu> FolderContextMenuWidget;
	TSharedPtr<class SFileTreeDragDropContextMenu> DragDropContextMenuWidget;
};