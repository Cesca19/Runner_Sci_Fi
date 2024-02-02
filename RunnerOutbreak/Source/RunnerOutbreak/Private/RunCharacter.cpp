// Fill out your copyright notice in the Description page of Project Settings.


#include "RunCharacter.h"
#include "HealthComponent.h"
#include "Weapon.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

ARunCharacter::ARunCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(GetRootComponent());
	Camera->bUsePawnControlRotation = true;

	PlayerMesh = CreateDefaultSubobject<USkeletalMeshComponent>("Player");
	PlayerMesh->SetupAttachment(Camera);


	GetCharacterMovement()->MaxWalkSpeed = 700.0f;

	HealthComponent = CreateDefaultSubobject<UHealthComponent>("Health Component");
	HealthComponent->MaxHealth = 100.0f;
	HealthComponent->OnHealthDepleted.AddDynamic(this, &ARunCharacter::Die);
	hasWeapon = false;
	TravelledDistance = 0;
}


void ARunCharacter::AddWeapon(TSubclassOf<AWeapon> type)
{
	Weapon->SetChildActorClass(type);
	weapon  = Cast<AWeapon>(Weapon->GetChildActor());
}

AWeapon* ARunCharacter::GetWeapon()
{
	return weapon;
}

void ARunCharacter::AddAcceleration(float offset)
{
	GetCharacterMovement()->MaxWalkSpeed = GetCharacterMovement()->MaxWalkSpeed + offset;
}

FString ARunCharacter::GetWeaponName()
{
	if (weapon) {
		return weapon->GetName();
	}
	return FString("No Weapon");
}

int ARunCharacter::GetWeaponAmmo()
{
	if (weapon)
		return weapon->GetAmmo();
	else
		return 0;
}

float ARunCharacter::GetCurrentHealth()
{
	return HealthComponent->getCurrentHealth();
}

int ARunCharacter::GetDistance()
{
	return TravelledDistance / 100;
}

// Called when the game starts or when spawned
void ARunCharacter::BeginPlay()
{
	Super::BeginPlay();

	lastLocation = GetActorLocation();

	Weapon = NewObject<UChildActorComponent>(this);
	Weapon->bEditableWhenInherited = true;
	Weapon->RegisterComponent();
	Weapon->CreateChildActor();
	if (StartWeapon) {
		Weapon->SetChildActorClass(StartWeapon);
		weapon = Cast<AWeapon>(Weapon->GetChildActor());
	}
	Weapon->AttachToComponent(PlayerMesh, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), FName(TEXT("WeaponSocket")));
}

// Called every frame
void ARunCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TravelledDistance += GetCharacterMovement()->Velocity.Size() * GetWorld()->GetDeltaSeconds();
}

// Called to bind functionality to input
void ARunCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
}

void ARunCharacter::Die()
{
	DisableInput(GetWorld()->GetFirstPlayerController());
	GetCharacterMovement()->DisableMovement();
	PlayerMesh->SetVisibility(false);
	Weapon->SetVisibility(false);
	OnDeath.Broadcast();
	// s'assurer que c 'est cela
	OnPlayerDeath();
}
