// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
//#include "RunCharacter.h"
#include "Kismet/GameplayStatics.h"
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

void AWeapon::Fire()
{
	FRotator pawnRotation = controller->PlayerCameraManager->GetCameraRotation();
	// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
	FVector pawnLocation = controller->GetPawn()->GetActorLocation() + pawnRotation.RotateVector(FVector(0.0f, 0.0f, 10.0f));

	FTransform transform = FTransform();
	transform.SetLocation(pawnLocation);
	transform.SetRotation(pawnRotation.Quaternion());

	if (projectile && ammo) {
		OnFire();
		//DrawDebugSphere(GetWorld(), transform.GetLocation(), 200, 15, FColor::Yellow);
		GetWorld()->SpawnActor(projectile, &transform) ;
		ammo--;
	}
}

void AWeapon::StartFiring()
{
	Fire();
}

void AWeapon::StopFiring()
{
}

FString AWeapon::GetName()
{
	return name;
}

int AWeapon::GetAmmo()
{
	return  ammo;
}

int AWeapon::GetMaxAmmo()
{
	return MaxAmmo;
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
	controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);
}


// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

