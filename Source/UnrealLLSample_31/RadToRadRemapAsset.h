// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RadicalLiveLinkRemapAssetBase.h"

#include "RadToRadRemapAsset.generated.h"

/**
 * 
 */
UCLASS()
class UNREALLLSAMPLE_31_API URadToRadRemapAsset : public URadicalLiveLinkRemapAssetBase
{
    GENERATED_BODY()

protected:
    virtual FVector ConvertRootPosition(FVector LLPosition) const override;

    virtual FQuat ConvertRootRotation(FQuat LLRotation) const override;

    virtual FQuat ConvertBoneRotation(FQuat LLRotation) const override;
};
