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
      std::cout << "Maximum speed: " << velocity->v << "km/s" << std::endl;
      std::cout << "Maximum stuff: " << space->n << "people" << std::endl;
      std::cout << "Maximum hold capacity: " << hold->cap << "tons" << std::endl;
    }
};

class Bullet
{
  public:
    Speed*     velocity;
    Tank*      distance;
    Firepower* explosion;

    void parameters()
    {
      std::cout << "Maximum speed: " << velocity->v << "km/s" << std::endl;
      std::cout << "Maximum distance: " << distance->vol << "km" << std::endl;
      std::cout << "Blast radius: " << explosion->energy << "km" <<std::endl;
    }  
};

class VehicleBuilder
{
  public:
    virtual Speed* getSpeed() = 0;
    virtual NoSeats* getNoSeats() = 0;
    virtual Capacity* getCapacity() = 0;
};

class BulletBuilder
{
  public:
    virtual Speed* getSpeed() = 0;
    virtual Tank* getTank() = 0;
    virtual Firepower* getFirepower() = 0;  
}; 

class DesignDirector     //Werner Von Braun !!
{
  VehicleBuilder* vehicleBuilder;
  BulletBuilder* bulletBuilder;

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

  public:
    void setBulletBuilder(BulletBuilder* newBulletBuilder)
    {
      bulletBuilder = newBulletBuilder;
    }

    Bullet* getBullet()
    {
      Bullet* bullet = new Bullet();

      bullet->velocity = bulletBuilder->getSpeed();

      bullet->distance = bulletBuilder->getTank();

      bullet->explosion = bulletBuilder->getFirepower();

      return bullet;
    }    
};
//---------Concretes Vehicle builders-------------
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

class Mars_Rocket : public VehicleBuilder
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

//---------Concretes Bullet builders----------
class Short_Dist : public BulletBuilder
{
  public:
    Speed* getSpeed()
    {
      Speed* velocity = new Speed();
      velocity->v = 1000;
      return velocity;
    } 

    Tank* getTank()
    {
      Tank* distance = new Tank();
      distance->vol = 20000;
      return distance;
    }

    Firepower* getFirepower()
    {
      Firepower* explosion = new Firepower();
      explosion->energy = 300;
      return explosion;
    }
};

class Mid_Dist : public BulletBuilder
{
  public:
    Speed* getSpeed()
    {
      Speed* velocity = new Speed();
      velocity->v = 1000;
      return velocity;
    } 

    Tank* getTank()
    {
      Tank* distance = new Tank();
      distance->vol = 20000;
      return distance;
    }

    Firepower* getFirepower()
    {
      Firepower* explosion = new Firepower();
      explosion->energy = 300;
      return explosion;
    }
};

class Long_Dist : public BulletBuilder
{
  public:
    Speed* getSpeed()
    {
      Speed* velocity = new Speed();
      velocity->v = 1000;
      return velocity;
    } 

    Tank* getTank()
    {
      Tank* distance = new Tank();
      distance->vol = 20000;
      return distance;
    }

    Firepower* getFirepower()
    {
      Firepower* explosion = new Firepower();
      explosion->energy = 300;
      return explosion;
    }
};
//----------------------------------------

class Messeges            
{
  void welcome()
  {                               
    std::cout << "wiadomosc powitalna." << std::endl;
  }

  void goodbye()
  {
    std::cout << "wiadomosc pozegnalna." << std::endl;
  }

  void menu()
  {
    std::cout << "opcje do wyboru" << std::endl;
  }
}; 


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