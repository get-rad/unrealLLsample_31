// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LiveLinkRemapAsset.h"
#include "RadicalLiveLinkRemapAssetBase.generated.h"

/**
 * 
 */
UCLASS()
class UNREALLLSAMPLE_31_API URadicalLiveLinkRemapAssetBase : public ULiveLinkRemapAsset
{
    GENERATED_BODY()

    virtual void BuildPoseFromAnimationData(float DeltaTime, const FLiveLinkSkeletonStaticData* InSkeletonData,
                                            const FLiveLinkAnimationFrameData* InFrameData,
                                            FCompactPose& OutPose) override;
protected:
    // Override these in child classes
    virtual FVector ConvertRootPosition(FVector LLPosition) const { return LLPosition; };
    virtual FQuat ConvertRootRotation(FQuat LLRotation) const { return LLRotation; };
    virtual FQuat ConvertBoneRotation(FQuat LLRotation) const { return LLRotation; };

    // This is the bone we will apply position translation to
    virtual FName GetTargetRootName() const;

    // Cached lookup results from GetRemappedBoneName
    TMap<FName, FName> BoneNameMap;
};
