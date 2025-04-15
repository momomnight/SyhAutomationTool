#pragma once
#include "FileTreeWidget/SFileTreeWidgetBase.h"


class SIMPLESLATEFILETREE_API SNoneWidget : public SFileTreeWidgetBase
{
public:
	SLATE_BEGIN_ARGS(SNoneWidget) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, const TSharedRef<class STableViewBase>& InOwnerTable,
		TSharedPtr<SlateFileTree::FFileTree_None> InFileNode);
private:
	virtual TSharedRef<SWidget> ConstructChild(TSharedPtr<SlateFileTree::FFileTreeBase> InFileNode) override;
};