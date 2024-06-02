// Fill out your copyright notice in the Description page of Project Settings.


#include "Caza1.h"

ACaza1::ACaza1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	velocidad = 100;
	movimiento = true;
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
	Movimiento(deltatime);
}
