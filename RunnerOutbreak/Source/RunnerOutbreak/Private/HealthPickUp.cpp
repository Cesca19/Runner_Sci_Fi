// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthPickUp.h"
#include "RunCharacter.h"
#include "Kismet/GameplayStatics.h"

void AHealthPickUp::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	ARunCharacter* character = Cast<ARunCharacter>(OtherActor);
	if (character) {
		OnPickUp();
		UGameplayStatics::ApplyDamage(OtherActor, -1 * HealAmount, GetInstigatorController(), this, UDamageType::StaticClass());
		Destroy();
	}
}
