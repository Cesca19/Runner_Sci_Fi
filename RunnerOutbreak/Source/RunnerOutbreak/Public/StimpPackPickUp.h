// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickUp.h"
#include "StimpPackPickUp.generated.h"

/**
 * 
 */
UCLASS()
class RUNNEROUTBREAK_API AStimpPackPickUp : public APickUp
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	int SpeedAmount;
protected:
	virtual void Tick(float DeltaTime) override;
	virtual void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) override;

	UPROPERTY()
	FTimerHandle SpeedTimerHandle;
	UFUNCTION()
	void ResetSpeed(ARunCharacter* actor);
};
