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
	float velocidad;
	bool movimiento;
	virtual void Movimiento(float deltatime)override;
public:
	virtual void Tick(float deltatime) override;
	//hereda la vida de la clase abstarct
private:
	int vida;
public:
	FORCEINLINE int getVida() const { return vida; }
	FORCEINLINE void setVida(int _vida) { vida = _vida; }

};
