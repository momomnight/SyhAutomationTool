
#pragma once

#include "CoreMinimal.h"

//For TMap
inline bool operator==(const FText& Lhs, const FText& Rhs)
{
	return Lhs.ToString().Equals(Rhs.ToString());
}

inline uint32 GetTypeHash(const FText& Key)
{
	uint32 Hash = 0;
	Hash = HashCombine(Hash, GetTypeHash(Key.ToString()));
	return Hash;
}