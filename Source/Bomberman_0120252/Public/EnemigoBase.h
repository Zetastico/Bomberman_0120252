// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemigoBase.generated.h"

UCLASS()
class BOMBERMAN_0120252_API AEnemigoBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemigoBase();

private:
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* CubeVisual;

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

private:
    FVector MoveDirection;
    float MoveSpeed;
    int Contador;

    UFUNCTION()
    void OnCapsuleHit(UPrimitiveComponent* HitComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, FVector NormalImpulse,
        const FHitResult& Hit);
};