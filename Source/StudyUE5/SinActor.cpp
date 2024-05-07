// Fill out your copyright notice in the Description page of Project Settings.

#include "SinActor.h"

// Sets default values
ASinActor::ASinActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	SetRootComponent(MeshComp);
}

// Called when the game starts or when spawned
void ASinActor::BeginPlay()
{
	Super::BeginPlay();
	InitialLocation = GetActorLocation();
}

void ASinActor::SinMovement()
{
	float DeltaHeight = Amplitude * FMath::Sin(Frequency * GetWorld()->GetTimeSeconds());

	InitialLocation.Z += DeltaHeight;

	SetActorLocation(InitialLocation);
}

// Called every frame
void ASinActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SinMovement();
}
