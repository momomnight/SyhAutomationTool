#pragma once
#include "FileTreeWidget/SFileTreeWidgetBase.h"


class SIMPLESLATEFILETREE_API SFolderWidget : public SFileTreeWidgetBase
{
public:
	SLATE_BEGIN_ARGS(SFolderWidget){}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, const TSharedRef<class STableViewBase>& InOwnerTable, 
		TSharedPtr<SlateFileTree::FFileTree_Folder> InFolder);
private:
	virtual TSharedRef<SWidget> ConstructChild(TSharedPtr<SlateFileTree::FFileTreeBase> InFileNode) override;
};