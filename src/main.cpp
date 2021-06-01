#include "../include/menu.h"
#include "../include/message.h"
#include <iostream>

int main()
{
  //variables
  int menuOption;
  char askOption;
  bool flag = true;
  Messages messages;
  Menu* menu = new Menu();
  
  //Welcome messege
  messages.welcome();

  //Menu
  do
  {
    messages.assortment();
    std::cin >> menuOption;
    menu->menu(menuOption);
    
    messages.ask();
    std::cin >> askOption;
    if(askOption == 'Y' || askOption == 'y')
      flag = true;
    else
      flag = false;
  }
  while(flag);

  messages.goodbye();  

  return 0;
}
