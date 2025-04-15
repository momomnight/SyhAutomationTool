#pragma once
#include "FileTreeEvent.h"
#include "FileTreeTool.h"
#include "Misc/LazySingleton.h"

struct SIMPLESLATEFILETREE_API FFileTreeMenuGenerationInfo
{
	TSharedPtr<FUICommandInfo> CommandInfo;
	FSpawnMenuEntry Spawner;
	FUIAction UIAction;
	FUIActionGenerator UIActionGenerator;

	FName ExtensionHook;
	FText Label;
	FText ToolTip;
	FSlateIcon Icon;
	FName TutorialHighlightName;
};

struct SIMPLESLATEFILETREE_API FFileTreeMenuSectionInfo
{
	FFileTreeMenuSectionInfo(const FName& InSection, const FText& InSectionHeadingText = FText::GetEmpty()) :
		Section(InSection), SectionHeadingText(InSectionHeadingText){}
	TSharedPtr<SWidget> MakeWidget(FMenuBuilder& InBuilder);
	FName Section;
	FText SectionHeadingText;
	TMap<FText, FFileTreeMenuGenerationInfo> GenerationInfo;
};

struct SIMPLESLATEFILETREE_API FFileTreeContextMenuSpawners
{
	static FSpawnMenuEntry BuildButton(const FFileTreeMenuGenerationInfo& InGenerationInfo);
};

struct SIMPLESLATEFILETREE_API FFileTreeContextMenuUIActionSpawner
{
	static FUIActionGenerator GenerateOpen();
};
