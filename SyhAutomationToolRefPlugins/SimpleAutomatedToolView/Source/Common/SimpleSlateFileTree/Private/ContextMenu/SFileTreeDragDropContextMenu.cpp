#include "ContextMenu/SFileTreeDragDropContextMenu.h"

void SFileTreeDragDropContextMenu::Construct(const FArguments& InArgs)
{
	Super::Construct(Super::FArguments().CommandMap(InArgs._CommandMap).ParentWidget(InArgs._ParentWidget));
}
