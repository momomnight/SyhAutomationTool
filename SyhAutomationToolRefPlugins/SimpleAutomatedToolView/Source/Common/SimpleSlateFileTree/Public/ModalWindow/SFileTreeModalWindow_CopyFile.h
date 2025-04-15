#pragma once

#include "CoreMinimal.h"
#include "ModalWindow/SFileTreeModalWindow.h"
#include "FileTreeEvent.h"
#include "FileTreeOperation.h"


//用于文件树Copy、Rename、CopyTo等
class SIMPLESLATEFILETREE_API SFileTreeModalWindow_CopyFile : public SFileTreeModalWindow
{

public:
	SLATE_BEGIN_ARGS(SFileTreeModalWindow_CopyFile) {}

	SLATE_ATTRIBUTE(FText, EventExplain)

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);


protected:

	FReply ExecuteCopy();

protected:

	TAttribute<FText> EventExplain;
	SlateFileTree::FFileTreeOperationData Data;
};