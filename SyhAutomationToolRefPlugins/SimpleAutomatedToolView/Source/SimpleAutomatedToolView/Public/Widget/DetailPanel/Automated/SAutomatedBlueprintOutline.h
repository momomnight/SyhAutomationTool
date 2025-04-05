#pragma once
#include "Widget/Core/SAutomatedToolViewWidget.h"
#include "SimpleAutomatedToolType.h"
#include "Input/Reply.h"

DECLARE_DELEGATE_OneParam(FSimpleCommandProtocolDelegate, ECommandProtocol);


class SAutomatedBlueprintOutline : public SAutomatedToolViewWidget
{
public:
	SLATE_BEGIN_ARGS(SAutomatedBlueprintOutline) {}
	SLATE_EVENT(FSimpleCommandProtocolDelegate, OnCommandButtonClicked);
	SLATE_END_ARGS()

	SAutomatedBlueprintOutline();
	void Construct(const FArguments& InArgs);


protected:
	FReply OnSearch() const;
	FReply OnClicked(ECommandProtocol InProtocolType);
	void OnSearchCommand(const FString& InCommand);

protected:
	FSimpleCommandProtocolDelegate OnCommandButtonClicked;

protected:
	TSharedPtr<class SVerticalBox> VerticalBox;

};