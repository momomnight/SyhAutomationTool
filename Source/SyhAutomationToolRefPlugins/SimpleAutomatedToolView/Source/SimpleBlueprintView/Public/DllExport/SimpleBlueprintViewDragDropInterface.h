#pragma once

struct FBlueprintNodeEntry;

class SIMPLEBLUEPRINTVIEW_API IBlueprintViewDragDropInterface
{
public:
	virtual ~IBlueprintViewDragDropInterface(){}
public:
	virtual TSharedPtr<FBlueprintNodeEntry> MakeNode() const = 0;
};