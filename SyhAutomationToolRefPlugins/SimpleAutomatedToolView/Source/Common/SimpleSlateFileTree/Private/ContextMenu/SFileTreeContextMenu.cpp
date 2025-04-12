#include "ContextMenu/SFileTreeContextMenu.h"

void SFileTreeContextMenu::Construct(const FArguments& InArgs)
{
	Super::Construct(Super::FArguments().CommandMap(InArgs._CommandMap).ParentWidget(InArgs._ParentWidget));
}
