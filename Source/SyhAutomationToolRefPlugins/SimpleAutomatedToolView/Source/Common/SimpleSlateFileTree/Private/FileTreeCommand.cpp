#include "FileTreeCommand.h"
#include "FileTreeView/SFileTreeView.h"
#include "FileTreeMenuCommands.h"
#include "FileTreeView/FileTreeOperation.h"

#define LOCTEXT_NAMESPACE "FileTreeCommand"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


TSharedPtr<SWidget> FFileTreeMenuSectionInfo::MakeWidget(FMenuBuilder& InBuilder, EShowMark Filter)
{
	InBuilder.BeginSection(Section, SectionHeadingText);

	for (auto& Temp : GenerationInfo)
	{
		if (!!(Temp.Value.ShowMark & Filter))
		{
			if (!!(Temp.Value.ShowMark & EShowMark::Show))
			{
				Temp.Value.Spawner.ExecuteIfBound(InBuilder);
			}
		}
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
					if (!InWidget.IsValid()) return;

					if (TSharedPtr<SFileTreeView> FileTreeView = StaticCastSharedPtr<SFileTreeView>(InWidget.Pin()))
					{
						FileTreeView->ExecuteCode(SlateFileTree::FReadyMadeExecutionCode::Open);
					}
				},
				InWidget);
		}
	);
}

FUIActionGenerator FFileTreeContextMenuUIActionSpawner::GenerateRename()
{
	return FUIActionGenerator::CreateLambda(
		[](TWeakPtr<SWidget> InWidget)
		{
			return FExecuteAction::CreateLambda(
				[](TWeakPtr<SWidget> InWidget)
				{
					if(!InWidget.IsValid()) return;

					if (TSharedPtr<SFileTreeView> FileTreeView = StaticCastSharedPtr<SFileTreeView>(InWidget.Pin()))
					{					
						FileTreeView->ExecuteCode(SlateFileTree::FReadyMadeExecutionCode::Rename);
					}
				},
				InWidget);
		}
	);
}


FUIActionGenerator FFileTreeContextMenuUIActionSpawner::GenerateDelete()
{
	return FUIActionGenerator::CreateLambda(
		[](TWeakPtr<SWidget> InWidget)
		{
			return FExecuteAction::CreateLambda(
				[](TWeakPtr<SWidget> InWidget)
				{
					if (!InWidget.IsValid()) return;

					if (TSharedPtr<SFileTreeView> FileTreeView = StaticCastSharedPtr<SFileTreeView>(InWidget.Pin()))
					{
						FileTreeView->ExecuteCode(SlateFileTree::FReadyMadeExecutionCode::Delete);
					}
				},
				InWidget);
		}
	);
}

FUIActionGenerator FFileTreeContextMenuUIActionSpawner::GenerateCopyTo()
{
	return FUIActionGenerator::CreateLambda(
		[](TWeakPtr<SWidget> InWidget)
		{
			return FExecuteAction::CreateLambda(
				[](TWeakPtr<SWidget> InWidget)
				{
					if (!InWidget.IsValid()) return;

					if (TSharedPtr<SFileTreeView> FileTreeView = StaticCastSharedPtr<SFileTreeView>(InWidget.Pin()))
					{
						FileTreeView->ExecuteCode(SlateFileTree::FReadyMadeExecutionCode::CopyTo);
					}
				},
				InWidget);
		}
	);
}

FUIActionGenerator FFileTreeContextMenuUIActionSpawner::GenerateMoveTo()
{
	return FUIActionGenerator::CreateLambda(
		[](TWeakPtr<SWidget> InWidget)
		{
			return FExecuteAction::CreateLambda(
				[](TWeakPtr<SWidget> InWidget)
				{
					if (!InWidget.IsValid()) return;

					if (TSharedPtr<SFileTreeView> FileTreeView = StaticCastSharedPtr<SFileTreeView>(InWidget.Pin()))
					{
						FileTreeView->ExecuteCode(SlateFileTree::FReadyMadeExecutionCode::MoveTo);
					}
				},
				InWidget);
		}
	);
}

FUIActionGenerator FFileTreeContextMenuUIActionSpawner::GenerateDuplicate()
{
	return FUIActionGenerator::CreateLambda(
		[](TWeakPtr<SWidget> InWidget)
		{
			return FExecuteAction::CreateLambda(
				[](TWeakPtr<SWidget> InWidget)
				{
					if (!InWidget.IsValid()) return;

					if (TSharedPtr<SFileTreeView> FileTreeView = StaticCastSharedPtr<SFileTreeView>(InWidget.Pin()))
					{
						FileTreeView->ExecuteCode(SlateFileTree::FReadyMadeExecutionCode::Duplicate);
					}
				},
				InWidget);
		}
	);
}

FUIActionGenerator FFileTreeContextMenuUIActionSpawner::GenerateCopy()
{
	return FUIActionGenerator::CreateLambda(
		[](TWeakPtr<SWidget> InWidget)
		{
			return FExecuteAction::CreateLambda(
				[](TWeakPtr<SWidget> InWidget)
				{
					if(!InWidget.IsValid())
						return;

					if (TSharedPtr<SFileTreeView> FileTreeView = StaticCastSharedPtr<SFileTreeView>(InWidget.Pin()))
					{
						FileTreeView->ExecuteCode(SlateFileTree::FReadyMadeExecutionCode::Copy);
						FileTreeView->SetCommandShowMark(EShowMark::Show, MenuEntry_Paste.ToText());
					}
				},
				InWidget);
		}
	);
}

FUIActionGenerator FFileTreeContextMenuUIActionSpawner::GenerateCut()
{
	return FUIActionGenerator::CreateLambda(
		[](TWeakPtr<SWidget> InWidget)
		{
			return FExecuteAction::CreateLambda(
				[](TWeakPtr<SWidget> InWidget)
				{
					if (!InWidget.IsValid())
						return;

					if (TSharedPtr<SFileTreeView> FileTreeView = StaticCastSharedPtr<SFileTreeView>(InWidget.Pin()))
					{
						FileTreeView->ExecuteCode(SlateFileTree::FReadyMadeExecutionCode::Cut);
						FileTreeView->SetCommandShowMark(EShowMark::Show, MenuEntry_Paste.ToText());
					}
				},
				InWidget);
		}
	);
}

FUIActionGenerator FFileTreeContextMenuUIActionSpawner::GeneratePaste()
{
	return FUIActionGenerator::CreateLambda(
		[](TWeakPtr<SWidget> InWidget)
		{
			return FExecuteAction::CreateLambda(
				[](TWeakPtr<SWidget> InWidget)
				{
					if (!InWidget.IsValid())
						return;

					if (TSharedPtr<SFileTreeView> FileTreeView = StaticCastSharedPtr<SFileTreeView>(InWidget.Pin()))
					{
						FileTreeView->ExecuteCode(SlateFileTree::FReadyMadeExecutionCode::Paste);
						FileTreeView->EraseCommandShowMark(EShowMark::Show, MenuEntry_Paste.ToText());
					}
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
