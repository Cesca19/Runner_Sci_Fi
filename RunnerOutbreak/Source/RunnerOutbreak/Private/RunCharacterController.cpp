// Fill out your copyright notice in the Description page of Project Settings.


#include "RunCharacterController.h"
#include "Weapon.h"
#include "RunCharacter.h"

void ARunCharacterController::BeginPlay()
{
	Super::BeginPlay();
	runCharacter = Cast<ARunCharacter>(GetPawn());

}

void ARunCharacterController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!runCharacter) return;
	runCharacter->AddMovementInput(runCharacter->GetActorForwardVector());
}

void ARunCharacterController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAxis("MoveRight", this, &ARunCharacterController::MoveRight);
	InputComponent->BindAxis("LookUp", this, &ARunCharacterController::LookUp);
	InputComponent->BindAxis("LookRight", this, &ARunCharacterController::LookRight);
	InputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &ARunCharacterController::Jump);
	InputComponent->BindAction("Fire", EInputEvent::IE_Pressed, this, &ARunCharacterController::Fire);
}

void ARunCharacterController::MoveRight(float offset)
{
	if (!runCharacter) return;
	runCharacter->AddMovementInput(runCharacter->GetActorRightVector(), offset);
}

void ARunCharacterController::LookUp(float offset)
{
	if (!runCharacter) return;
	runCharacter->AddControllerPitchInput(offset);
}

void ARunCharacterController::LookRight(float offset)
{
	if (!runCharacter) return;
	runCharacter->AddControllerYawInput(offset);
}

void ARunCharacterController::Jump()
{
	runCharacter->Jump();
}

void ARunCharacterController::Fire()
{
	
	AWeapon* weapon = runCharacter->GetWeapon();

	FRotator pawnRotation = PlayerCameraManager->GetCameraRotation();
	// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
	FVector pawnLocation = runCharacter->GetActorLocation() + pawnRotation.RotateVector(FVector(100.0f, 0.0f, 10.0f));

	FTransform transform = FTransform();
	transform.SetLocation(pawnLocation);
	transform.SetRotation(pawnRotation.Quaternion());
	if (weapon) {
		weapon->Fire(transform);
	}
}

