// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Delta.h"
#include "Delta1.generated.h"

/**
 * 
 */
UCLASS()
class PROYECTO_GALAAGA_API ADelta1 : public ADelta
{
	GENERATED_BODY()
public:
	ADelta1();
public:
	virtual void BeginPlay() override;
protected:
	virtual void defensa1();
	float velocidad;
	bool movimiento;
	virtual void Movimiento(float deltatime)override;
public:
	virtual void Tick(float deltatime) override;
	
};
