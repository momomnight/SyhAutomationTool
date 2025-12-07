#pragma once
#include "Input/DragAndDrop.h"
#include "Containers/UnrealString.h"

class SIMPLEAUTOMATEDTOOLCOMMON_API FFileDragDropOperation : public FDragDropOperation
{
public:
	DRAG_DROP_OPERATOR_TYPE(FFileDragDropOperation, FDragDropOperation);
	FFileDragDropOperation() : FDragDropOperation(){}

	virtual TSharedPtr<SWidget> GetDefaultDecorator() const;
	void SetPath(const FString& InPath);
	
	const FString& GetPath() const noexcept {return Path;}
	const FString& GetName() const noexcept { return Name; }
	const FString& GetExtension() const noexcept { return Extension; }

	bool IsValid() const;
	bool IsFolder() const;

	static TSharedRef<FFileDragDropOperation> NewOperation(const FString& InPath);

private:
	FString Path{};
	FString Name{};
	FString Extension{};
	bool bIsFolder{ false };
};