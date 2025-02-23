// Copyright (C) RenZhai.2019.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ZIPType.h"
#include "SimpleZIPFunctionLibrary.generated.h"

UCLASS()
class SIMPLEZIP_API USimpleZIPFunctionLibrary : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * Using UE4 compression scheme to compress our files.
	 * @param UncompressedData	Data to be compressed.
	 * @param OutData			Compress the output data.
	 */
	UFUNCTION(BlueprintCallable, Category = "SimpleZIP")
	static bool Compress(const TArray<uint8> &UncompressedData,TArray<uint8> &OutData);

	/**
	 * Use UE4 to decompress.
	 * @param CompressedData	Data to be decompress.
	 * @param OutData			Decompress the output data.
	 */
	UFUNCTION(BlueprintCallable, Category = "SimpleZIP")
	static bool Decompress(const TArray<uint8> &CompressedData, TArray<uint8> &OutData);
	
	/**
	 * Using UE4 compression scheme to compress our files.
	 * @param UncompressedData	Data to be compressed.
	 * @param OutData			Compress the output data.
	 */
	UFUNCTION(BlueprintCallable, Category = "SimpleZIP")
	static bool CompressToLocalToLocal(const FString&InPath,const FString &OutPath);

	/**
	 * Use UE4 to decompress.
	 * @param CompressedData	Data to be decompress.
	 * @param OutData			Decompress the output data.
	 */
	UFUNCTION(BlueprintCallable, Category = "SimpleZIP")
	static bool DecompressFormLocalToLocal(const FString& InPath, const FString& OutPath);

	/**
	 * The compression scheme zip provided by windows can be used to compress and encrypt the scheme.
	 * @param SrcPath				File path to compress.  for example D:\Hello\Plugins\Ok\File\
	 * @param DestFilename			Compressed to target file plus file name. for example D:\Hello\Plugins\xxx.zip
	 * @param Password				Write a password so that others need a password to unzip it.
	 */
	UFUNCTION(BlueprintCallable, Category = "SimpleZIP")
	static bool ZipByLoacl(const FString &SrcPath, const FString &DestFilename, const FString &Password,bool bOverwrite = true);
	
	/**
	 * The compression scheme zip provided by windows can be used to compress and encrypt the scheme.
	 * @param SrcPath				File path to decompress.  for example  D:\Hello\Plugins\xxx.zip
	 * @param DestFilename			Decompressed to target file plus file name. for example D:\Hello\Plugins\Ok\File\
	 * @param Password				You need a password to unzip your zip.
	 * @param bOverwrite			WIf the file already exists, do you want to override it.
	 */
	UFUNCTION(BlueprintCallable, Category = "SimpleZIP")
	static bool UnzipByLoacl(const FString &SrcPath, const FString &DestFilename, const FString &Password, bool bOverwrite = true);

	//Async
//////////////////////////////////////////////////////////////////////////
	/**
	 * If you want to execute this compression asynchronously, you need to help that function.
	 */
	UFUNCTION(BlueprintCallable, Category = "SimpleZIP")
	static void BindZipFileCallbackFunction(FOnZipFileCallbackFunction OnFunction);

	UFUNCTION(BlueprintCallable, Category = "SimpleZIP")
	static void BindZipFileCallbackCompleteFunction(FOnZipFileCallbackCompleteFunction OnFunction);

	/**
	 * Remember to clear the agent when you don't use it, otherwise it may collapse next time.
	 */
	UFUNCTION(BlueprintCallable, Category = "SimpleZIP")
	static void ClearZipFileCallbackFunction();

	/**
	 * The compression scheme zip provided by windows can be used to compress and encrypt the scheme as async.
	 * @param SrcPath				File path to compress.  for example D:\Hello\Plugins\Ok\File\
	 * @param DestFilename			Compressed to target file plus file name. for example D:\Hello\Plugins\xxx.zip
	 * @param Password				Write a password so that others need a password to unzip it.
	 */
	UFUNCTION(BlueprintCallable, Category = "SimpleZIP")
	static void AsyncZipByLoacl(const FString& SrcPath, const FString& DestFilename, const FString& Password, bool bOverwrite = true);

	/**
	 * The compression scheme zip provided by windows can be used to compress and encrypt the scheme as async.
	 * @param SrcPath				File path to decompress.  for example  D:\Hello\Plugins\xxx.zip
	 * @param DestFilename			Decompressed to target file plus file name. for example D:\Hello\Plugins\Ok\File\
	 * @param Password				You need a password to unzip your zip.
	 * @param bOverwrite			WIf the file already exists, do you want to override it.
	 */
	UFUNCTION(BlueprintCallable, Category = "SimpleZIP")
	static void AsyncUnzipByLoacl(const FString& SrcPath, const FString& DestFilename, const FString& Password, bool bOverwrite = true);
};

/* The following website explains how to use this set of plug-ins
 * DocURL：			    https://renzhai.net/119.html
 * Here's how to develop the current plug-in
 * MarketplaceURL :     https://www.aboutcg.org/courseDetails/764/introduce
 * If you want to learn more about the UE4 tutorial, please refer to:
 * URL :				https://zhuanlan.zhihu.com/p/60117613
 * If you want to learn about the series of tutorials and related plug-ins, you can follow my blog
 * URL :				http://renzhai.net/
 * If you want to know our next course arrangement,
 * you can search the WeChat public house for your attention, then we will push a lot of technical articles.
 * Sina blog            https://weibo.com/bzrz/profile?S=6cm7d0 // this blog hasn't been used for three or four years now.
 * Maybe you can re enable the first connection later
 */