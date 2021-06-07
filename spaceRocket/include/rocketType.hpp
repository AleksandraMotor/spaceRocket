#include <iostream>
#include "properties.hpp"
#ifndef ROCKETTYPE_H
#define ROCKETTYPE_H

class Vehicle
{
  public:
    Speed*    velocity;
    NumSeats*  space;
    Capacity* hold;

    void parameters()
    {
      std::cout << "Maximum speed: " << velocity->v << " km/s" << std::endl;
      std::cout << "Maximum stuff: " << space->n << " people" << std::endl;
      std::cout << "Maximum hold capacity: " << hold->cap << " tons" << std::endl;
    }
};

class Missle
{
  public:
    Speed*     velocity;
    Tank*      distance;
    Firepower* explosion;

    void parameters()
    {
      std::cout << "Maximum speed: " << velocity->v << " km/s" << std::endl;
      std::cout << "Maximum distance: " << distance->vol << " km" << std::endl;
      std::cout << "Blast power: " << explosion->energy << " mt TNT" <<std::endl;
    }  
};

#endif