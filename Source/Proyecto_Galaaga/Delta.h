// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abstrac.h"
#include "Delta.generated.h"

/**
 * 
 */
UCLASS()
class PROYECTO_GALAAGA_API ADelta : public AAbstrac
{
	GENERATED_BODY()
public:
	ADelta();
public:
	virtual void BeginPlay() override;
protected:
	virtual void defensa();
	virtual void Movimiento(float deltatime) override;
public:
	virtual void Tick(float deltatime) override;
};
