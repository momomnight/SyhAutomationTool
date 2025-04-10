#pragma once
#include "Templates/TypeHash.h"//Core--HashCombine
#include "HAL/Platform.h"//Core--uint32
#include "Internationalization/Text.h"//Core--FText
#include "Containers/UnrealString.h"//Core--ToString

//For TMap
inline bool operator==(const FText& Lhs, const FText& Rhs)
{
	return Lhs.ToString() == Rhs.ToString();
}

inline uint32 GetTypeHash(const FText& Key)
{
	uint32 Hash = 0;
	Hash = HashCombine(Hash, GetTypeHash(Key.ToString()));
	return Hash;
}


