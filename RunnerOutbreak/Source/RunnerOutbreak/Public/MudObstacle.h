// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstacle.h"
#include "MudObstacle.generated.h"

/**
 * 
 */
UCLASS()
class RUNNEROUTBREAK_API AMudObstacle : public AObstacle
{
	GENERATED_BODY()
	AMudObstacle();
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SlowDownOffset;
protected:
	virtual void OnObstacleBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) override;
	virtual void OnObstacleEndOverlap(AActor* OverlappedActor, AActor* OtherActor) override;
};
