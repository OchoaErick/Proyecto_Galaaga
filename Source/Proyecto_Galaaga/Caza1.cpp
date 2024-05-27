// Fill out your copyright notice in the Description page of Project Settings.


#include "Caza1.h"

ACaza1::ACaza1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}

void ACaza1::BeginPlay()
{
}

void ACaza1::ataque1()
{
}

void ACaza1::Tick(float deltatime)
{
}
