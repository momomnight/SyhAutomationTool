#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "SimpleAutomatedToolViewType.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widget/DetailPanel/Automated/SAutomatedDetailEditorWidget.h"

namespace SimpleAutomatedToolViewWidgetFactory
{
	template <EToolViewModePages Type>
	TSharedPtr<SWidget> CreateWidget();

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

	TSharedPtr<SWidget> CreateWidget(EToolViewModePages InType);
}