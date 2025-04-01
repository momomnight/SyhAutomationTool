#pragma once


#include "Widgets/SCompoundWidget.h"


class SToolViewMainFrame : public SCompoundWidget
{

public:
	SLATE_BEGIN_ARGS(SToolViewMainFrame) {}



	SLATE_END_ARGS()


public:
	SToolViewMainFrame();

	void Construct(const FArguments& InArgs);

};