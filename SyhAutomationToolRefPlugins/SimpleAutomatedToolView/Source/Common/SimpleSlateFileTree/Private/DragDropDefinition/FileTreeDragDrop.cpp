#include "DragDropDefinition/FileTreeDragDrop.h"
#include "Widgets/Images/SImage.h"

FFileTreeDragDrop::FFileTreeDragDrop( TSharedPtr<SWidget> InDragWidget)
	: FDragDropOperation()
	, DragWidget(InDragWidget)
{
	FDragDropOperation::Construct();
}

TSharedPtr<SWidget> FFileTreeDragDrop::GetDefaultDecorator() const
{
	return DragWidget.IsValid() ? DragWidget.Pin() : SNew(SImage);
}

