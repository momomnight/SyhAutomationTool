#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"



class SIMPLESLATEFILETREE_API SModalWindowBase : public SCompoundWidget
{

public:
	SLATE_BEGIN_ARGS(SModalWindowBase) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);


protected:
	virtual void CustomizeTitle();
	virtual void CustomizeShowArea();
	virtual void CustomizeEnsureArea();
	void CustomizeContent();
protected:

	TSharedPtr<SWidget> TitleArea;
	TSharedPtr<SWidget> ShowArea;
	TSharedPtr<SWidget> EnsureArea;
};