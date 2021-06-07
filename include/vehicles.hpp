#include "properties.hpp"
#include "builders.hpp"
#ifndef VEHICLES_H
#define VEHICLE_H

class MoonAdder : public VehicleBuilder
{
  public:
    Speed* getSpeed();
    NumSeats* getNumSeats();
    Capacity* getCapacity();
};

class TalonSpace : public VehicleBuilder
{
  public:
    Speed* getSpeed();
    NumSeats* getNumSeats();
    Capacity* getCapacity();
};

#endif