#pragma once


#include "Widgets/SCompoundWidget.h"


class SAutomatedToolViewWidget : public SCompoundWidget
{

public:
	SLATE_BEGIN_ARGS(SAutomatedToolViewWidget){}
	SLATE_END_ARGS()	
public:
	void Construct(const FArguments& InArgs);
	SAutomatedToolViewWidget();

};