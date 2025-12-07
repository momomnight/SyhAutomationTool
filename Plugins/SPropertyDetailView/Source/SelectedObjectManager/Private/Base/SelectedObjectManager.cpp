#include "SelectedObjectManager.h"

USelectedObjectManager::USelectedObjectManager()
{
}

void USelectedObjectManager::AddSelectedObject(UObject* InSelectedObject)
{
	if(InSelectedObject)
	{
		TWeakObjectPtr<UObject> WeakObject = MakeWeakObjectPtr(InSelectedObject);
		SelectedObjects.AddUnique(WeakObject);
	}
}

void USelectedObjectManager::AddSelectedObjects(const TArray<UObject*>& InSelectedObjects)
{
	for(auto& Object : InSelectedObjects)
	{
		if(Object)
		{
			AddSelectedObject(Object);
		}
	}
}

void USelectedObjectManager::RemoveSelectedObject(UObject* InObject)
{
	TWeakObjectPtr<UObject> WeakObject = MakeWeakObjectPtr(InObject);
	int32 Index = SelectedObjects.Find(WeakObject);
	if (Index != INDEX_NONE)
	{
		SelectedObjects.RemoveAtSwap(Index);
	}
}

void USelectedObjectManager::ClearSelectedObjects()
{
	SelectedObjects.Empty(SelectedObjects.GetSlack());
}

void USelectedObjectManager::HandleSelectedObject(FHandleSelectedObject InDelegate)
{
	InDelegate.ExecuteIfBound(SelectedObjects);
}
