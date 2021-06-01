#include "properties.h"
#ifndef BUILDERS_H
#define BUILDERS_H

class VehicleBuilder
{
  public:
    virtual Speed* getSpeed() = 0;
    virtual NumSeats* getNumSeats() = 0;
    virtual Capacity* getCapacity() = 0;
};

class MissleBuilder
{
  public:
    virtual Speed* getSpeed() = 0;
    virtual Tank* getTank() = 0;
    virtual Firepower* getFirepower() = 0;  
}; 

#endif