// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "RifleWeapon.generated.h"

/**
 * 
 */
UCLASS()
class RUNNEROUTBREAK_API ARifleWeapon : public AWeapon
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int BulletPerSeconds;
	virtual void StartFiring() override;
	virtual void StopFiring() override;
private:
	UPROPERTY()
	FTimerHandle ShootingTimerHandle;
};
