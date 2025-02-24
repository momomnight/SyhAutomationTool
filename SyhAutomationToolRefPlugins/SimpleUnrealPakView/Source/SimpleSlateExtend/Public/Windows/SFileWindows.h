// Copyright (C) RenZhai.2020.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Windows/Core/SWindowsWidgetBase.h"

class SIMPLESLATEEXTEND_API SFileWindows :public SWindowsWidgetBase
{
public:
	SFileWindows();

	virtual void Construct(const FArguments& InArgs);
};