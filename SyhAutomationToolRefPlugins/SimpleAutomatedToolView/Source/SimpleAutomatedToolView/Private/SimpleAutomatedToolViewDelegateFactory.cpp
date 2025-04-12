#include "SimpleAutomatedToolViewDelegateFactory.h"
#include "ISlateReflectorModule.h"
#include "ContextMenu/SFileTreeContextMenu.h"
#include "Widget/DetailPanel/Automated/SAutomatedFileDirectory.h"
#include "SimpleAutomatedToolViewCommands.h"

#define LOCTEXT_NAMESPACE "SimpleAutomatedToolViewDelegateFactory"


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

namespace SimpleAutomatedToolViewDelegateFactory
{
	FMenuExtensionDelegate CreateMenuEntryDelegate_WidgetReflector(const FName& InExtensionHook, TSharedPtr<FUICommandInfo> InCommandInfo)
	{
		return FMenuExtensionDelegate::CreateLambda([](FMenuBuilder& InBuilder, FName InExtensionHook, TSharedPtr<FUICommandInfo> InCommandInfo)
			{
				InBuilder.BeginSection(InExtensionHook);
				InBuilder.AddMenuEntry(InCommandInfo);
				InBuilder.EndSection();
			}, InExtensionHook, InCommandInfo);
	}


	FUIAction CreateUIActionDelegate_WidgetReflector()
	{
		FUIAction WidgetReflector;
		WidgetReflector.ExecuteAction.BindLambda(
			[]()
			{
				ISlateReflectorModule& Module = FModuleManager::LoadModuleChecked<ISlateReflectorModule>("SlateReflector");
				Module.DisplayWidgetReflector();
			}
		);
		return WidgetReflector;
	}

	FOnFileTreeContextMenuClicked CreateFileTreeContextMenuDelegate_Delete()
	{
		FOnFileTreeContextMenuClicked ContextMenuClicked;
		ContextMenuClicked.BindLambda(
			[](TWeakPtr<SWidget> InWidget, TWeakPtr<SimpleSlateFileTree::FFileTreeBase> InFileTree)
			{

			}
		);
		return ContextMenuClicked;
	}

	FOnFileTreeContextMenuClicked CreateFileTreeContextMenuDelegate_Copy()
	{
		FOnFileTreeContextMenuClicked ContextMenuClicked;
		ContextMenuClicked.BindLambda(
			[](TWeakPtr<SWidget> InWidget, TWeakPtr<SimpleSlateFileTree::FFileTreeBase> InFileTree)
			{
				//情景菜单执行，会将其父级控件添加
				if (InWidget.IsValid())
				{
					if (TSharedPtr<SFileTreeContextMenu> ContextMenu = StaticCastSharedPtr<SFileTreeContextMenu>(InWidget.Pin()))
					{
						TMap<FText, FOnFileTreeContextMenuClicked> Temp;
						Temp = FSimpleAutomatedToolViewCommands::FileTree_RightMouseButtonClickContextMenuActions;
						Temp.Add(LOCTEXT("FileTree_ClickContextMenu_Paste", "Paste"), SimpleAutomatedToolViewDelegateFactory::CreateFileTreeContextMenuDelegate_Paste());

						ContextMenu->SetCommands(MoveTemp(Temp));
					}
				}

			}
		);
		return ContextMenuClicked;
	}

	FOnFileTreeContextMenuClicked CreateFileTreeContextMenuDelegate_Paste()
	{
		FOnFileTreeContextMenuClicked ContextMenuClicked;
		ContextMenuClicked.BindLambda(
			[](TWeakPtr<SWidget> InWidget, TWeakPtr<SimpleSlateFileTree::FFileTreeBase> InFileTree)
			{
				if(InWidget.IsValid())
				{
					if (TSharedPtr<SFileTreeContextMenu> ContextMenu = StaticCastSharedPtr<SFileTreeContextMenu>(InWidget.Pin()))
					{
						ContextMenu->SetCommands(FSimpleAutomatedToolViewCommands::FileTree_RightMouseButtonClickContextMenuActions);
					}
				}
			}
		);
		return ContextMenuClicked;
	}



	FOnFileTreeDragDropContextMenuClicked CreateFileTreeDragDropContextMenuDelegate_MoveTo()
	{
		FOnFileTreeDragDropContextMenuClicked ContextMenuClicked;
		ContextMenuClicked.BindLambda(
			[](TWeakPtr<SWidget> InWidget, SimpleSlateFileTree::FFileTreeDragDropDefinition InData)
			{

			}
		);
		return ContextMenuClicked;
	}

	FOnFileTreeDragDropContextMenuClicked CreateFileTreeDragDropContextMenuDelegate_CopyTo()
	{
		FOnFileTreeDragDropContextMenuClicked ContextMenuClicked;
		ContextMenuClicked.BindLambda(
			[](TWeakPtr<SWidget> InWidget, SimpleSlateFileTree::FFileTreeDragDropDefinition InData)
			{
				if (TSharedPtr<SAutomatedFileDirectory> AutomatedFileDirectory = StaticCastSharedPtr<SAutomatedFileDirectory>(InWidget.Pin()))
				{
					AutomatedFileDirectory->AsyncUpdateFileTree(nullptr);
				}
				//否则，等待定时器刷新
			}
		);
		return ContextMenuClicked;
	}
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

#undef LOCTEXT_NAMESPACE