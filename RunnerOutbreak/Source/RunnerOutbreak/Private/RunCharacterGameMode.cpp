// Fill out your copyright notice in the Description page of Project Settings.


#include "RunCharacterGameMode.h"
#include "RunCharacter.h"
#include "Tile.h"

ARunCharacterGameMode::ARunCharacterGameMode()
{
	nextSpawnPoint = { -500, -800, -100 };
	startTileNumber = 4;
}

void ARunCharacterGameMode::BeginPlay()
{
	Super::BeginPlay();
	for (int i = 0; i < startTileNumber; i++)
		SpawnTile();
}

void ARunCharacterGameMode::SpawnTile()
{
	if (!TileClass) return;
	FTransform transform;
	transform.SetLocation(nextSpawnPoint);
	ATile* tile = GetWorld()->SpawnActor<ATile>(TileClass, transform);

	tile->OnExited.AddDynamic(this, &ARunCharacterGameMode::OnTileExited);
	nextSpawnPoint = tile->GetAttachLocation();

}

void ARunCharacterGameMode::OnTileExited(ATile* tile)
{
	SpawnTile();

	FTimerHandle DestroyTimerHandle;
	FTimerDelegate TimerDelegate = FTimerDelegate::CreateUObject(this, &ARunCharacterGameMode::DestroyTile, tile);
	GetWorldTimerManager().SetTimer(DestroyTimerHandle, TimerDelegate, 2.0f, false);
	//tile->SetLifeSpan(1.0f);
}

void ARunCharacterGameMode::DestroyTile(ATile* tile)
{
	tile->Destroy();
}