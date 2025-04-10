#include "SimpleAutomatedToolViewDelegateFactory.h"
#include "ISlateReflectorModule.h"

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
		FOnFileTreeContextMenuClicked ContextMenu_Delete;
		ContextMenu_Delete.BindLambda(
			[](TSharedPtr<SimpleSlateFileTree::FFileTreeBase> InFileTree)
			{
				
			}
		);
		return ContextMenu_Delete;
	}
}