// Copyright Dayne Voller 2018.

#include "Tank.h"
#include "TankPlayerController.h"




ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}