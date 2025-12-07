#pragma once

#include "CoreMinimal.h"
#include "Templates/SharedPointer.h"
#include "SelectedObjectManager.generated.h"

DECLARE_DELEGATE_OneParam(FHandleSelectedObject, const TArray<TWeakObjectPtr<UObject>>&)

UCLASS()
class SELECTEDOBJECTMANAGER_API USelectedObjectManager : public UObject
{
	GENERATED_BODY()
public:
	USelectedObjectManager();

	void AddSelectedObject(UObject*);
	void AddSelectedObjects(const TArray<UObject*>&);

	void RemoveSelectedObject(UObject*);
	
	void ClearSelectedObjects();

	void HandleSelectedObject(FHandleSelectedObject InDelegate);


private:
	UPROPERTY()
	TArray<TWeakObjectPtr<UObject>> SelectedObjects;
};