// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Caza.h"
#include "Caza1.generated.h"

/**
 * 
 */
UCLASS()
class PROYECTO_GALAAGA_API ACaza1 : public ACaza
{
	GENERATED_BODY()
public:
	ACaza1();
public:
	virtual void BeginPlay() override;
protected:
	virtual void ataque1();
public:
	virtual void Tick(float deltatime) override;
};
