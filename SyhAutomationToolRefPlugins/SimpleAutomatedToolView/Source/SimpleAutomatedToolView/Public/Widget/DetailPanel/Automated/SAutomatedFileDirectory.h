#pragma once
#include "Widget/Core/SAutomatedToolViewWidget.h"



class SAutomatedFileDirectory : public SAutomatedToolViewWidget
{

public:
	SLATE_BEGIN_ARGS(SAutomatedFileDirectory) {}
	SLATE_END_ARGS()

	SAutomatedFileDirectory();
	void Construct(const FArguments& InArgs);
	


};