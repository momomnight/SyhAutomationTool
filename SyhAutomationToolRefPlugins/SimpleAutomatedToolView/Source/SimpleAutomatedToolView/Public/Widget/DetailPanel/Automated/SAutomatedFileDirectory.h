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
	void AsyncUpdateFileTree(TSharedPtr<SlateFileTree::FFileTreeBase> InNode);

	FTransform2D GetCurrentContextMenuTransform(const FPointerEvent& MouseEvent);

protected:

	//STreeView
	TSharedRef<class ITableRow> OnGenerateRow(TSharedPtr<SlateFileTree::FFileTreeBase> InNode, 
		const TSharedRef<class STableViewBase>& InOwnerTable);

	void OnGetChildren(TSharedPtr<SlateFileTree::FFileTreeBase> InNode, 
		TArray<TSharedPtr<SlateFileTree::FFileTreeBase>>& OutChildren);

	void OnExpansionChanged(TSharedPtr<SlateFileTree::FFileTreeBase> InNode, bool bIsExpanded);
	void GetFileIcon(TSharedPtr<SWidget> Widget, bool bIsExpanded) const;
	void SetItemExpansion(TSharedPtr<SlateFileTree::FFileTreeBase> InNode);


	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual FReply OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);

private:
	TSharedPtr<STreeView<TSharedPtr<SlateFileTree::FFileTreeBase>>> FileTreeView;
	TArray<TSharedPtr<SlateFileTree::FFileTreeBase>> FileTreeDataSource;

	SlateFileTree::FFileTree RootPath;
	std::atomic_bool bIsLoading{false};
};