// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tile.generated.h"

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExitedDelegate, class ATile*, tile);

UCLASS()
class RUNNEROUTBREAK_API ATile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATile();

	UFUNCTION()
	FVector GetAttachLocation();
	UPROPERTY(BlueprintAssignable, Category = "EventDispatchers")
	FOnExitedDelegate OnExited;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class USceneComponent* RootScene;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UArrowComponent* Arrow;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UBoxComponent* BoxCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UBoxComponent* SpawnObstacleArea;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UBoxComponent* SpawnPickUpArea;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UBoxComponent* SpawnEnemyArea;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AActor>> EnemyTypes;
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AActor>> ObstaclesTypes;
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AActor>> PickUpTypes;

	UFUNCTION()
	void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	FVector SpawnLocation(UBoxComponent* Box);
	UFUNCTION()
	void SpawnObject(TArray<TSubclassOf<AActor>> type, UBoxComponent* Box);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
