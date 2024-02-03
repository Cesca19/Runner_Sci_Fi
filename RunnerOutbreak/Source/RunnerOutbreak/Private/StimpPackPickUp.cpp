// Fill out your copyright notice in the Description page of Project Settings.


#include "StimpPackPickUp.h"
#include "RunCharacter.h"

void AStimpPackPickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AStimpPackPickUp::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	ARunCharacter* character = Cast<ARunCharacter>(OtherActor);
	if (character) {
		OnPickUp();
		FTimerDelegate Delegate;
		Delegate.BindUFunction(this, "ResetSpeed", character);
		GetWorld()->GetTimerManager().SetTimer(SpeedTimerHandle, Delegate, 1.0f, true, 5.0f);
		character->AddAcceleration(SpeedAmount);
		Mesh->SetCollisionProfileName("NoCollision");
		Mesh->SetVisibility(false);
	}
}

void AStimpPackPickUp::ResetSpeed(ARunCharacter* actor)
{
	actor->AddAcceleration( -1 * SpeedAmount);
	GetWorld()->GetTimerManager().ClearTimer(SpeedTimerHandle);
	Destroy();
}
