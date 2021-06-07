#include "../include/menu.hpp"

void Menu::menuDisplay(int option)
{
switch (option)
    {
    case 1:
        {
        MoonAdder moonAdder;
        Vehicle* vehicle;
        std::cout << "Moon Adder" << std::endl;
        director.setVehicleBuilder(&moonAdder);
        vehicle = director.getVehicle();
        vehicle->parameters();
        delete vehicle;
        break;
        }
    case 2:
        {
        TalonSpace talonSpace;
        Vehicle* vehicle;
        std::cout << "Talon Space" << std::endl;
        director.setVehicleBuilder(&talonSpace);
        vehicle = director.getVehicle();
        vehicle->parameters();
        delete vehicle;
        break;
        }
    case 3:
        {
        BulletRain bulletRain;
        Missle* missle;
        std::cout << "Bullet Rain" << std::endl;
        director.setMissleBuilder(&bulletRain);
        missle = director.getMissle();
        missle->parameters();
        delete missle;
        break;
        }
    case 4:
        {
        SkyDriver skyDriver;
        Missle* missle;
        std::cout << "Sky Driver" << std::endl;
        director.setMissleBuilder(&skyDriver);
        missle = director.getMissle();
        missle->parameters();
        delete missle;
        break;
        }
    case 5:
        {
        JinxRocket jinxRocket;
        Missle* missle;
        std::cout << "Jinx Rocket" << std::endl;
        director.setMissleBuilder(&jinxRocket);
        missle = director.getMissle();
        missle->parameters();
        delete missle;
        break;   
        }
    default:
        messages.error();
        break;
    }
}