// Fill out your copyright notice in the Description page of Project Settings.

#include "MultiCamComponent.h"

// Sets default values for this component's properties
UMultiCamComponent::UMultiCamComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMultiCamComponent::BeginPlay()
{
	Super::BeginPlay();

	Camera = GetWorld()->SpawnActor<AMC_Camera>(CameraClass);
	UE_LOG(LogTemp, Warning, TEXT("Camera Initialise Status : %s"),( Camera != nullptr ? TEXT("true"): TEXT("false") ));
	
}


// Called every frame
void UMultiCamComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                       FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

