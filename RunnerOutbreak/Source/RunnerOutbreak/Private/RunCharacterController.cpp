// Fill out your copyright notice in the Description page of Project Settings.


#include "RunCharacterController.h"
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

