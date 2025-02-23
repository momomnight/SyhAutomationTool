// Copyright (C) RenZhai.2019.All Rights Reserved.
#include "SimpleZIPFunctionLibrary.h"
#include "SimpleCompress.h"
#include "ZIPSDK.h"
#include "Misc/FileHelper.h"
#include "SimpleZipLog.h"

bool USimpleZIPFunctionLibrary::Compress(const TArray<uint8> &UncompressedData, TArray<uint8> &OutData)
{
	SimpleZIP::FCompressAssist CompressAssist(OutData);
	return CompressAssist.Compress(UncompressedData);
}

bool USimpleZIPFunctionLibrary::Decompress(const TArray<uint8> &CompressedData, TArray<uint8> &OutData)
{
	SimpleZIP::FCompressAssist CompressAssist(OutData);
	return CompressAssist.Decompress(CompressedData);
}

bool USimpleZIPFunctionLibrary::CompressToLocalToLocal(const FString& InPath, const FString& OutPath)
{
	TArray<FString> FileNames;
	IFileManager::Get().FindFilesRecursive(FileNames, *InPath, TEXT("*.*"), true, false);
	
	TArray<FString> DataFileInfo;
	TArray<uint8> Bytes;
	for (auto &Tmp : FileNames)
	{
		TArray<uint8> STmpBytes;
		FFileHelper::LoadFileToArray(STmpBytes, *Tmp);
		
		//压缩
		TArray<uint8> TTmpBytes;
		Compress(STmpBytes, TTmpBytes);

		int32 TmpBytesNum = TTmpBytes.Num();

		FString HeardFile = FPaths::GetCleanFilename(InPath);

		//转为相对路径
		Tmp.RemoveFromStart(InPath);
		HeardFile /= Tmp;

		DataFileInfo.Add(HeardFile);
		DataFileInfo.Add(FString::FromInt(TmpBytesNum));

		Bytes.Append(TTmpBytes);
	}

	FString Heard = FPaths::GetCleanFilename(OutPath);
	FString RZsigPath = FPaths::GetPath(OutPath);
	RZsigPath += TEXT("\\") + Heard.Replace(TEXT(".rz"), TEXT(".rzsig"));

	FPaths::NormalizeFilename(RZsigPath);

	return	FFileHelper::SaveArrayToFile(Bytes, *OutPath) && 
			FFileHelper::SaveStringArrayToFile(DataFileInfo, *RZsigPath);;
}

bool USimpleZIPFunctionLibrary::DecompressFormLocalToLocal(const FString& InPath, const FString& OutPath)
{
	TArray<uint8> Bytes;
	FFileHelper::LoadFileToArray(Bytes, *InPath);

	UE_LOG(LogSimpleZip, Display, TEXT("rz:%s"), *InPath);
	UE_LOG(LogSimpleZip, Display, TEXT("Bytes Number:%i"), Bytes.Num());

	FString Heard = FPaths::GetCleanFilename(InPath);

	FString RZsigPath = FPaths::GetPath(InPath);
	RZsigPath += TEXT("\\") + Heard.Replace(TEXT(".rz"), TEXT(".rzsig"));

	TArray<FString> DataFileInfo;
	FFileHelper::LoadFileToStringArray(DataFileInfo, *RZsigPath);

	UE_LOG(LogSimpleZip, Display, TEXT("zsig:%s"), *RZsigPath);
	UE_LOG(LogSimpleZip, Display, TEXT("String Number:%i"), DataFileInfo.Num());

	int32 Count = 0;
	for (int32 i = 0;i < DataFileInfo.Num();i+=2)
	{
		FString BytePaths = DataFileInfo[i];
		int32 ByteNum = FCString::Atoi(*DataFileInfo[i + 1]);

		TArray<uint8> STmpBytes;
		STmpBytes.AddUninitialized(ByteNum);
		FMemory::Memcpy(STmpBytes.GetData(), &Bytes[Count], ByteNum);
		Count += ByteNum;

		TArray<uint8> TTmpBytes;
		Decompress(STmpBytes,TTmpBytes);

		FString SavePath = (OutPath / BytePaths);

		UE_LOG(LogSimpleZip, Display, TEXT("SavePath:%s"), *SavePath);

		FFileHelper::SaveArrayToFile(TTmpBytes,*SavePath);
	}

	return true;
}

bool USimpleZIPFunctionLibrary::ZipByLoacl(const FString &SrcPath, const FString &DestFilename, const FString &Password, bool bOverwrite)
{
	return SimpleZIP::ZipByLoacl(*SrcPath, *DestFilename, *Password, bOverwrite);
}

bool USimpleZIPFunctionLibrary::UnzipByLoacl(const FString &SrcPath, const FString &DestFilename, const FString &Password, bool bOverwrite /*= true*/)
{
	return SimpleZIP::UnzipByLoacl(*SrcPath, *DestFilename, *Password,bOverwrite);
}

void USimpleZIPFunctionLibrary::BindZipFileCallbackFunction(FOnZipFileCallbackFunction OnFunction)
{
	SimpleZIP::BindFunction([OnFunction](EZipType InType, int32 Num, int32 InProgress, const FString& InFileName)
	{
		OnFunction.ExecuteIfBound(InType, Num, InProgress, InFileName);
	});
}

void USimpleZIPFunctionLibrary::BindZipFileCallbackCompleteFunction(FOnZipFileCallbackCompleteFunction OnFunction)
{
	SimpleZIP::BindCompleteFunction(FSimpleDelegate::CreateLambda(
	[OnFunction]()
	{
		OnFunction.ExecuteIfBound();
	}));
}

void USimpleZIPFunctionLibrary::ClearZipFileCallbackFunction()
{
	SimpleZIP::ClearZipFileCallbackFunction();
}

void USimpleZIPFunctionLibrary::AsyncZipByLoacl(const FString& SrcPath, const FString& DestFilename, const FString& Password, bool bOverwrite)
{
	SimpleZIP::AsyncZipByLoacl(SrcPath, DestFilename, Password, bOverwrite);
}

void USimpleZIPFunctionLibrary::AsyncUnzipByLoacl(const FString& SrcPath, const FString& DestFilename, const FString& Password, bool bOverwrite /*= true*/)
{
	SimpleZIP::AsyncUnZipByLoacl(SrcPath, DestFilename, Password, bOverwrite);
}
