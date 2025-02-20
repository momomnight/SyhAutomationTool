#include "Element/Core/Interface/AutoExecElements.h"
#include "SyhAutomationToolCommon.h"

void FAutoExecElements::HandleTimePath(FString& InPath)
{
	if (InPath.Contains(TEXT("%~Time")))
	{
		InPath.ReplaceInline(TEXT("%~Time"), *PackagingSaveFileName);
	}
}
