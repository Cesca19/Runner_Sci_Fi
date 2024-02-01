// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemy.h"
#include "HealthComponent.h"
#include "RunCharacter.h"
#include "TimerManager.h"
#include "AIController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "GenericPlatform/GenericPlatformMath.h"
#include "Navigation/PathFollowingComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ABaseEnemy::ABaseEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	HealthComponent = CreateDefaultSubobject<UHealthComponent>("Health Component");
	DamagingBox = CreateDefaultSubobject<UBoxComponent>("Damaging Box");
	DamagingBox->SetupAttachment(RootComponent);
	DamagingBox->SetCollisionProfileName("OverlapOnlyPawn");
}

/*
bool ABaseEnemy::GetIsDead()
{
	if (HealthComponent->getCurrentHealth() == 0)
		return true;
	return false;
}*/

// Called when the game starts or when spawned
void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();
	enemyController = Cast<AAIController>(GetController());
	player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	GetCharacterMovement()->MaxWalkSpeed = Movespeed;
	DamagingBox->OnComponentBeginOverlap.AddDynamic(this, &ABaseEnemy::OnDamageBoxOverlap);
	DamagingBox->OnComponentEndOverlap.AddDynamic(this, &ABaseEnemy::OnDamageBoxEndOverlap);
}

// Called every frame
void ABaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!enemyController) return;

	if (FGenericPlatformMath::Abs(FVector::Distance(player->GetActorLocation(), GetActorLocation())) <= DetectionRange) {
		enemyController->MoveToActor(player, 100, true, true, true);
		//if (enemyController->MoveToActor(player, 100, true, true, true) == EPathFollowingRequestResult::Type::RequestSuccessful){}
			//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));

	}
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));
}

// Called to bind functionality to input
void ABaseEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABaseEnemy::OnDamageBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ARunCharacter* actor = Cast<ARunCharacter>(OtherActor);
	if (actor) {
		FTimerDelegate Delegate;
		Delegate.BindUFunction(this, "Attack", OtherActor);
		GetWorld()->GetTimerManager().SetTimer(AttackTimerHandle, Delegate, 1.0f, true, 0.0f);
	}
}

void ABaseEnemy::OnDamageBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{	
	if (Cast<ARunCharacter>(OtherActor))
		GetWorld()->GetTimerManager().ClearTimer(AttackTimerHandle);
}

void ABaseEnemy::Attack(AActor* actor)
{
	UGameplayStatics::ApplyDamage(actor, DamageAmount, GetInstigatorController(), this, UDamageType::StaticClass());
}

