// Fill out your copyright notice in the Description page of Project Settings.


#include "RadToRadRemapAsset.h"

FVector URadToRadRemapAsset::ConvertRootPosition(FVector LLPosition) const
{
    // Unreal uses cm, so apply x100 conversion factor
    return 100 * FVector(
        LLPosition.X,
        LLPosition.Z,
        LLPosition.Y
    );

    //Unity:
    return 100 * FVector(
        -LLPosition.X,
        LLPosition.Y,
        LLPosition.Z
    );
}

FQuat URadToRadRemapAsset::ConvertRootRotation(FQuat LLRotation) const
{
    return FQuat(
        -LLRotation.X,
        LLRotation.Y,
        -LLRotation.Z,
        LLRotation.W
    );


    // return FQuat(
    //     LLRotation.Y,
    //     LLRotation.Z,
    //     LLRotation.X,
    //     LLRotation.W
    // );

    return FQuat(
        LLRotation.Z,
        LLRotation.Y,
        LLRotation.X,
        LLRotation.W
    );
}

FQuat URadToRadRemapAsset::ConvertBoneRotation(FQuat LLRotation) const
{
    return FQuat(
        -LLRotation.X,
        LLRotation.Y,
        -LLRotation.Z,
        LLRotation.W
    );
    // return FQuat(
    //     LLRotation.X,
    //     -LLRotation.Y,
    //     -LLRotation.Z,
    //     LLRotation.W
    // );

    //same for root and bone in Unity
    return FQuat(
        LLRotation.X,
        -LLRotation.Y,
        -LLRotation.Z,
        LLRotation.W
    );
}
