#pragma once

#include "CoreMinimal.h"
#include "HAL/PreprocessorHelpers.h"

#define PREPROCESSOR_TO_COMMAND_NAME_ANSI(InCommandName, InSequenceIndex)\
PREPROCESSOR_TO_STRING(PREPROCESSOR_JOIN(InCommandName, PREPROCESSOR_JOIN(_, InSequenceIndex)))

#define PREPROCESSOR_TO_COMMAND_NAME_TCHAR(InCommandName, InSequenceIndex)\
TEXT(PREPROCESSOR_TO_COMMAND_NAME_ANSI(InCommandName, InSequenceIndex))

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