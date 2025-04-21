// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PuertaTP.generated.h"

UCLASS()
class BOMBERMAN_0120252_API APuertaTP : public AActor
{
	GENERATED_BODY()
	
public:
    APuertaTP();

    virtual void BeginPlay() override;

    // Malla de la puerta
    UPROPERTY(VisibleAnywhere)
    class UStaticMeshComponent* DoorMesh;

    // Componente de colisión
    UPROPERTY(VisibleAnywhere)
    class UBoxComponent* TriggerBox;

    // Lista de todas las puertas
    static TArray<APuertaTP*> AllDoors;

protected:
    UFUNCTION()
    void OnOverlapBegin(
        UPrimitiveComponent* OverlappedComponent,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex,
        bool bFromSweep,
        const FHitResult& SweepResult
    );

private:
    // Cooldown
    bool bCanTeleport;
    FTimerHandle CooldownTimer;

    void ResetTeleport();

private:
    static TMap<ACharacter*, APuertaTP*> UltimaPuertaPorJugador;
};
