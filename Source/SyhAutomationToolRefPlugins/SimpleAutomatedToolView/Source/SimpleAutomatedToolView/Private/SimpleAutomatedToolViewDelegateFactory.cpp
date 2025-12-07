#include "SimpleAutomatedToolViewDelegateFactory.h"
#include "ISlateReflectorModule.h"


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
				static ISlateReflectorModule* Reflector = &FModuleManager::LoadModuleChecked<ISlateReflectorModule>("SlateReflector");
				Reflector->DisplayWidgetReflector();
			}
		);
		return WidgetReflector;
	}
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

#undef LOCTEXT_NAMESPACE