// Fill out your copyright notice in the Description page of Project Settings.


#include "AmmoPickUp.h"
#include "RunCharacter.h"

void AAmmoPickUp::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	ARunCharacter* character = Cast<ARunCharacter>(OtherActor);
	if (character) {
		OnPickUp();
		character->AddAmmo(AmmoAmount);
		Destroy();
	}
}
