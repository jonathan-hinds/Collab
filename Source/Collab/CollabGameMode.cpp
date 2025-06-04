// Copyright Epic Games, Inc. All Rights Reserved.

#include "CollabGameMode.h"
#include "CollabCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACollabGameMode::ACollabGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
