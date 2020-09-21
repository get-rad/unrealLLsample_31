// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RadicalLiveLinkRemapAssetBase.h"
#include "RadToMixamoRemapAsset.generated.h"

/**
 * 
 */
UCLASS()
class UNREALLLSAMPLE_31_API URadToMixamoRemapAsset : public URadicalLiveLinkRemapAssetBase
{
	GENERATED_BODY()
	virtual FVector ConvertRootPosition(FVector LLPosition) const override;

	virtual FQuat ConvertRootRotation(FQuat LLRotation) const override;

	virtual FQuat ConvertBoneRotation(FQuat LLRotation) const override;
};
