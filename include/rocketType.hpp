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
    void parameters();
};

class Missle
{
  public:
    Speed*     velocity;
    Tank*      distance;
    Firepower* explosion;
    void parameters();
};

#endif