// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstacle.h"
#include "FireObstacle.generated.h"

/**
 * 
 */
UCLASS()
class RUNNEROUTBREAK_API AFireObstacle : public AObstacle
{
	GENERATED_BODY()
public:
	AFireObstacle();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamagePerSeconds;

	UFUNCTION(BlueprintImplementableEvent)
	void OnOverlap(AActor* OtherActor);

protected:
	virtual void OnObstacleBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) override;

	UPROPERTY()
	FTimerHandle AttackTimerHandle;
	UFUNCTION()
	void Attack(AActor* actor);
private:
	int timeElapsed;
};
