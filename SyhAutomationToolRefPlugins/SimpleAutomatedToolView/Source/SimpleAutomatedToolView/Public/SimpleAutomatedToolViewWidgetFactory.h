#pragma once
#include "SimpleAutomatedToolViewType.h"



namespace SimpleAutomatedToolViewWidgetFactory
{
	template <EToolViewModePages Type>
	TSharedPtr<SWidget> CreateWidget();

	TSharedPtr<SWidget> CreateWidget(EToolViewModePages InType);
}