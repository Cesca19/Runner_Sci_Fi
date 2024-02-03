// Fill out your copyright notice in the Description page of Project Settings.

#include "Tile.h"
#include "RunCharacter.h"
#include "Components/SceneComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/Actor.h"

// Sets default values
ATile::ATile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>("Root Scene");
	SetRootComponent(RootScene);
	Arrow = CreateDefaultSubobject<UArrowComponent>("AttachPoint");
	Arrow->SetupAttachment(RootScene);
	BoxCollision = CreateDefaultSubobject<UBoxComponent>("Box Collision");
	BoxCollision->SetupAttachment(RootScene);
	SpawnObstacleArea = CreateDefaultSubobject<UBoxComponent>("Spawn Obstacle Area");
	SpawnObstacleArea->SetupAttachment(RootScene);
	SpawnPickUpArea = CreateDefaultSubobject<UBoxComponent>("Spawn PickUp Area");
	SpawnPickUpArea->SetupAttachment(RootScene);
	SpawnEnemyArea = CreateDefaultSubobject<UBoxComponent>("Spawn Enemy Area");
	SpawnEnemyArea->SetupAttachment(RootScene);
}

FVector ATile::GetAttachLocation()
{
	return Arrow->GetComponentLocation();// -FVector(-500, -500, 0);
}

// Called when the game starts or when spawned
void ATile::BeginPlay()
{
	Super::BeginPlay();
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ATile::OnBoxBeginOverlap);

	SpawnObject(EnemyTypes, SpawnEnemyArea);
	SpawnObject(ObstaclesTypes, SpawnObstacleArea);
	SpawnObject(PickUpTypes, SpawnPickUpArea);
}

// Called every frame
void ATile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATile::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ARunCharacter* other = Cast<ARunCharacter>(OtherActor);
	if (other != NULL)
		OnExited.Broadcast(this);
}

FVector ATile::SpawnLocation(UBoxComponent* Box)
{
	FVector des = UKismetMathLibrary::RandomPointInBoundingBox(Box->GetComponentLocation(), Box->GetScaledBoxExtent());
	return des;
}

void ATile::SpawnObject(TArray<TSubclassOf<AActor>> type, UBoxComponent* Box)
{
	if (!type.Num()) return;
	int i = FMath::RandRange(0, type.Num() - 1);

	FTransform transform;
	transform.SetLocation(SpawnLocation(Box));
	UChildActorComponent* child = NewObject<UChildActorComponent>(this);
	child->bEditableWhenInherited = true;
	child->RegisterComponent();
	child->SetChildActorClass(type[i]);
	//	child->SetRelativeTransform(transform);
	child->SetWorldTransform(transform);
	child->CreateChildActor();
}

