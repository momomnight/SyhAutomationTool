#include "FileTreeCommand.h"
#include "FileTreeType.h"
#include "FileTreeOperation.h"

#define LOCTEXT_NAMESPACE "FileTreeCommand"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

TSharedPtr<SWidget> FFileTreeMenuSectionInfo::MakeWidget(FMenuBuilder& InBuilder)
{
	InBuilder.BeginSection(Section, SectionHeadingText);

	for (auto& Temp : GenerationInfo)
	{
		Temp.Value.Spawner.ExecuteIfBound(InBuilder);
	}

	InBuilder.EndSection();
	return InBuilder.MakeWidget();
}


FSpawnMenuEntry FFileTreeContextMenuSpawners::BuildButton(const FFileTreeMenuGenerationInfo& InGenerationInfo)
{
	return FSpawnMenuEntry::CreateLambda([](FMenuBuilder& InBuilder, FFileTreeMenuGenerationInfo InGenerationInfo)
		{
			InBuilder.AddMenuEntry(
				InGenerationInfo.CommandInfo,
				InGenerationInfo.ExtensionHook,
				InGenerationInfo.Label,
				InGenerationInfo.ToolTip,
				InGenerationInfo.Icon,
				InGenerationInfo.TutorialHighlightName);
		}, InGenerationInfo);
}

FUIActionGenerator FFileTreeContextMenuUIActionSpawner::GenerateOpen()
{
	return FUIActionGenerator::CreateLambda(
		[](TWeakPtr<SWidget> InWidget)
		{
			return FExecuteAction::CreateLambda(
				[](TWeakPtr<SWidget> InWidget)
				{
					int32 a = 1;
				},
				InWidget);
		}
	);
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

#undef LOCTEXT_NAMESPACE
