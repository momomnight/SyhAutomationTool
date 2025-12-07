#pragma once

#include "CoreMinimal.h"
#include "HAL/PreprocessorHelpers.h"

#define PREPROCESSOR_TO_COMMAND_NAME_ANSI(InCommandName, InSequenceIndex)\
PREPROCESSOR_TO_STRING(PREPROCESSOR_JOIN(InCommandName, PREPROCESSOR_JOIN(_, InSequenceIndex)))

#define PREPROCESSOR_TO_COMMAND_NAME_TCHAR(InCommandName, InSequenceIndex)\
TEXT(PREPROCESSOR_TO_COMMAND_NAME_ANSI(InCommandName, InSequenceIndex))

#define CreateMenuSpawner(InCommandName, Spawner)\
CreateSpawner(InCommandName.ToText()).Add(Spawner);

#define CreateUIAction(InCommandName, InSequenceIndex, UIAction)\
CreateAction(InCommandName.ToText(), InSequenceIndex) = UIAction\

#define CreateUICommand(InCommandName, InSequenceIndex, FriendlyName, InDescription, CommandType, InDefaultChord)\
TSharedPtr<FUICommandInfo>& InCommandName##_CommandInfo_##InSequenceIndex = CreateCommandInfo(InCommandName.ToText(), InSequenceIndex);\
MakeUICommand_InternalUseOnly(\
this,\
InCommandName##_CommandInfo_##InSequenceIndex,\
InCommandName.Namespace,\
PREPROCESSOR_TO_COMMAND_NAME_TCHAR(InCommandName##_CommandInfo, InSequenceIndex),\
PREPROCESSOR_TO_COMMAND_NAME_TCHAR(InCommandName##_CommandInfo, InSequenceIndex),\
"." PREPROCESSOR_TO_COMMAND_NAME_ANSI(InCommandName##_CommandInfo, InSequenceIndex),\
FriendlyName,\
InDescription,\
CommandType, \
InDefaultChord);

#define GetRealCommandInfoName(InCommandName,InSequenceIndex)\
InCommandName##_CommandInfo_##InSequenceIndex