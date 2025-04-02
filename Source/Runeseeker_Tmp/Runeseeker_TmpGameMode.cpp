// Copyright Epic Games, Inc. All Rights Reserved.

#include "Runeseeker_TmpGameMode.h"
#include "Runeseeker_TmpPlayerController.h"
#include "Runeseeker_TmpCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARuneseeker_TmpGameMode::ARuneseeker_TmpGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ARuneseeker_TmpPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}