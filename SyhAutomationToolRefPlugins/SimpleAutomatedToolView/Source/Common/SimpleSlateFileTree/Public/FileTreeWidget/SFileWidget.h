#pragma once
#include "FileTreeWidget/SFileTreeWidgetBase.h"


class SIMPLESLATEFILETREE_API SFileWidget : public SFileTreeWidgetBase
{
public:
	SLATE_BEGIN_ARGS(SFileWidget) {}

	//当我们需要使用FFileTreeDragDrop的派生类时，通过此代理由外部创建
	SLATE_EVENT(FOnCreateDragDropOp, OnCreateDragDropOp);

	SLATE_END_ARGS()

	void SetOnCreateDragDropOp(FOnCreateDragDropOp InEvent)
	{
		SFileTreeWidgetBase::SetOnCreateDragDropOp(InEvent);
	}
	FOnCreateDragDropOp GetOnCreateDragDropOp()
	{
		return SFileTreeWidgetBase::GetOnCreateDragDropOp();
	}

	void Construct(const FArguments& InArgs, const TSharedRef<class STableViewBase>& InOwnerTable, 
		TSharedPtr<SlateFileTree::FFileTree_File> InFileNode);
	
private:
	TSharedRef<SWidget> ConstructChild(TSharedPtr<SlateFileTree::FFileTreeBase> InFileNode);
};