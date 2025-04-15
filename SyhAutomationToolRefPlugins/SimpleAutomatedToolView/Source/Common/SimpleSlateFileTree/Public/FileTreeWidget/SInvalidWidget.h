#pragma once
#include "FileTreeWidget/SFileTreeWidgetBase.h"


class SIMPLESLATEFILETREE_API SInvalidWidget : public SFileTreeWidgetBase
{
public:
	SLATE_BEGIN_ARGS(SInvalidWidget) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, const TSharedRef<class STableViewBase>& InOwnerTable, 
		TSharedPtr<SlateFileTree::FFileTree_Invalid> InFileNode);
private:
	virtual TSharedRef<SWidget> ConstructChild(TSharedPtr<SlateFileTree::FFileTreeBase> InFileNode) override;
};