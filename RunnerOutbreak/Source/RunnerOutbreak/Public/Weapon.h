// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Projectile.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

UCLASS()
class RUNNEROUTBREAK_API AWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon();
	
	UFUNCTION()
	virtual void Fire(FTransform transform);
	UFUNCTION(BlueprintImplementableEvent)
	void OnFire();
	UFUNCTION(BlueprintCallable)
	FString GetName();
	UFUNCTION(BlueprintCallable)
	int GetAmmo();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ammo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MaxAmmo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AProjectile> projectile;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UArrowComponent* spawnPoint;
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	//class USceneComponent* rootScene;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class USkeletalMeshComponent* Mesh;

private:
	
	
};
