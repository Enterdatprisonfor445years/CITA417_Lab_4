// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingObstacle.h"

// Sets default values
AMovingObstacle::AMovingObstacle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
   
    
    RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    RootComponent = RootSceneComponent;

    MoveVelocity = FVector(100.0f, 0.0f, 0.0f);
    MaxDistance = 500.0f;
    RotationVelocity = FRotator(0.0f, 45.0f, 0.0f);
}

// Called when the game starts or when spawned
void AMovingObstacle::BeginPlay()
{
	Super::BeginPlay();
   
    // Cache the initial location set by the designer in the level editor
    StartLocation = GetActorLocation();

    // Validation Logging: Warn once on initialization if distance layout is broken
    if (MaxDistance <= 0.0f && !MoveVelocity.IsZero())
    {
        UE_LOG(LogTemp, Warning, TEXT("Obstacle [%s] has velocity configured but MaxDistance is 0. It will remain static."), *GetName());
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("Obstacle [%s] successfully initialized at %s."), *GetName(), *StartLocation.ToString());
    }
}

// Called every frame
void AMovingObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    HandleMovement(DeltaTime);
    HandleRotation(DeltaTime);
}

void AMovingObstacle::HandleMovement(float DeltaTime)
{
    if (MaxDistance <= 0.0f)
    {
        return;
    }

    FVector CurrentLocation = GetActorLocation();
    CurrentLocation += MoveVelocity * DeltaTime;
    SetActorLocation(CurrentLocation);

    float DistanceMoved = FVector::Dist(StartLocation, CurrentLocation);

    if (DistanceMoved >= MaxDistance)
    {
        MoveVelocity = -MoveVelocity;

        StartLocation = StartLocation + (MoveVelocity.GetSafeNormal() * MaxDistance);
    }
}

void AMovingObstacle::HandleRotation(float DeltaTime)
{
    AddActorLocalRotation(RotationVelocity * DeltaTime);
}

