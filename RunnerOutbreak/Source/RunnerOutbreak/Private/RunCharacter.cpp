// Fill out your copyright notice in the Description page of Project Settings.


#include "RunCharacter.h"
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

	GetCharacterMovement()->MaxWalkSpeed = 900.0f;
	hasWeapon = false;
}


void ARunCharacter::AddWeapon(TSubclassOf<AActor> type)
{
	Weapon->SetChildActorClass(type);
}

// Called when the game starts or when spawned
void ARunCharacter::BeginPlay()
{
	Super::BeginPlay();

	Weapon = NewObject<UChildActorComponent>(this);
	Weapon->bEditableWhenInherited = true;
	Weapon->RegisterComponent();
	Weapon->CreateChildActor();
	Weapon->AttachToComponent(PlayerMesh, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), FName(TEXT("WeaponSocket")));
}

// Called every frame
void ARunCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARunCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
