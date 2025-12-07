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

struct FTextStruct
{
	constexpr FTextStruct() = delete;
	constexpr FTextStruct(const TCHAR* InNamespace, const TCHAR* InKey, const TCHAR* InTextLiteral)
		: Namespace(InNamespace), Key(InKey), TextLiteral(InTextLiteral) {
	}

	const TCHAR* const Namespace;
	const TCHAR* const Key;
	const TCHAR* const TextLiteral;

	FText ToText() const
	{
		return FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(TextLiteral, Namespace, Key);
	}
	FString ToString() const
	{
		return FString(TextLiteral);
	}
	FName ToName() const
	{
		return FName(TextLiteral);
	}
};

