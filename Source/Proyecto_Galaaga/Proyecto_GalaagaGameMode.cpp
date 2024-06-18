// Copyright Epic Games, Inc. All Rights Reserved.

#include "Proyecto_GalaagaGameMode.h"
#include "Proyecto_GalaagaPawn.h"
#include "random"
#include "Caza.h"
#include "Abstrac.h"
#include "Caza1.h"
#include "Caza2.h"
#include "Delta.h"
#include "Delta1.h"
#include "Delta2.h"

AProyecto_GalaagaGameMode::AProyecto_GalaagaGameMode()
{
	// set default pawn class to our character class
	//DefaultPawnClass = AProyecto_GalaagaPawn::StaticClass();
	PrimaryActorTick.bCanEverTick = true;

}

void AProyecto_GalaagaGameMode::BeginPlay()
{
	Super::BeginPlay();
	int a = 0;
	int b = 0;
	int c = 0;


	UWorld* const World = GetWorld();
	if (World != nullptr)
	{

		for (int i = 0; i < 1; i++) {
			FVector ubicacion = FVector(a, b, 215.0f);
			FRotator rotacion = FRotator(0.0f, 0.0f, 0.0f);
			int x = rand() % 1;
			switch (x) {
			case 0:
				World->SpawnActor<ACaza1>(ubicacion, rotacion);
				break;

			}
			b += 200;
			c++;
			if (c == 5) {
				b = 0;
				a += 200;
				c = 0;
			}
		}
	}
}


void AProyecto_GalaagaGameMode::Tick(float DeltaTime)
{
}