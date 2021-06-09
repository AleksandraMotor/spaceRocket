#include "../include/message.hpp"
#include <iostream>

void Messages::welcome()
{
    std::cout << "Welcome everyone to our \"Rock and Rockets\" store." 
                "Where can you buy a spaceship or missiles that will destroy what you want." << std::endl;    
}

void Messages::goodbye()
{
    std::cout << "Thanks for visiting and come back again! " << std::endl;
}

void Messages::error()
{
std::cout << "This item is out of range." << std::endl;
std::cout << "Please select an item from the assortment list."<< std::endl;
}

void Messages::ask()
{
    std::cout << "Do you want check the parametrs of other rockets?[Y/N]" << std::endl;
}

void Messages::assortment()
{
    std::cout << "|*------------------------ASSORTMENT------------------------*|" << std::endl;
    std::cout << "|*-------------------------Vehicles-------------------------*|" << std::endl;
    std::cout << "(1)                       Moon Adder                         |" << std::endl;
    std::cout << "(2)                      Talon Space                         |" << std::endl;
    std::cout << "|*-------------------------Missles--------------------------*|" << std::endl;
    std::cout << "(3)                      Bullet Rain                         |" << std::endl;
    std::cout << "(4)                       Sky Driver                         |" << std::endl;
    std::cout << "(5)                      Jinx Rocket                         |" << std::endl;
    std::cout << "|*----------------------------------------------------------*|" << std::endl;
    std::cout << "Please select your rocket if you want to know its parametrs." << std::endl;
}
