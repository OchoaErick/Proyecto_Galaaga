// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abstrac.h"
#include "Caza.generated.h"

/**
 *
 */
UCLASS()
class PROYECTO_GALAAGA_API ACaza : public AAbstrac
{
	GENERATED_BODY()
public:
	ACaza();
public:
	virtual void BeginPlay() override;


protected:
	virtual void ataque();
	float velocidad;
	bool movimiento;
	virtual void Movimiento(float deltatime) override;

public:
	virtual void Tick(float DeltaTime) override;
};