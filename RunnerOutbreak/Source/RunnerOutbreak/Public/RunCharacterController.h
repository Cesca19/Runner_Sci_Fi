// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RunCharacterController.generated.h"

/**
 * 
 */
UCLASS()
class RUNNEROUTBREAK_API ARunCharacterController : public APlayerController
{
	GENERATED_BODY()
public:
	void BeginPlay();
	void Tick(float DeltaTime);
	void SetupInputComponent();

private:
	UPROPERTY()
	class ARunCharacter* runCharacter;
	UFUNCTION()
	void MoveRight(float offset);
	UFUNCTION()
	void LookUp(float offset);
	UFUNCTION()
	void LookRight(float offset);
	UFUNCTION()
	void Jump();
	UFUNCTION()
	void StartFiring();
	UFUNCTION()
	void StopFiring();
};
