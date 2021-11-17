// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.generated.h"

UCLASS()
class MINECRAFT_API ABlock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlock();

	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* SM_Block;

	UPROPERTY(EditAnywhere)
	int BlockIndex = 0;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
};
