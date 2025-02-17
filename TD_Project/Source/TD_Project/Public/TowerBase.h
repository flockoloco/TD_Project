// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "InteractInterface.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TowerBase.generated.h"

UCLASS()
class TD_PROJECT_API ATowerBase : public AActor, public IInteractInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATowerBase();
	virtual void IInteractInterface::OnInteract()  override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* StaticMeshComp;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
