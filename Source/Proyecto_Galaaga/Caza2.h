// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Caza.h"
#include "Caza2.generated.h"

/**
 * 
 */
UCLASS()
class PROYECTO_GALAAGA_API ACaza2 : public ACaza
{
	GENERATED_BODY()
public:
	ACaza2();
public:
	virtual void BeginPlay() override;
protected:
	virtual void ataque2();
public:
	virtual void Tick(float deltatime) override;
};
