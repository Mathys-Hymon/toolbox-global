// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "CameraData.generated.h"

/**
 * 
 */

UENUM()
enum class ECameraType : uint8
{
	FPS,
	TPS,
	STATIC,
	MOVABLE,
	CUSTOM
};

UCLASS()
class MULTICAM_API UCameraData : public UDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	ECameraType EType;

	UPROPERTY(EditAnywhere, meta=(EditCondition="EType == ECameraType::TPS || EType == ECameraType::MOVABLE || EType == ECameraType::CUSTOM"))
	bool bUseWhiskers;

	UPROPERTY(EditAnywhere, meta=(EditCondition="EType == ECameraType::TPS || EType == ECameraType::MOVABLE || EType == ECameraType::CUSTOM"))
	float SprintArmLenght = 300.0f;
	
};
