#include "../include/rocketType.hpp"

void Vehicle::parameters()
{
    std::cout << "Maximum speed: " << velocity->v << " km/s" << std::endl;
    std::cout << "Maximum stuff: " << space->n << " people" << std::endl;
    std::cout << "Maximum hold capacity: " << hold->cap << " tons" << std::endl;
}


void Missle::parameters()
{
    std::cout << "Maximum speed: " << velocity->v << " km/s" << std::endl;
    std::cout << "Maximum distance: " << distance->vol << " km" << std::endl;
    std::cout << "Blast power: " << explosion->energy << " mt TNT" <<std::endl;
}  
