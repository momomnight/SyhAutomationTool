#pragma once
#include "Widgets/SCompoundWidget.h"
#include "DllExport/SimpleBlueprintViewType.h"

class SBluerpintPin;
class SIMPLEBLUEPRINTVIEW_API SBlueprintConnection : public SCompoundWidget
{
	using Super = SCompoundWidget;

public:
	SBlueprintConnection();

	SLATE_BEGIN_ARGS(SBlueprintConnection) :
		_PointsRadius(1.f){}

	SLATE_ARGUMENT(float, PointsRadius);

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, const FVector2D& Start, const FVector2D& End);

	virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry,
		const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId,
		const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;

	class SControlledPoint : public SLeafWidget
	{
	public:
		SLATE_BEGIN_ARGS(SControlledPoint) :
			_Radius(1.f){}

		SLATE_ARGUMENT(float, Radius);

		SLATE_END_ARGS()
		void Construct(const FArguments& InArgs, const FVector2D& InPosition);

		virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, 
			FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;
		
		virtual FVector2D ComputeDesiredSize(float) const override { return FVector2D(Radius * 2, Radius * 2); }

		FVector2D GetPointPosition() const noexcept{ return PointPosition;}
		void SetPointPosition(const FVector2D& InPosition) noexcept { PointPosition = InPosition; }
	private:
		float Radius;
		FVector2D PointPosition;
	};

	void AddControlledPoint(const FVector2D& InPosition);

protected:
	float PointsRadius;
	TDoubleLinkedList<TSharedPtr<SControlledPoint>> Points;
};