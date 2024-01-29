// Fill out your copyright notice in the Description page of Project Settings.


#include "PickUpWeapon.h"
#include "RunCharacter.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
APickUpWeapon::APickUpWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SetRootComponent(StaticMesh);
}

// Called when the game starts or when spawned
void APickUpWeapon::BeginPlay()
{
	Super::BeginPlay();
	OnActorHit.AddDynamic(this, &APickUpWeapon::OnHit);
}

// Called every frame
void APickUpWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APickUpWeapon::OnPickUp(ARunCharacter* character)
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT(""));
	OnGet();
	if (WeaponType)
		character->AddWeapon(WeaponType);
	Destroy();
}

void APickUpWeapon::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	ARunCharacter* character = Cast<ARunCharacter>(OtherActor);
	if (character)
		OnPickUp(character);
}

