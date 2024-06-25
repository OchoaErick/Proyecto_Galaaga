// Fill out your copyright notice in the Description page of Project Settings.


#include "Fabrica.h"
#include "Caza1.h"
#include "Caza2.h"
// Sets default values
AFabrica::AFabrica()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	t1 = 0;

}

// Called when the game starts or when spawned
void AFabrica::BeginPlay()
{
	Super::BeginPlay();
	

}

// Called every frame
void AFabrica::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	t1++;
		if (t1 == 150 && navesVivas2 == 0)
		{
			CrearNaves("escuadron1");
			t2 = 150;
		}
		else if (t2 == 150 && navesVivas == 0)
		{
			CrearNaves2("escuadron2");
			t2 = 0;
		}
	

}

void AFabrica::CrearNaves(FString escuadron1)
{
	if (escuadron1 == "escuadron1")
	{
		int a = 0;
		int b = 0;
		int c = 0;

		for (int i = 0; i < 5; i++) {
			FVector ubicacion(a, b, 150.0f);
			FRotator rotacion = FRotator(0.0f, 0.0f, 0.0f);
			ACaza1* caza1x1 = GetWorld()->SpawnActor<ACaza1>(ubicacion, rotacion);
			if (caza1x1) {
				caza1x1 ->OnDestroyed.AddDynamic(this, &AFabrica::NavesDestruidas);
				EscuadronesActuales.Add(caza1x1);
				navesVivas++;
			}
			b += 150;
			c++;
			if (c == 5) {
				b = 0;
				a += 150;
				c = 0;
			}
		}
	}
}

void AFabrica::CrearNaves2(FString escuadron2)
{
	if (escuadron2 == "escuadron2")
	{
		int a = -300;
		int b = 0;
		int c = 0;

		for (int i = 0; i < 5; i++) {
			FVector ubicacion(a, b, 150.0f);
			FRotator rotacion = FRotator(0.0f, 0.0f, 0.0f);
			ACaza2* caza2x1 = GetWorld()->SpawnActor<ACaza2>(ubicacion, rotacion);
			if (caza2x1) {
				caza2x1->OnDestroyed.AddDynamic(this, &AFabrica::NavesDestruidas);
                EscuadronesActuales2.Add(caza2x1);
				navesVivas2++;
			}
			b += 150;
			c++;
			if (c == 5) {
				b = 0;
				a += 150;
				c = 0;
			}
		}
	}
}

void AFabrica::NavesDestruidas(AActor* DestroyedActor)
{
	ACaza1* NavesDestruidas = Cast<ACaza1>(DestroyedActor);
	ACaza2* NavesDestruidas2 = Cast<ACaza2>(DestroyedActor);
	if (NavesDestruidas) {
		EscuadronesActuales.Remove(NavesDestruidas);
		navesVivas--;
		EscuadronesActuales2.Remove(NavesDestruidas2);
		navesVivas2--;
		
		
		if(navesVivas == 0)
		{
			t1 = 0;
		}
		else
			
		if (navesVivas2 == 0)
		{
			t2 = 0;
		}
	}
}




	



