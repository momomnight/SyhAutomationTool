#include "FileTree/Core/SFileTreeWidget.h"
#include "FileTree/DragDrop/FileDragDrop.h"

#define LOCTEXT_NAMESPACE "SFileTreeWidget"

SFileTreeWidget::SFileTreeWidget()
	:bIsDrag(false)
{

}

void SFileTreeWidget::Construct(const FArguments& InArgs, const SimpleSlateExtend::FFileList& FileList)
{
	OnClickedDelegate = InArgs._OnClickedDelegate;
	OnOneStringCliked = InArgs._OnOneStringCliked;
	OnGeometryDelegate = InArgs._OnGeometryDelegate;
	OnFileDragDelegate = InArgs._OnFileDragDelegate;
	OnDragDelegate = InArgs._OnDragDelegate;
	FullAssetPaths = FileList.FullFilename;
}

FReply SFileTreeWidget::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return FReply::Handled();
}

FReply SFileTreeWidget::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if (MouseEvent.GetEffectingButton() == EKeys::RightMouseButton || 
		MouseEvent.IsTouchEvent())
	{
		FReply Reply = FReply::Handled();
		TSharedPtr<SWidget> SlateWidgetDrag = this->AsShared();
		if (SlateWidgetDrag.IsValid())
		{
			Reply.DetectDrag(SlateWidgetDrag.ToSharedRef(), EKeys::RightMouseButton);

			return Reply;
		}
	}

	return FReply::Unhandled();
}

FReply SFileTreeWidget::OnDragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	ResetDrag(true);

	TSharedRef<FFileDragDrop> DragDropOperation = MakeShareable(new FFileDragDrop(this->AsShared()));
	return FReply::Handled().BeginDragDrop(DragDropOperation);
}

FReply SFileTreeWidget::OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	if (auto GridDragDrop = dynamic_cast<FFileDragDrop*>(DragDropEvent.GetOperation().Get()))
	{
		TSharedPtr<SFileTreeWidget> MyFileTreeWidget = GridDragDrop->GetDragObject<SFileTreeWidget>();
		if (MyFileTreeWidget.IsValid())
		{
			if (MyFileTreeWidget != this->AsShared())
			{
				SimpleSlateExtend::FFileDragDefinition From;
				From.Widget = MyFileTreeWidget;
				From.AssetPath = MyFileTreeWidget->FullAssetPaths;
				From.FileType = SimpleSlateExtend::GetFileTypeByString(From.AssetPath);

				SimpleSlateExtend::FFileDragDefinition To;
				To.Widget = this->AsShared();
				To.AssetPath = FullAssetPaths;
				To.FileType = SimpleSlateExtend::GetFileTypeByString(To.AssetPath);

				OnFileDragDelegate.ExecuteIfBound(MyGeometry,DragDropEvent,From,To);
			}

			MyFileTreeWidget->ResetDrag(false);
		}
	}
	else
	{
		OnDragDelegate.ExecuteIfBound(MyGeometry, DragDropEvent);
	}

	return FReply::Handled();
}

void SFileTreeWidget::ResetDrag(bool bNewRrag)
{
	bIsDrag = bNewRrag;
	SetEnabled(!bNewRrag);
}

#undef LOCTEXT_NAMESPACE