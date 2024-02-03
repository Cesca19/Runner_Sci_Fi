// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/ArrowComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>("Mesh");
	SetRootComponent(Mesh);
	spawnPoint = CreateDefaultSubobject<UArrowComponent>("Bullet Spawn");
	spawnPoint->SetupAttachment(Mesh);
	name = "Default";
	ammo = 3;

}

void AWeapon::Fire(FTransform transform)
{
	if (projectile && ammo) {
		OnFire();
		//DrawDebugSphere(GetWorld(), transform.GetLocation(), 200, 15, FColor::Yellow);
		GetWorld()->SpawnActor(projectile, &transform) ;
		ammo--;
	}
}

FString AWeapon::GetName()
{
	return name;
}

int AWeapon::GetAmmo()
{
	return  ammo;
}

void AWeapon::AddAmmo(int amount)
{
	ammo += amount;
	ammo = FMath::Clamp(ammo, 0, MaxAmmo);
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	ammo = MaxAmmo;
	Mesh->SetCollisionProfileName("NoCollision");
}


// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

