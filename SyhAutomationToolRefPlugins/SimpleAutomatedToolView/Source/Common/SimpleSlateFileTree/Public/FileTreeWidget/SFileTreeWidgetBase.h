#pragma once


#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "FileTreeEvent.h"


class SFileTreeWidgetBase : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SFileTreeWidgetBase) {}
	SLATE_EVENT(FOnRightMouseKeyClick, OnRightMouseKeyClick)
	SLATE_EVENT(FOnLeftMouseKeyClick, OnLeftMouseKeyClick)
	SLATE_END_ARGS()

	void SIMPLESLATEFILETREE_API Construct(const FArguments& InArgs, TSharedPtr<SimpleSlateFileTree::FFileTreeBase> InFile);
	virtual FReply SIMPLESLATEFILETREE_API OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	FReply OnClicked();

protected:
	void SetButtonClicked();
	TSharedPtr<class SButton> Button;
	TWeakPtr<SimpleSlateFileTree::FFileTreeBase> FileBase;

private:
	FOnRightMouseKeyClick OnRightMouseKeyClick;
	FOnLeftMouseKeyClick OnLeftMouseKeyClick;
};