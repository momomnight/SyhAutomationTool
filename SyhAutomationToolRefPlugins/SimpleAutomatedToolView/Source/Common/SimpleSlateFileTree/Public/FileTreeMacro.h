#pragma once

#include "CoreMinimal.h"
#include "HAL/PreprocessorHelpers.h"

#define PREPROCESSOR_TO_COMMAND_NAME_ANSI(InCommandName, InSequenceIndex)\
PREPROCESSOR_TO_STRING(PREPROCESSOR_JOIN(InCommandName, PREPROCESSOR_JOIN(_, InSequenceIndex)))

#define PREPROCESSOR_TO_COMMAND_NAME_TCHAR(InCommandName, InSequenceIndex)\
TEXT(PREPROCESSOR_TO_COMMAND_NAME_ANSI(InCommandName, InSequenceIndex))

#define GenerateMenuEntryTextStruct(InCommandName, InNamespace, InKey, InTextLiteral)\
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

#define CreateUICommand(InCommandName, FriendlyName, InDescription, CommandType, InDefaultChord)\
TSharedPtr<FUICommandInfo> InCommandName##_Command; \
MakeUICommand_InternalUseOnly(\
this,\
InCommandName##_Command,\
InCommandName.Namespace,\
PREPROCESSOR_TO_COMMAND_NAME_TCHAR(InCommandName, Command),\
PREPROCESSOR_TO_COMMAND_NAME_TCHAR(InCommandName, Command),\
"." PREPROCESSOR_TO_STRING(InCommandName##_Command),\
FriendlyName,\
InDescription,\
CommandType, \
InDefaultChord);

#define GetUICommandInfoName(InCommandName)\
InCommandName##_Command

#define BindMenuSpawner(Container, InCommandName, MenuExtensionDelegate)\
Container.Add(FText(InCommandName), MenuExtensionDelegate);