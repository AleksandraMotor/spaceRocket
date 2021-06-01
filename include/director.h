#include "builders.h"
#include "rocketType.h"
#ifndef DIRECTOR_H
#define DIRECTOR_H

class DesignDirector     //Werner Von Braun !!
{
  VehicleBuilder* vehicleBuilder;
  MissleBuilder* missleBuilder;

  public:
    void setVehicleBuilder(VehicleBuilder* newVehicleBuilder)
    {
      vehicleBuilder = newVehicleBuilder;
    }

    Vehicle* getVehicle()
    {
      Vehicle* vehicle = new Vehicle();

      vehicle->velocity = vehicleBuilder->getSpeed();

      vehicle->space = vehicleBuilder->getNoSeats();

      vehicle->hold = vehicleBuilder->getCapacity();

      return vehicle;
    }

  public:
    void setMissleBuilder(MissleBuilder* newMissleBuilder)
    {
      missleBuilder = newMissleBuilder;
    }

    Missle* getMissle()
    {
      Missle* missle = new Missle();

      missle->velocity = missleBuilder->getSpeed();

      missle->distance = missleBuilder->getTank();

      missle->explosion = missleBuilder->getFirepower();

      return missle;
    }    
};

#endif