#pragma once
#include "FileTreeEvent.h"
#include "Misc/EnumClassFlags.h"
#include "FileTreeTool.h"


enum class EShowMark
{
	None = 0,
	Show = 1,
	MultiplyFile = 1 << 1,
	SingleFile = 1 << 2,
};
ENUM_CLASS_FLAGS(EShowMark);

struct SIMPLESLATEFILETREE_API FFileTreeMenuGenerationInfo
{
	TSharedPtr<FUICommandInfo> CommandInfo;
	FSpawnMenuEntry Spawner;
	FUIAction UIAction;
	FUIActionGenerator UIActionGenerator;
	EShowMark ShowMark;
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
	TSharedPtr<SWidget> MakeWidget(FMenuBuilder& InBuilder, EShowMark Filter);
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
	static FUIActionGenerator GenerateRename();
	static FUIActionGenerator GenerateDelete();
	static FUIActionGenerator GenerateCopyTo();
	static FUIActionGenerator GenerateMoveTo();
	static FUIActionGenerator GenerateCopy();
	static FUIActionGenerator GenerateCut();
	static FUIActionGenerator GeneratePaste();
	static FUIActionGenerator GenerateDuplicate();
};
