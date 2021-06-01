#include "properties.h"
#include "builders.h"
#ifndef MISSLES_H
#define MISSLES_H

class ShortDist : public MissleBuilder
{
  public:
    Speed* getSpeed()
    {
      Speed* velocity = new Speed();
      velocity->v = 1000;
      return velocity;
    } 

    Tank* getTank()
    {
      Tank* distance = new Tank();
      distance->vol = 20000;
      return distance;
    }

    Firepower* getFirepower()
    {
      Firepower* explosion = new Firepower();
      explosion->energy = 300;
      return explosion;
    }
};

class MidDist : public MissleBuilder
{
  public:
    Speed* getSpeed()
    {
      Speed* velocity = new Speed();
      velocity->v = 1000;
      return velocity;
    } 

    Tank* getTank()
    {
      Tank* distance = new Tank();
      distance->vol = 20000;
      return distance;
    }

    Firepower* getFirepower()
    {
      Firepower* explosion = new Firepower();
      explosion->energy = 300;
      return explosion;
    }
};

class LongDist : public MissleBuilder
{
  public:
    Speed* getSpeed()
    {
      Speed* velocity = new Speed();
      velocity->v = 1000;
      return velocity;
    } 

    Tank* getTank()
    {
      Tank* distance = new Tank();
      distance->vol = 20000;
      return distance;
    }

    Firepower* getFirepower()
    {
      Firepower* explosion = new Firepower();
      explosion->energy = 300;
      return explosion;
    }
};

#endif