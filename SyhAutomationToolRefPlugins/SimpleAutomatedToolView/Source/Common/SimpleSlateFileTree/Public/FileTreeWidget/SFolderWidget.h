#pragma once
#include "FileTreeWidget/SFileTreeWidgetBase.h"


class SIMPLESLATEFILETREE_API SFolderWidget : public SFileTreeWidgetBase
{
public:
	SLATE_BEGIN_ARGS(SFolderWidget){}

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
		TSharedPtr<SlateFileTree::FFileTree_Folder> InFolder);
private:
	virtual TSharedRef<SWidget> ConstructChild(TSharedPtr<SlateFileTree::FFileTreeBase> InFileNode) override;
};