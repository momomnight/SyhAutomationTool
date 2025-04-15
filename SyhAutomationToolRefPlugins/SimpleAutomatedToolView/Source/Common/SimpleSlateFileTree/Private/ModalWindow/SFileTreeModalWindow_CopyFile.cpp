#include "ModalWindow/SFileTreeModalWindow_CopyFile.h"
#include "FileTreeType.h"

#define LOCTEXT_NAMESPACE "SFileTreeModalWindow_CopyFile"

void SFileTreeModalWindow_CopyFile::Construct(const FArguments& InArgs)
{
	SFileTreeModalWindow::Construct(SFileTreeModalWindow::FArguments()
		.Title(LOCTEXT("SFileTreeModalWindow_CopyFile.CopyFileText", "CopyFile"))
		.EventExplain_Lambda([this]() {

			return FText::Format(LOCTEXT("SFileTreeModalWindow_CopyFile.EventPlainText", 
			"Are you sure to copy {0} to {1} "), 
			FText::FromString(Data.First->GetPath()), 
			FText::FromString(Data.Second->GetPath())
			);
		})
		.OnLeftButtonClicked(FOnLeftButtonClicked::CreateSP(this, &SFileTreeModalWindow_CopyFile::ExecuteCopy))
	);
}

FReply SFileTreeModalWindow_CopyFile::ExecuteCopy()
{
	return FReply::Unhandled();
}

#undef LOCTEXT_NAMESPACE