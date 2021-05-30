#include <iostream>
#include <string>

//PROPERTIES
class Speed
{
  Public:
    int v;
};

class NoSeats       //number of seats
{
  Public:
    int n;
};

class Capacity
{
  Public:
    int cap;
};

class Tank
{
  Public:
    int vol;
};

class Firepower
{
  Public:
    int energy;   //to trzeba zmienic, nie podoba mi sie ta nazwa
};

class Vehicle_Builder
{
  Public:
    virtual Speed* getSpeed() = 0;
    virtual NoSeats* getNoSeats = 0;
    virtual Capacity* getCapacity = 0;
};


/*class Bullet_Builder
{
} 
*/

//---------Concretes builders-------------
/*class Moon_Rocket
{
}
*/

/*class Mars_Rocket
{
}
*/


/*class Short_Dist
{
}
*/


/*class Mid_Dist
{
}
*/


/*class Long_Dist
{
}
*/
//----------------------------------------

/*class Design_Director     //Werner Von Braun !!
{
}
 */

/*class Messeges            //tutaj mysle dac powitalna wiadomosc oraz wiadomosci o tym z czego sklada sie dana rakieta jako metody klasy 
{                             

} 
*/

int main()
{



  return 0;
}
