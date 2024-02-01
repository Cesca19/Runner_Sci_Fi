// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RunCharacterGameMode.generated.h"

/**
 * 
 */
UCLASS()
class RUNNEROUTBREAK_API ARunCharacterGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	ARunCharacterGameMode();
	void BeginPlay();
	UFUNCTION()
	void SpawnTile();
	UFUNCTION()
	void OnTileExited(ATile* tile);
	UFUNCTION()
	void DestroyTile(ATile* tile);

	UPROPERTY(EditAnywhere)
	class TSubclassOf<class ATile>TileClass;

	UPROPERTY(EditAnywhere)
	int startTileNumber;
private:
	FVector nextSpawnPoint;
};
