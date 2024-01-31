// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseEnemy.generated.h"

UCLASS()
class RUNNEROUTBREAK_API ABaseEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UHealthComponent* HealthComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Movespeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamageAmount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttackSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DetectionRange;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
