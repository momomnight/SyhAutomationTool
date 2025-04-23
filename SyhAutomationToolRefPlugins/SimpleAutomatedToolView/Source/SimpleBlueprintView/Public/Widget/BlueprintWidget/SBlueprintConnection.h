#pragma once
#include "Widgets/SCompoundWidget.h"
#include "SimpleBlueprintViewType.h"

class SBluerpintPin;
class SBlueprintConnection : public SCompoundWidget
{
	using Super = SCompoundWidget;

public:
	SBlueprintConnection();

	SLATE_BEGIN_ARGS(SBlueprintConnection){}

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);
	
};