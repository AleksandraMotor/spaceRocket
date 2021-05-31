#include <iostream>
#include <string>

//PROPERTIES
class Speed
{
  public:
    int v;
};

class NoSeats       //number of seats
{
  public:
    int n;
};

class Capacity
{
  public:
    int cap;
};

class Tank
{
  public:
    int vol;
};

class Firepower
{
  public:
    int energy;   //to trzeba zmienic, nie podoba mi sie ta nazwa
};

class Vehicle
{
  public:
    Speed*    velocity;
    NoSeats*  space;
    Capacity* hold;

    void parameters()
    {
      std::cout << "Maximum speed: " << velocity->v << std::endl;
      std::cout << "Maximum stuff: " << space->n << std::endl;
      std::cout << "Maximum hold capacity: " <<  hold->cap << std::endl;
    }
};

/*class Bullet
{
}
*/

class VehicleBuilder
{
  public:
    virtual Speed* getSpeed() = 0;
    virtual NoSeats* getNoSeats() = 0;
    virtual Capacity* getCapacity() = 0;
};

/*class BulletBuilder
{
} 
*/
class DesignDirector     //Werner Von Braun !!
{
  VehicleBuilder* vehicleBuilder;

  public:
    void setVehicleBuilder(VehicleBuilder* newVehicleBuilder)
    {
      vehicleBuilder = newVehicleBuilder;
    }

    Vehicle* getVehicle()
    {
      Vehicle* vehicle = new Vehicle();

      vehicle->velocity = vehicleBuilder->getSpeed();

      vehicle->space = vehicleBuilder->getNoSeats();

      vehicle->hold = vehicleBuilder->getCapacity();

      return vehicle;
    }
};
//---------Concretes builders-------------
class MoonRocket : public VehicleBuilder
{
    public:
      Speed* getSpeed()
      {
        Speed* velocity = new Speed();
        velocity->v = 30000;
        return velocity;
      } 

      NoSeats* getNoSeats()
      {
        NoSeats* space = new NoSeats();
        space->n = 6;
        return space;
      }

      Capacity* getCapacity()
      {
        Capacity* hold = new Capacity();
        hold->cap = 50;
        return hold;
      }

};


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



/*class Messeges            //tutaj mysle dac powitalna wiadomosc oraz wiadomosci o tym z czego sklada sie dana rakieta jako metody klasy 
{                             

} 
*/

int main()
{
  Vehicle* vehicle;

  DesignDirector director;

  MoonRocket moonRocket;

  std::cout << "Moon Rocket" << std::endl;
  director.setVehicleBuilder(&moonRocket);
  vehicle = director.getVehicle();
  vehicle->parameters();
  return 0;
}