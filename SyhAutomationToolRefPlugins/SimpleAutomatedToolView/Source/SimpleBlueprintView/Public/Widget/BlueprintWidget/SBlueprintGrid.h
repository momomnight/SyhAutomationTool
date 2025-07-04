#pragma once

#include "Widgets/SCompoundWidget.h"
#include "SimpleBlueprintViewType.h"

class SBlueprintFramework;
class SBlueprintPin;
class SIMPLEBLUEPRINTVIEW_API SBlueprintGrid : public SCompoundWidget
{
	using Super = SCompoundWidget;

public:
	SLATE_BEGIN_ARGS(SBlueprintGrid){}

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);


};