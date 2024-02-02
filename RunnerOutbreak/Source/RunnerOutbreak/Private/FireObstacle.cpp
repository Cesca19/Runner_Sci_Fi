// Fill out your copyright notice in the Description page of Project Settings.


#include "FireObstacle.h"
#include "RunCharacter.h"
#include "Kismet/GameplayStatics.h"

AFireObstacle::AFireObstacle() : AObstacle()
{
	Mesh->SetCollisionProfileName("OverlapOnlyPawn");
}

void AFireObstacle::OnObstacleBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	OnOverlap(OtherActor);
	ARunCharacter* actor = Cast<ARunCharacter>(OtherActor);
	if (actor) {
		FTimerDelegate Delegate;
		Delegate.BindUFunction(this, "Attack", OtherActor);
		GetWorld()->GetTimerManager().SetTimer(AttackTimerHandle, Delegate, 0.5f, true, 0.0f);
		timeElapsed = 0;
	}
}

void AFireObstacle::Attack(AActor* actor)
{
	if (timeElapsed >= 5)
		GetWorld()->GetTimerManager().ClearTimer(AttackTimerHandle);
	else
		UGameplayStatics::ApplyDamage(actor, DamagePerSeconds / 2, GetInstigatorController(), this, UDamageType::StaticClass());
	timeElapsed++;
}
