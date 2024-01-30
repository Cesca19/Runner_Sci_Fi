// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickUpWeapon.generated.h"

UCLASS()
class RUNNEROUTBREAK_API APickUpWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickUpWeapon();
	
	UFUNCTION(BlueprintImplementableEvent)
	void OnGet();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> WeaponType;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UStaticMeshComponent* StaticMesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	UFUNCTION()
	void OnPickUp(ARunCharacter* character);
	UFUNCTION()
	void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
};
