// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Proyectil.h"
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
	float velocidad;
	bool movimiento;
	virtual void Movimiento(float deltatime) override;
public:
	virtual void Disparar();
	virtual void Tick(float deltatime) override;
	virtual void Moverse(float deltatime) {};


	float tiempo = 0;
private:
	int vida;
public:	
	FORCEINLINE int getVida() const { return vida; }
	FORCEINLINE void setVida(int _vida) { vida = _vida; }
private:
	class AProyectil* proyectilclonado;
	class AProyectil* proyectilclonado2;

};
