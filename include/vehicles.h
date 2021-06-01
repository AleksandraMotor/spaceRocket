#include "properties.h"
#include "builders.h"
#ifndef VEHICLES_H
#define VEHICLE_H

class MoonRocket : public VehicleBuilder
{
  public:
    Speed* getSpeed()
    {
      Speed* velocity = new Speed();
      velocity->v = 30000;
      return velocity;
    } 

    NumSeats* getNumSeats()
    {
      NumSeats* space = new NumSeats();
      space->n = 6;
      return space;
    }

    Capacity* getCapacity()
    {
      Capacity* hold = new Capacity();
      hold->cap = 50;
      return hold;
    }
};

class MarsRocket : public VehicleBuilder
{
  public:
    Speed* getSpeed()
    {
      Speed* velocity = new Speed();
      velocity->v = 30000;
      return velocity;
    } 

    NumSeats* getNumSeats()
    {
      NumSeats* space = new NumSeats();
      space->n = 6;
      return space;
    }

    Capacity* getCapacity()
    {
      Capacity* hold = new Capacity();
      hold->cap = 50;
      return hold;
    }
};

#endif