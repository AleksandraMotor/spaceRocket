#include "director.hpp"
#include "message.hpp"
#include "vehicles.hpp"
#include "missles.hpp"
#ifndef MENU_H
#define MENU_H

class Menu
{
  DesignDirector director;
  Messages messages;
  public:
    void menuDisplay(int a);
};
#endif