// Fill out your copyright notice in the Description page of Project Settings.


#include "Delta1.h"

ADelta1::ADelta1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}

void ADelta1::BeginPlay()
{
}

void ADelta1::defensa1()
{
}

void ADelta1::Tick(float deltatime)
{
}
