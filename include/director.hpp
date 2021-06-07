#include "builders.hpp"
#include "rocketType.hpp"
#ifndef DIRECTOR_H
#define DIRECTOR_H

class DesignDirector
{
  VehicleBuilder* vehicleBuilder;
  MissleBuilder* missleBuilder;
  
  public:
    void setVehicleBuilder(VehicleBuilder* newVehicleBuilder);
    Vehicle* getVehicle();
    void setMissleBuilder(MissleBuilder* newMissleBuilder);
    Missle* getMissle();
};   

#endif