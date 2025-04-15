#include "ContextMenu/FileTreeContextMenu.h"
#include "FileTreeMenuCommands.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

bool FFileTreeContextMenu::bIsDragDroping = false;

void FFileTreeContextMenu::InitializeContextMenu(TWeakPtr<SWidget> FileTreeView)
{
	for (auto& Temp : FFileTreeMenuCommands::Get().MenuCommand_General->GenerationInfo)
	{
		if (Temp.Value.UIActionGenerator.IsBound())
		{
			Temp.Value.UIAction = Temp.Value.UIActionGenerator.Execute(FileTreeView);
		}
	}

	for (auto& Temp : FFileTreeMenuCommands::Get().MenuCommand_DragDrop->GenerationInfo)
	{
		if(Temp.Value.UIActionGenerator.IsBound())
		{
			Temp.Value.UIAction = Temp.Value.UIActionGenerator.Execute(FileTreeView);
		}
	}
}

TSharedPtr<SWidget> FFileTreeContextMenu::MakeWidget()
{
	FMenuBuilder Builder(true, FFileTreeMenuCommands::Get().PluginCommands);
	if(bIsDragDroping)
	{
		return FFileTreeMenuCommands::Get().MenuCommand_DragDrop->MakeWidget(Builder);
	}
	else
	{
		return FFileTreeMenuCommands::Get().MenuCommand_General->MakeWidget(Builder);
	}
}

bool FFileTreeContextMenu::IsDragDroping()
{
	return bIsDragDroping;
}

void FFileTreeContextMenu::StartDragDrop()
{
	bIsDragDroping = true;
}

void FFileTreeContextMenu::EndDragDrop()
{
	bIsDragDroping = false;
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT