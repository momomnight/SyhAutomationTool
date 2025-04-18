#include "SimpleAutomatedToolViewWidgetFactory.h"
#include "Widget/DetailPanel/Automated/SAutomatedDetailEditorWidget.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Input/SCheckBox.h"

namespace SimpleAutomatedToolViewWidgetFactory
{
	template <>
	TSharedPtr<SWidget> CreateWidget<EToolViewModePages::MP_Automated_Editor>()
	{
		return SNew(SAutomatedDetailEditorWidget);
	}

	template <>
	TSharedPtr<SWidget> CreateWidget<EToolViewModePages::MP_L1>()
	{
		return SNew(SImage);
	}

	template <>
	TSharedPtr<SWidget> CreateWidget<EToolViewModePages::MP_L2>()
	{
		return SNew(SCheckBox);
	}

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

