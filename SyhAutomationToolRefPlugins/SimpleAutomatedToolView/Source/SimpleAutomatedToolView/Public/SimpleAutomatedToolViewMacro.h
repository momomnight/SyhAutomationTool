#pragma once

#include "CoreMinimal.h"
#include "HAL/PreprocessorHelpers.h"


#define PREPROCESSOR_TO_COMMAND_NAME_ANSI(InCommandName, InSequenceIndex)\
PREPROCESSOR_TO_STRING(PREPROCESSOR_JOIN(InCommandName, PREPROCESSOR_JOIN(_, InSequenceIndex)))

#define PREPROCESSOR_TO_COMMAND_NAME_TCHAR(InCommandName, InSequenceIndex)\
TEXT(PREPROCESSOR_TO_COMMAND_NAME_ANSI(InCommandName, InSequenceIndex))

#define GenerateToolBarTextStruct(InCommandName, InNamespace, InKey, InTextLiteral)\
struct F##InCommandName\
{\
	constexpr static const TCHAR* Namespace = TEXT(InNamespace);\
	constexpr static const TCHAR* Key = TEXT(InKey);\
	constexpr static const TCHAR* TextLiteral = TEXT(InTextLiteral);\
	explicit operator FText()\
	{\
		return FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(TextLiteral, Namespace, Key);\
	}\
};\
static F##InCommandName InCommandName;

#define CreateCommand(InCommandName, InSequenceIndex, FriendlyName, InDescription, CommandType, InDefaultChord)\
TSharedPtr<FUICommandInfo>& InCommandName##_Command_##InSequenceIndex = CreateCommandInfo(FText(InCommandName), InSequenceIndex);\
MakeUICommand_InternalUseOnly(\
this,\
InCommandName##_Command_##InSequenceIndex,\
InCommandName.Namespace,\
PREPROCESSOR_TO_COMMAND_NAME_TCHAR(InCommandName##_Command, InSequenceIndex),\
PREPROCESSOR_TO_COMMAND_NAME_TCHAR(InCommandName##_Command, InSequenceIndex),\
"." PREPROCESSOR_TO_COMMAND_NAME_ANSI(InCommandName##_Command, InSequenceIndex),\
FriendlyName,\
InDescription,\
CommandType, \
InDefaultChord)