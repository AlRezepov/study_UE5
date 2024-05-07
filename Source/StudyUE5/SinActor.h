// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SinActor.generated.h"

UCLASS()
class STUDYUE5_API ASinActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASinActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MeshComp;

	UPROPERTY(EditAnywhere, Category = "SinWave")
	float Amplitude;

	UPROPERTY(EditAnywhere, Category = "SinWave")
	float Frequency;

	UPROPERTY(EditAnywhere, Category = "SinWave")
	FVector InitialLocation;

	UFUNCTION(BlueprintCallable)
	void SinMovement();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
