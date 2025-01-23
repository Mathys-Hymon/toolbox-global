// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "MC_Camera.generated.h"

UCLASS()
class MULTICAM_API AMC_Camera : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMC_Camera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
