#include "FileTreeWidget/SFileTreeWidgetBase.h"
#include "Widgets/Input/SButton.h"


void SFileTreeWidgetBase::Construct(const FArguments& InArgs, TSharedPtr<SimpleSlateFileTree::FFileTreeBase> InFileBase)
{
	FileBase = InFileBase;
	OnRightMouseKeyClick = InArgs._OnRightMouseKeyClick;
	OnLeftMouseKeyClick = InArgs._OnLeftMouseKeyClick;
	SetButtonClicked();
}


FReply SFileTreeWidgetBase::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	//左键无用，因为已经被Button处理了，如果需要左键，直接绑定Button
	FReply Reply = FReply::Unhandled();
	if (MouseEvent.GetEffectingButton() == EKeys::RightMouseButton)
	{
		Reply = OnRightMouseKeyClick.ExecuteIfBound(FileBase.Pin(), MyGeometry, MouseEvent) ? FReply::Handled() : FReply::Unhandled();
	}
	return Reply;
}

FReply SFileTreeWidgetBase::OnClicked()
{
	return OnLeftMouseKeyClick.ExecuteIfBound(FileBase.Pin()) ? FReply::Handled() : FReply::Unhandled();
}

void SFileTreeWidgetBase::SetButtonClicked()
{
	if (Button.IsValid())
	{
		Button->SetOnClicked(FOnClicked::CreateSP(this, &SFileTreeWidgetBase::OnClicked));
	}
}
