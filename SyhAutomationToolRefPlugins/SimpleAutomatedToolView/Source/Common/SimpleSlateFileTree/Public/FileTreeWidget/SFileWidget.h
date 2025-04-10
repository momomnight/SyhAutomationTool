#pragma once


#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "FileTreeWidget/SFileTreeWidgetBase.h"


class SFileWidget : public SFileTreeWidgetBase
{
public:
	SLATE_BEGIN_ARGS(SFileWidget) {}
	SLATE_EVENT(FOnRightMouseKeyClick, OnRightMouseKeyClick)
	SLATE_EVENT(FOnLeftMouseKeyClick, OnLeftMouseKeyClick)
	SLATE_END_ARGS()

	void SIMPLESLATEFILETREE_API Construct(const FArguments& InArgs, TSharedPtr<SimpleSlateFileTree::FFileTree_File> InFile);
};