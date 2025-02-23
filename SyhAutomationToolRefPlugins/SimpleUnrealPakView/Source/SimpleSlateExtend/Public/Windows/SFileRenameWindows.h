// Copyright (C) RenZhai.2020.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Windows/Core/SWindowsWidgetBase.h"

class SIMPLESLATEEXTEND_API SFileRenameWindows :public SWindowsWidgetBase
{
public:
	SFileRenameWindows();

	virtual void Construct(const FArguments& InArgs);
};