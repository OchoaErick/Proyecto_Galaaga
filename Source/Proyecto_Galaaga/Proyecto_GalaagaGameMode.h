// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Proyecto_GalaagaGameMode.generated.h"

UCLASS(MinimalAPI)
class AProyecto_GalaagaGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AProyecto_GalaagaGameMode();
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};