#pragma once

#include "Widgets/SCompoundWidget.h"


class SIMPLEBLUEPRINTVIEW_API SNodeSelectedOutline : public SCompoundWidget
{
	using Super = SCompoundWidget;
public:
	SLATE_BEGIN_ARGS(SNodeSelectedOutline){}


	SLATE_END_ARGS()


	void Construct(const FArguments& InArgs);

	virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, 
		const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, 
		int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;


};