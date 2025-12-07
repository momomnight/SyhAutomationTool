#pragma once
#include "Base/Widget/Core/IBlueprintWidgetBase.h"

struct FWidgetFactory
{
	virtual TSharedPtr<IBlueprintWidgetBase> CreateWidget(TSharedPtr<FBlueprintEntryBase> InEntry) const = 0;
};

struct FPanelWidgetFactory : public FWidgetFactory
{
	virtual TSharedPtr<IBlueprintWidgetBase> CreateWidget(TSharedPtr<FBlueprintEntryBase> InEntry) const override;
};

struct FNodeWidgetFactory : public FWidgetFactory
{
	virtual TSharedPtr<IBlueprintWidgetBase> CreateWidget(TSharedPtr<FBlueprintEntryBase> InEntry) const override;
};

struct FPinWidgetFactory : public FWidgetFactory
{
	virtual TSharedPtr<IBlueprintWidgetBase> CreateWidget(TSharedPtr<FBlueprintEntryBase> InEntry) const override;
};
