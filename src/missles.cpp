#include "../include/missles.hpp"

Speed* BulletRain::getSpeed()
{
    Speed* velocity = new Speed();
    velocity->v = 7600;
    return velocity;
} 

Tank* BulletRain::getTank()
{
    Tank* distance = new Tank();
    distance->vol = 1000;
    return distance;
}

Firepower* BulletRain::getFirepower()
{
    Firepower* explosion = new Firepower();
    explosion->energy = 0.003;
    return explosion;
}

Speed* SkyDriver::getSpeed()
{
    Speed* velocity = new Speed();
    velocity->v = 20000;
    return velocity;
} 

Tank* SkyDriver::getTank()
{
    Tank* distance = new Tank();
    distance->vol = 3000;
    return distance;
}

Firepower* SkyDriver::getFirepower()
{
    Firepower* explosion = new Firepower();
    explosion->energy = 1;
    return explosion;
}

Speed* JinxRocket::getSpeed()
{
    Speed* velocity = new Speed();
    velocity->v = 29000;
    return velocity;
} 

Tank* JinxRocket::getTank()
{
    Tank* distance = new Tank();
    distance->vol = 5500;
    return distance;
}

Firepower* JinxRocket::getFirepower()
{
    Firepower* explosion = new Firepower();
    explosion->energy = 28;
    return explosion;
}
