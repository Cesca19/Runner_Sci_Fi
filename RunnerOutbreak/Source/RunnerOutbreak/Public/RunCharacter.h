// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RunCharacter.generated.h"

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeath);

UCLASS()
class RUNNEROUTBREAK_API ARunCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARunCharacter();
	
	UFUNCTION()
	void AddWeapon(TSubclassOf<AWeapon> type);
	UFUNCTION()
	AWeapon* GetWeapon();

	/* Character abilities modifier */
	UFUNCTION()
	void AddAcceleration(float offset);
	void AddAmmo(int number);

	UFUNCTION(BlueprintCallable)
	FString GetWeaponName();
	UFUNCTION(BlueprintCallable)
	int GetWeaponAmmo();
	UFUNCTION(BlueprintCallable)
	float GetCurrentHealth();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable, Category = "EventDispatchers")
	FOnDeath OnDeath;
	UFUNCTION(BlueprintImplementableEvent)
	void OnPlayerDeath();
	UFUNCTION(BlueprintCallable)
	int GetDistance();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UCameraComponent* Camera;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UChildActorComponent* Weapon;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class USkeletalMeshComponent* PlayerMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UHealthComponent* HealthComponent;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AWeapon> StartWeapon;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:
	float TravelledDistance;
	bool hasWeapon;
	AWeapon* weapon;
	FVector lastLocation;
	UFUNCTION()
	void Die();
};
