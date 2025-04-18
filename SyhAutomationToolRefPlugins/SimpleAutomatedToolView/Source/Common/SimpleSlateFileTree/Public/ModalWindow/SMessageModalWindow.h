#pragma once

#include "CoreMinimal.h"
#include "ModalWindow/Base/SModalWindowBase.h"
#include "FileTreeEvent.h"



//用于文件树Copy、Rename、CopyTo等
class SIMPLESLATEFILETREE_API SMessageModalWindow : public SModalWindowBase
{

public:
	SLATE_BEGIN_ARGS(SMessageModalWindow) {}

	SLATE_ARGUMENT(FText, EventExplain)

	SLATE_ATTRIBUTE(FSlateColor, ColorAndOpacity)

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

private:
	FReply Ok();
};