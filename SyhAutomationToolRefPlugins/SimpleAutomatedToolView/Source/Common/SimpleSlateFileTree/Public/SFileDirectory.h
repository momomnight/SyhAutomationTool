#pragma once
#include "FileTreeType.h"
#include "Widgets/SCompoundWidget.h"
#include <atomic>

class SFileDirectory :public SCompoundWidget
{

public:
	SLATE_BEGIN_ARGS(SFileDirectory) {}

	SLATE_END_ARGS()

	SIMPLESLATEFILETREE_API SFileDirectory();

	void SIMPLESLATEFILETREE_API Construct(const FArguments& InArgs, const FString& InRootPath);

protected:
	void AsyncUpdateFileTree(TSharedPtr<SlateFileTree::FFileTreeBase> InNode);

	void ConstructChildern();

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