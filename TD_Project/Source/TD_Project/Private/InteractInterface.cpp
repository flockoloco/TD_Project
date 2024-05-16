// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractInterface.h"

// Add default functionality here for any IInteractInterface functions that are not pure virtual.

void IInteractInterface::OnInteract()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Chamaste um default :O"));
}
