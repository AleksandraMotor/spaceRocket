#include "../include/director.hpp"

void DesignDirector::setVehicleBuilder(VehicleBuilder* newVehicleBuilder)
{
    vehicleBuilder = newVehicleBuilder;
}

Vehicle* DesignDirector::getVehicle()
{
    Vehicle* vehicle = new Vehicle();

    vehicle->velocity = vehicleBuilder->getSpeed();

    vehicle->space = vehicleBuilder->getNumSeats();

    vehicle->hold = vehicleBuilder->getCapacity();
    
    return vehicle;
}

void DesignDirector::setMissleBuilder(MissleBuilder* newMissleBuilder)
{
    missleBuilder = newMissleBuilder;
}

Missle* DesignDirector::getMissle()
{
    Missle* missle = new Missle();

    missle->velocity = missleBuilder->getSpeed();

    missle->distance = missleBuilder->getTank();

    missle->explosion = missleBuilder->getFirepower();

    return missle;
}    
