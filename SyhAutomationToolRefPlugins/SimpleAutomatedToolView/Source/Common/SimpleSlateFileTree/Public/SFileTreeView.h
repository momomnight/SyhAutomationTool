#pragma once


#include "Widgets/Views/STreeView.h"
//#include "FileTreeType.h"
#include "FileTreeTypeFwd.h"
#include "FileTreeCommand.h"

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
	SLATE_EVENT(FOnRefreshFileTree, OnRefreshFileTree)

	SLATE_END_ARGS()

	SFileTreeView();

	void Construct(const FArguments& InArgs);
	//给拖拽使用
	void OpenContextMenu(const FDragDropEvent& PointerEvent);
	void StartDragDrop();
	void EndDragDrop(TWeakPtr<SlateFileTree::FFileTreeBase> InFileNode);
	//某些时候拖拽失败，此函数用于这种情况
	void EndDragDrop();
	bool IsDragDroping();

	void ExecuteCode(SlateFileTree::EFileExecutionCode InExecCode);
	void SetCommandShowMark(EShowMark InMark, const FText& InCommandName);
	void EraseCommandShowMark(EShowMark InMark, const FText& InCommandName);
	void RefreshFileTree(TSharedPtr<SlateFileTree::FFileTreeBase> InFileNode);

public:
	TSharedPtr<SWidget> OnContextMenuOpening();
protected:
	FOnRefreshFileTree OnRefreshFileTree;
private:
	class FFileTreeContextMenu* LogicImp;
};


