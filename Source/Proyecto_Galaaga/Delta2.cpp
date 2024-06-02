// Fill out your copyright notice in the Description page of Project Settings.


#include "Delta2.h"

ADelta2::ADelta2()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	velocidad = 100;
	movimiento = true;
}

void ADelta2::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADelta2::defensa2()
{
}

void ADelta2::Movimiento(float deltatime)
{
	FVector NewLocation = GetActorLocation() + FVector(0.0f, movimiento ? velocidad : -velocidad, 0.0f) * deltatime;
	SetActorLocation(NewLocation);
	if (GetActorLocation().Y > 1800)
	{
		movimiento = false;
	}
	else
		if (GetActorLocation().Y < -1800)
		{
			movimiento = true;
		}
}

void ADelta2::Tick(float deltatime)
{
	Super::Tick(deltatime);
	Movimiento(deltatime);
}
