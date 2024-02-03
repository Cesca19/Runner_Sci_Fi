// Fill out your copyright notice in the Description page of Project Settings.


#include "RifleWeapon.h"

void ARifleWeapon::StartFiring()
{
	if (!BulletPerSeconds)
		BulletPerSeconds = 5;
	FTimerDelegate Delegate;
	Delegate.BindUFunction(this, "Fire");
	GetWorld()->GetTimerManager().SetTimer(ShootingTimerHandle, Delegate, 1.0f / BulletPerSeconds, true, 0.0f);
}

void ARifleWeapon::StopFiring()
{
	GetWorld()->GetTimerManager().ClearTimer(ShootingTimerHandle);
}
