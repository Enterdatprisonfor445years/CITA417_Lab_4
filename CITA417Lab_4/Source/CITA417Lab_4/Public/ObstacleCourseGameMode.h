// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ObstacleCourseGameMode.generated.h"

/**
 * 
 */
UCLASS()
class CITA417LAB_4_API AObstacleCourseGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	// Called by my floor hazard trigger when the player falls
	UFUNCTION(BlueprintCallable, Category = "Gameplay Flow")
	void PlayerFailed(APawn* PlayerPawn);

	// Called by the victory platform block trigger
	UFUNCTION(BlueprintCallable, Category = "Gameplay Flow")
	void PlayerWon();
};
