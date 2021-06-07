#include "../include/vehicles.hpp"

Speed* MoonAdder::getSpeed()
{
    Speed* velocity = new Speed();
    velocity->v = 8000;
    return velocity;
} 

NumSeats* MoonAdder::getNumSeats()
{
    NumSeats* space = new NumSeats();
    space->n = 22;
    return space;
}

Capacity* MoonAdder::getCapacity()
{
    Capacity* hold = new Capacity();
    hold->cap = 16;
    return hold;
}

Speed* TalonSpace::getSpeed()
{
    Speed* velocity = new Speed();
    velocity->v = 25000;
    return velocity;
} 

NumSeats* TalonSpace::getNumSeats()
{
    NumSeats* space = new NumSeats();
    space->n = 10;
    return space;
}

Capacity* TalonSpace::getCapacity()
{
    Capacity* hold = new Capacity();
    hold->cap = 8;
    return hold;
}