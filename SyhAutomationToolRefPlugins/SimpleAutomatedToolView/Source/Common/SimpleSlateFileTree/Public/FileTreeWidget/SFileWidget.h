#pragma once
#include "FileTreeWidget/SFileTreeWidgetBase.h"


class SIMPLESLATEFILETREE_API SFileWidget : public SFileTreeWidgetBase
{
public:
	SLATE_BEGIN_ARGS(SFileWidget) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, const TSharedRef<class STableViewBase>& InOwnerTable, 
		TSharedPtr<SlateFileTree::FFileTree_File> InFileNode);
	
private:
	TSharedRef<SWidget> ConstructChild(TSharedPtr<SlateFileTree::FFileTreeBase> InFileNode);
};