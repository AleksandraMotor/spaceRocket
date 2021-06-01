#include <iostream>
#ifndef MESSAGE_H
#define MESSAGE_H

class Messages            
{
  public:
  void welcome()
  {                               
    std::cout << "wiadomosc powitalna." << std::endl;    
    /* "Rakiety są zbudowane z gotowych modułów (części), takich jak:
    silniki, skrzydła, koła, zbiorniki z paliwem i stateczniki. 
    Dodatkowe moduły, takie jak gotowe łaziki lub broń, mogą zostać dodane.
    Proponuję tutaj wypisać części, z których później będziemy budować,
    nie tylko dla użytkownika, ale tez dla nas, bo się gubię co ma co oznaczać. */
  }

  void goodbye()
  {
    std::cout << "wiadomosc pozegnalna." << std::endl;
  }

  void error()
  {
    std::cout << "This item is out of range." << std::endl;
    std::cout << "Please select an item from the assortment list."<< std::endl;
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
    std::cout << "Please select your rocket if you want to know its parametrs." << std::endl;
  }
}; 

#endif