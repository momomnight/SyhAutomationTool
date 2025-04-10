#include "Widget/ContextMenu/SFileTreeContextMenu.h"

void SFileTreeContextMenu::Construct(const FArguments& InArgs)
{
	SContextMenuWidget<FFileTreeContextMenuData>::Construct(
		SContextMenuWidget<FFileTreeContextMenuData>::FArguments()
		.CommandMap(InArgs._CommandMap)
	);
}
