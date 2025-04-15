#pragma once

#include "CoreMinimal.h"
#include "ModalWindow/Base/SModalWindowBase.h"
#include "FileTreeEvent.h"


//用于文件树Copy、Rename、CopyTo等
class SIMPLESLATEFILETREE_API SFileTreeModalWindow : public SModalWindowBase
{

public:
	SLATE_BEGIN_ARGS(SFileTreeModalWindow) {}

	SLATE_ARGUMENT(FText, Title)

	SLATE_ATTRIBUTE(FText, EventExplain)

	SLATE_EVENT(FOnLeftButtonClicked, OnLeftButtonClicked)
	SLATE_EVENT(FOnRightButtonClicked, OnRightButtonClicked)

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);


protected:
	virtual void CustomizeTitle();
	virtual void CustomizeShowArea();
	virtual void CustomizeEnsureArea();

protected:

	TAttribute<FText> EventExplain;
	FText Title;

	FOnLeftButtonClicked OnLeftButtonClicked;
	FOnRightButtonClicked OnRightButtonClicked;
};