// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"
#include "GameFramework/Pawn.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AProjectile::AProjectile()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SetRootComponent(Mesh);
	Mesh->SetCollisionProfileName("OverlapOnlyPawn");

	Movement = CreateDefaultSubobject<UProjectileMovementComponent>("Movement");
	Movement->UpdatedComponent = Mesh;
	Movement->InitialSpeed = 2000.0f;
	Movement->MaxSpeed = 2000.f;
	Movement->ProjectileGravityScale = 0.0f;
	Movement->bRotationFollowsVelocity = true;

	InitialLifeSpan = 3.0f;
	DamageAmount = 10.0f;
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	//Mesh->SetCollisionProfileName("NoCollision");
	OnActorHit.AddDynamic(this, &AProjectile::OnHit);
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectile::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	if (Cast<APawn>(OtherActor)) {
		OnCollision();
		UGameplayStatics::ApplyDamage(OtherActor, DamageAmount, GetInstigatorController(), this, UDamageType::StaticClass());
	}
	Destroy();
}

