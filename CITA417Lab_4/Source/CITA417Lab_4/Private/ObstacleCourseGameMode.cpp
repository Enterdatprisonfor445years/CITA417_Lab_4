// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstacleCourseGameMode.h"
#include "GameFramework/PlayerController.h"

void AObstacleCourseGameMode::PlayerFailed(APawn* PlayerPawn)
{
	if (PlayerPawn)
	{
		// Logging runtime details
		UE_LOG(LogTemp, Warning, TEXT("Player fell out of bounds! Respawning character..."));

		APlayerController* PC = Cast<APlayerController>(PlayerPawn->GetController());
		if (PC)
		{
			PlayerPawn->Destroy();
			
			// Built-in engine function to instantly respawn at PlayerStart
			RestartPlayer(PC);
		}
	}
}

void AObstacleCourseGameMode::PlayerWon()
{
	// Meaningful runtime log message
	UE_LOG(LogTemp, Display, TEXT("VICTORY! Player successfully completed the course."));

	// Clear completion screen feedback
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, TEXT("YOU WIN!"), true, FVector2D(2.5f, 2.5f));
	}
}
