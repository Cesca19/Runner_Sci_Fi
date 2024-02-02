// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstacle.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

// Sets default values
AObstacle::AObstacle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootScene = CreateDefaultSubobject<USceneComponent>("Root Scene");
	SetRootComponent(RootScene);
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	Mesh->SetupAttachment(RootScene);
	//Mesh->SetCollisionProfileName("OverlapOnlyPawn");
	//SetRootComponent(Mesh);
}

// Called when the game starts or when spawned
void AObstacle::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &AObstacle::OnObstacleBeginOverlap);
	OnActorEndOverlap.AddDynamic(this, &AObstacle::OnObstacleEndOverlap);
}

void AObstacle::OnObstacleBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
}

void AObstacle::OnObstacleEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
}

// Called every frame
void AObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

