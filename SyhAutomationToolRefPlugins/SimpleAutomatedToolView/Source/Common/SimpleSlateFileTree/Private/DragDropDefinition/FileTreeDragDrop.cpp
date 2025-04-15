#include "DragDropDefinition/FileTreeDragDrop.h"
#include "Widgets/Images/SImage.h"
#include "FileTreeWidget/SFileTreeWidgetBase.h"

FFileTreeDragDrop::FFileTreeDragDrop( TSharedPtr<SWidget> InDragWidget)
	: FDragDropOperation()
	, DragWidget(InDragWidget)
{
	FDragDropOperation::Construct();
}

TSharedPtr<SWidget> FFileTreeDragDrop::GetDefaultDecorator() const
{
	if (DragWidget.IsValid())
	{
		if(TSharedPtr<SFileTreeWidgetBase> DragDropWidget = StaticCastSharedPtr<SFileTreeWidgetBase>(DragWidget.Pin()))
		{
			return DragDropWidget->GetDragDropText();
		}
	}
	return SNew(SImage);
}

