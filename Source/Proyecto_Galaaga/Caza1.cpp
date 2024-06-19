// Fill out your copyright notice in the Description page of Project Settings.


#include "Caza1.h"

ACaza1::ACaza1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	velocidad = 100;
	movimiento = true;
	vida = 10;
}

void ACaza1::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACaza1::ataque1()
{
}

void ACaza1::Movimiento(float deltatime)
{
	FVector NewLocation = GetActorLocation() + FVector(0.0f, movimiento ? velocidad : -velocidad, 0.0f) * deltatime;
	SetActorLocation(NewLocation);
	if (GetActorLocation().Y > 1000)
	{
		movimiento = false;
	}
	else
		if (GetActorLocation().Y < -1000)
		{
			movimiento = true;
		}
}



void ACaza1::Tick(float deltatime)
{
	Super::Tick(deltatime);
	tiempo++;
	if (tiempo*10 == 300)
	{
		Disparar();
		tiempo = 0;
	}
}// Spawnea un proyectil en la posición y rotación del caza
void ACaza1::Disparar()
{
	
	AProyectil* proyectil = GetWorld()->SpawnActor<AProyectil>(GetActorLocation(), GetActorRotation());
	if (getVida() <= 5)
	{ 
	proyectilclonado = Cast<AProyectil>(proyectil->Clonar());
	}
	if (getVida() <= 3) {
		proyectilclonado2 = Cast<AProyectil>(proyectil->Clonar());
		proyectilclonado2->SetActorLocation(GetActorLocation() + FVector(0.0f, -100.0f, 0.0f));
	}
}