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

	TSharedPtr<SWidget> CreateWidget(EToolViewModePages InType);
}