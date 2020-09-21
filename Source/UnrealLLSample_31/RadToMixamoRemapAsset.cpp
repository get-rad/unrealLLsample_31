// Fill out your copyright notice in the Description page of Project Settings.


#include "RadToMixamoRemapAsset.h"

FVector URadToMixamoRemapAsset::ConvertRootPosition(FVector LLPosition) const
{
    // Unreal uses cm, so apply x100 conversion factor
    return 100 * FVector(
        LLPosition.X,
        -LLPosition.Y,
        LLPosition.Z
    );
}

FQuat URadToMixamoRemapAsset::ConvertRootRotation(FQuat LLRotation) const
{
    return FQuat(
        -LLRotation.Y,
        -LLRotation.X,
        -LLRotation.Z,
        LLRotation.W
    );
}

FQuat URadToMixamoRemapAsset::ConvertBoneRotation(FQuat LLRotation) const
{
    return FQuat(
        -LLRotation.X,
        LLRotation.Y,
        -LLRotation.Z,
        LLRotation.W
    );
}
