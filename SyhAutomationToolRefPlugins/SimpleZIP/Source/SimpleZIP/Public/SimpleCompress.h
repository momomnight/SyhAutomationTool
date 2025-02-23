// Copyright (C) RenZhai.2019.All Rights Reserved.
#pragma once
#include "CoreMinimal.h"


namespace SimpleZIP
{
	struct SIMPLEZIP_API FCompressAssist
	{
		FCompressAssist(TArray<uint8> &InData);

		bool Compress(const TArray<uint8> &UncompressedData);
		bool Decompress(const TArray<uint8> &CompressedData);

	private:
		TArray<uint8> &Data;
	};
}