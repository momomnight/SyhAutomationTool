#include "DllExports/CommonDragDropOperationDefinition.h"
#include "Widgets/Text/STextBlock.h"

TSharedPtr<SWidget> FFileDragDropOperation::GetDefaultDecorator() const
{
	return SNew(STextBlock).Text(FText::FromString(Name));
}

void FFileDragDropOperation::SetPath(const FString& InPath)
{
	FFileStatData FileStatData = IFileManager::Get().GetStatData(*InPath);

	if (FileStatData.bIsValid)
	{
		bIsFolder = FileStatData.bIsDirectory;
		Path = InPath;
		Name = FPaths::GetCleanFilename(Path); 
		Extension = FPaths::GetExtension(Name, true);
		Name.RemoveFromEnd(Extension);
	}
}

bool FFileDragDropOperation::IsValid() const
{
	return !Path.IsEmpty();
}

bool FFileDragDropOperation::IsFolder() const
{
	return false;
}

TSharedRef<FFileDragDropOperation> FFileDragDropOperation::NewOperation(const FString& InPath)
{
	TSharedRef<FFileDragDropOperation> Op = MakeShared<FFileDragDropOperation>();
	Op->SetPath(InPath);
	Op->Construct();
	return Op;
}
