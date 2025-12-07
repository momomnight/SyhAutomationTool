#pragma once
#include "Templates/SharedPointer.h"

class FTabManger;
struct FTabSpawnerElement;

struct FTabSpawnerManager : TSharedFromThis<FTabSpawnerManager>
{

	TSharedPtr<FTabManager> GetTabManager() const { return MyTabManger;}

	TSharedPtr<FTabManager> MyTabManger;
	TArray<TSharedPtr<FTabSpawnerElement>> TabSpawnerElements;

};