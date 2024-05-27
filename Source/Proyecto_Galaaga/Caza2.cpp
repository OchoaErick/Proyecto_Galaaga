// Fill out your copyright notice in the Description page of Project Settings.


#include "Caza2.h"

ACaza2::ACaza2()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}

void ACaza2::BeginPlay()
{
}

void ACaza2::ataque2()
{
}

void ACaza2::Tick(float deltatime)
{
}
