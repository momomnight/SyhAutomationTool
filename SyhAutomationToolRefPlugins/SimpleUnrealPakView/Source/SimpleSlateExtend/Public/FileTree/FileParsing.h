// Copy// Copyright (C) RenZhai.2020.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

namespace SimpleSlateExtend
{
	enum class EFileType :uint8
	{
		FILE,
		FOLDER,

		//其他
		OTHER1,
		OTHER2,
		OTHER3,
		OTHER4,
		OTHER5,
		OTHER6,
		OTHER7,
		OTHER8,
		OTHER9,
		OTHER10,
		OTHER11,
		OTHER12,
		OTHER13,
		OTHER14,
		OTHER15,
		OTHER16,
	};

	struct SIMPLESLATEEXTEND_API FFileDragDefinition
	{
		FFileDragDefinition()
			:FileType(EFileType::FOLDER)
		{}

		EFileType FileType;
		FString AssetPath;

		//对应的Widget
		TSharedPtr<SWidget> Widget;
	};

	struct SIMPLESLATEEXTEND_API FFileList
	{
		FFileList()
			:FileType(SimpleSlateExtend::EFileType::FOLDER)
		{}

		//如果Filename是文件那么它保留的是一个Packagename = /Game/SS/A
		//如果Filename是文件夹那么它保留的是一个文件夹名称 比如 Game
		FString Filename;
		FString FullFilename;

		EFileType FileType;
		TArray<FFileList> Children;

		FORCEINLINE friend bool operator==(const FFileList& A, const FFileList& B)
		{
			return A.Filename == B.Filename;
		}

		EFileType GetFileType() const { return FileType;}
	};

	SimpleSlateExtend::EFileType SIMPLESLATEEXTEND_API GetFileTypeByString(const FString& InFilePath);

	//根据用户指定的路径来生成对应Slate
	void SIMPLESLATEEXTEND_API FilesParsing(const FString& Filenames, FFileList& List);

	//默认Content替换Game
	void SIMPLESLATEEXTEND_API FilesPakParsing(const TArray<FString> &Filenames,FFileList &List);

	//自定义替换的路径
	void SIMPLESLATEEXTEND_API FilesPakParsing(const TArray<FString>& Filenames, FFileList& List,const TCHAR* InSearchText,const TCHAR *InReplacementText);

	void CreateWidnwsMsg();
}