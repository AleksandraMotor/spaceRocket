#include "director.h"
#include "vehicles.h"
#include "rocketType.h"
#include <iostream>
#include "message.h"
#include "missles.h"
#ifndef MENU_H
#define MENU_H

class Menu
{
  public:
  DesignDirector director;
  Messages messages;
  
  void menu(int &option)
  {
    switch (option)
        {
        case 1:
          {
          MoonRocket moonRocket;
          Vehicle* vehicle;
          std::cout << "Moon Rocket" << std::endl;
          director.setVehicleBuilder(&moonRocket);
          vehicle = director.getVehicle();
          vehicle->parameters();
          break;
          }
        case 2:
          {
          MarsRocket marsRocket;
          Vehicle* vehicle;
          std::cout << "Mars Rocket" << std::endl;
          director.setVehicleBuilder(&marsRocket);
          vehicle = director.getVehicle();
          vehicle->parameters();
          break;
          }
        case 3:
          {
          ShortDist shortDist;
          Missle* missle;
          std::cout << "Short distance missle" << std::endl;
          director.setMissleBuilder(&shortDist);
          missle = director.getMissle();
          missle->parameters();
          break;
          }
        case 4:
          {
          MidDist midDist;
          Missle* missle;
          std::cout << "Medium distance missle" << std::endl;
          director.setMissleBuilder(&midDist);
          missle = director.getMissle();
          missle->parameters();
          break;
          }
        case 5:
          {
          LongDist longDist;
          Missle* missle;
          std::cout << "Short distance missle" << std::endl;
          director.setMissleBuilder(&longDist);
          missle = director.getMissle();
          missle->parameters();
          messages.error();
          break;   
          }
        default:
          messages.error();
          break;
        }
  }
};

#endif