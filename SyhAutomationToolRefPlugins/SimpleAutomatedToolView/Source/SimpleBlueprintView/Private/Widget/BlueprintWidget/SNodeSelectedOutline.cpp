#include "Widget/BlueprintWidget/SNodeSelectedOutline.h"




#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

void SNodeSelectedOutline::Construct(const FArguments& InArgs)
{
}

int32 SNodeSelectedOutline::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, 
	const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, 
	const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	return Super::OnPaint(Args, AllottedGeometry, MyCullingRect, OutDrawElements, 
		LayerId, InWidgetStyle, bParentEnabled);
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

