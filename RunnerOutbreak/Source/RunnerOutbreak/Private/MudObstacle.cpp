// Fill out your copyright notice in the Description page of Project Settings.


#include "MudObstacle.h"
#include "RunCharacter.h"

AMudObstacle::AMudObstacle() : AObstacle()
{
	Mesh->SetCollisionProfileName("OverlapOnlyPawn");
}

void AMudObstacle::OnObstacleBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	ARunCharacter* player = Cast<ARunCharacter>(OtherActor);
	if (player) {
		player->AddAcceleration(-1 * SlowDownOffset);
	}
}

void AMudObstacle::OnObstacleEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	ARunCharacter* player = Cast<ARunCharacter>(OtherActor);
	if (player)
		player->AddAcceleration(SlowDownOffset);
}
