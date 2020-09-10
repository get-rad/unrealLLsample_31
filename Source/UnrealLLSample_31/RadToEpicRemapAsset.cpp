// Fill out your copyright notice in the Description page of Project Settings.


#include "RadToEpicRemapAsset.h"

FVector URadToEpicRemapAsset::ConvertRootPosition(FVector LLPosition) const
{
    // Unreal uses cm, so apply x100 conversion factor
    return 100 * FVector(
        LLPosition.X,
        LLPosition.Z,
        LLPosition.Y
    );
}

FQuat URadToEpicRemapAsset::ConvertRootRotation(FQuat LLRotation) const
{
    return FQuat(
        -LLRotation.Y,
        -LLRotation.Z,
        LLRotation.X,
        LLRotation.W
    );

    return FQuat(
        -LLRotation.X,
        LLRotation.Z,
        -LLRotation.Y,
        LLRotation.W
    );
}

FQuat URadToEpicRemapAsset::ConvertBoneRotation(FQuat LLRotation) const
{
    return FQuat(
        -LLRotation.X,
        LLRotation.Y,
        -LLRotation.Z,
        LLRotation.W
    );
}
