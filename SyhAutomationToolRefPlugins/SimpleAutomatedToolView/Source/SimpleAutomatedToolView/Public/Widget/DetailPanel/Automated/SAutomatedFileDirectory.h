#pragma once
#include "Widget/Core/SAutomatedToolViewWidget.h"
#include "FileTree/SFolderWidget.h"


class SAutomatedFileDirectory : public SAutomatedToolViewWidget
{

public:
	SLATE_BEGIN_ARGS(SAutomatedFileDirectory) {}

	SLATE_ARGUMENT(FString, RootPath);

	SLATE_END_ARGS()

	SAutomatedFileDirectory();
	void Construct(const FArguments& InArgs);
	
protected:
	void OnClicked(const FString& InFileName);

	TSharedRef<class ITableRow> OnGenerateRow(TSharedPtr<SimpleSlateFileTree::FFileTreeBase> InNode, const TSharedRef<class STableViewBase>& InOwnerTable);
	void OnGetChildren(TSharedPtr<SimpleSlateFileTree::FFileTreeBase> InNode, TArray<TSharedPtr<SimpleSlateFileTree::FFileTreeBase>>& OutChildren);
	void OnExpansionChanged(TSharedPtr<SimpleSlateFileTree::FFileTreeBase> InNode, bool bIsExpanded);
	void GetFileIcon(TSharedPtr<SWidget> Widget, bool bIsExpanded) const;


private:
	TSharedPtr<STreeView<TSharedPtr<SimpleSlateFileTree::FFileTreeBase>>> FileTreeView;
	TArray<TSharedPtr<SimpleSlateFileTree::FFileTreeBase>> FileTreeDataSource;

	SimpleSlateFileTree::FFileTree RootPath;

	TSharedPtr<SScrollBar> HorizontalScrollBar;
	TSharedPtr<SScrollBar> VerticalScrollBar;

};