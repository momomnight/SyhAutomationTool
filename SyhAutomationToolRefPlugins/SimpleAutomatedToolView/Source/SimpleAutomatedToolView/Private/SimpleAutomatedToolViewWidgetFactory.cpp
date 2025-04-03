#include "SimpleAutomatedToolViewWidgetFactory.h"


namespace SimpleAutomatedToolViewWidgetFactory
{
	TSharedPtr<SWidget> CreateWidget(EToolViewModePages InType)
	{
		switch (InType)
		{
		case EToolViewModePages::MP_Automated_Editor:
			return CreateWidget<EToolViewModePages::MP_Automated_Editor>();

		case EToolViewModePages::MP_L1:
			return CreateWidget<EToolViewModePages::MP_L1>();

		case EToolViewModePages::MP_L2:
			return CreateWidget<EToolViewModePages::MP_L2>();

		case EToolViewModePages::MP_Max:
		default:
			break;
		}
		return TSharedPtr<SWidget>();
	}
}

