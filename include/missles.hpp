#include "properties.hpp"
#include "builders.hpp"
#ifndef MISSLES_H
#define MISSLES_H

class BulletRain : public MissleBuilder
{
  public:
    Speed* getSpeed();
    Tank* getTank();
    Firepower* getFirepower();
};

class SkyDriver : public MissleBuilder
{
  public:
    Speed* getSpeed();
    Tank* getTank();
    Firepower* getFirepower();
};

class JinxRocket : public MissleBuilder
{
  public:
    Speed* getSpeed();
    Tank* getTank();
    Firepower* getFirepower();
};

#endif