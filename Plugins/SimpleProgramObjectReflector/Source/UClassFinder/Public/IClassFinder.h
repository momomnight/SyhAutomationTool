#pragma once

#include "Templates/SharedPointer.h"


class IClassFinder : public TSharedFromThis<IClassFinder>
{
public:
	IClassFinder() = default;

	virtual ~IClassFinder(){}
};