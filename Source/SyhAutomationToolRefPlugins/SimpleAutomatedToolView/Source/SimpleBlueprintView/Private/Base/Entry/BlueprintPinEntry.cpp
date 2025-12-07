#include "Base/Entry/BlueprintPinEntry.h"



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

FBlueprintPinEntry::FBlueprintPinEntry() : FBlueprintEntryBase()
{
}

FBlueprintPinEntry::FBlueprintPinEntry(EBlueprintPinType InPinType) : FBlueprintEntryBase(), PinType(InPinType)
{
}

bool FBlueprintPinEntry::InitializeSelf()
{
	return true;
}

void FBlueprintPinEntry::DeinitializeSelf()
{
}

const FPinWidgetFactory& FBlueprintPinEntry::GetWidgetFactory()
{
	static FPinWidgetFactory PinWidgetFactory;
	return PinWidgetFactory;
}

TArray<TSharedPtr<FBlueprintEntryBase>> FBlueprintPinEntry::GetChildren()
{
	return TArray<TSharedPtr<FBlueprintEntryBase>>();
}

TArray<TSharedPtr<const FBlueprintEntryBase>> FBlueprintPinEntry::GetChildren() const
{
	return TArray<TSharedPtr<const FBlueprintEntryBase>>();
}



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

