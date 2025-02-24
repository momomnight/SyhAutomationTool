// Copyright (C) RenZhai.2020.All Rights Reserved.

#include "FileTree/FileParsing.h"
#include "Misc/FileHelper.h"

namespace SimpleSlateExtend
{
	SimpleSlateExtend::EFileType GetFileTypeByString(const FString &InFilePath)
	{
		/*if (IFileManager::Get().FileExists(*InFilePath))
		{
			return SimpleSlateExtend::EFileType::FILE;
		}*/

		FString ContentString;
		if (FFileHelper::LoadFileToString(ContentString,*InFilePath))
		{
			return SimpleSlateExtend::EFileType::FILE;
		}

		return SimpleSlateExtend::EFileType::FOLDER;
	}

	void FilesParsingRecursive(FFileList& List)
	{
		TArray<FString> FoundFiles;
		IFileManager::Get().FindFiles(FoundFiles, *(List.FullFilename / TEXT("*")), true, true);

		for (auto& Tmp : FoundFiles)
		{
			FFileList& InChildren = List.Children.AddDefaulted_GetRef();
			InChildren.Filename = Tmp;
			InChildren.FullFilename = List.FullFilename / Tmp;

			if (FPaths::FileExists(InChildren.FullFilename))
			{
				InChildren.FileType = EFileType::FILE;
			}
			else
			{
				SimpleSlateExtend::FilesParsingRecursive(InChildren);
			}
		}
	}

	void FilesParsing(const FString& Filenames, FFileList& List)
	{
		List.FullFilename = Filenames;
		FilesParsingRecursive(List);
	}

	void FilesPakParsing(const TArray<FString>& Filenames, FFileList& List)
	{
		//Editor
		//Filename = G:/HotUpdate/Content/Geometry/Meshes/1M_Cube.uasset 
		//Filename = G:/HotUpdate/Content/Geometry/Meshes/1M_Cube_Chamfer.uasset
		//Runtime 
		//Filename = G:\HotUpdate\Saved\Cooked\WindowsNoEditor\HotUpdate\Content\Geometry\Meshes\1M_Cube_Chamfer.uasset
		//Filename = ../../../Projectname/Content/Geometry/Meshes/1M_Cube.uasset 
		FilesPakParsing(Filenames, List,TEXT("/Content/"), TEXT("/Game/"));
	}

	void FilesPakParsing(
		const TArray<FString>& Filenames, 
		FFileList& List, 
		const TCHAR* InSearchText, 
		const TCHAR* InReplacementText)
	{
		FFileList* FileList = &List;
		FileList->Filename = FApp::GetProjectName();
		for (const auto& Filename : Filenames)
		{
			auto Point = Filename;
			auto Pos = Point.Find(InSearchText);
			auto NewPoint = Point.RightChop(Pos);
			NewPoint.ReplaceInline(InSearchText, InReplacementText);

			TArray<FString> FileLevel;
			NewPoint.ParseIntoArray(FileLevel, TEXT("/"));

			FileList = &List;
			for (const auto& TmpFile : FileLevel)
			{
				FFileList FileListElement;
				FileListElement.Filename = TmpFile;

				int32 i = FileList->Children.AddUnique(FileListElement);
				FileList = &(FileList->Children[i]);
			}

			FileList->Filename = NewPoint;
		}
	}
}
