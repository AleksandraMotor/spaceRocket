#include <iostream>
#ifndef MESSAGE_H
#define MESSAGE_H

class Messages            
{
  public:
  void welcome()
  {                               
    std::cout << "wiadomosc powitalna." << std::endl;
  }

  void goodbye()
  {
    std::cout << "wiadomosc pozegnalna." << std::endl;
  }

  void error()
  {
    std::cout << "This item is out of range" << std::endl;
    std::cout << "Plese select item from assortment list."<< std::endl;
  }

  void ask()
  {
    std::cout << "Do you want check the parametrs of other rockets?[Y/N]" << std::endl;
  }

  void assortment()
  {
    std::cout << "|*------------------------ASSORTMENT------------------------*|" << std::endl;
    std::cout << "|*-------------------------Vehicles-------------------------*|" << std::endl;
    std::cout << "(1)                      Moon Rocket                   PRICE |" << std::endl;
    std::cout << "(2)                      Mars Rocket                   PRICE |" << std::endl;
    std::cout << "|*-------------------------Missles--------------------------*|" << std::endl;
    std::cout << "(3)                    Short Distance                  PRICE |" << std::endl;
    std::cout << "(4)                    Medium Distance                 PRICE |" << std::endl;
    std::cout << "(5)                     Long Distance                  PRICE |" << std::endl;
    std::cout << "|*----------------------------------------------------------*|" << std::endl;
    std::cout << "Please select your rocket if you want knew it parametrs." << std::endl;
  }
}; 

#endif