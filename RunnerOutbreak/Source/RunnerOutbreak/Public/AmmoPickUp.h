// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickUp.h"
#include "AmmoPickUp.generated.h"

/**
 * 
 */
UCLASS()
class RUNNEROUTBREAK_API AAmmoPickUp : public APickUp
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	int AmmoAmount;
protected:
	virtual void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) override;
};
