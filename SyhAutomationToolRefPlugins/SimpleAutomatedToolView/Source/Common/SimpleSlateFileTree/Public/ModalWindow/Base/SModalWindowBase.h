#pragma once
#include "Widgets/SWindow.h"



class SIMPLESLATEFILETREE_API SModalWindowBase : public SWindow
{

public:
	SLATE_BEGIN_ARGS(SModalWindowBase) {}
	
	SLATE_ARGUMENT(FText, Title)

	SLATE_ARGUMENT(TSharedPtr<SWidget>, ShowArea)

	SLATE_ARGUMENT(TSharedPtr<SWidget>, EnsureArea)
	
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

protected:

	void CloseWindow();

private:
	
	TSharedPtr<SWidget> ShowArea;
	TSharedPtr<SWidget> EnsureArea;
};