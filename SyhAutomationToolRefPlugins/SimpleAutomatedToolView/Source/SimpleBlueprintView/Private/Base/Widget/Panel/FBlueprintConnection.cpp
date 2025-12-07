#include "Base/Widget/Panel/FBlueprintConnection.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


SBlueprintConnection::SBlueprintConnection()
{
}

void SBlueprintConnection::Construct(const FArguments& InArgs, const FVector2D& Start, const FVector2D& End)
{
	PointsRadius = InArgs._PointsRadius;
	Points.AddHead(SNew(SControlledPoint, Start).Radius(PointsRadius));
	Points.AddTail(SNew(SControlledPoint, End).Radius(PointsRadius));
}

int32 SBlueprintConnection::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, 
	FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	return int32();
}

void SBlueprintConnection::AddControlledPoint(const FVector2D& InPosition)
{

}

void SBlueprintConnection::SControlledPoint::Construct(const FArguments& InArgs, const FVector2D& InPosition)
{
	PointPosition = InPosition;
	Radius = InArgs._Radius;
}

int32 SBlueprintConnection::SControlledPoint::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, 
	const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	return int32();
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

