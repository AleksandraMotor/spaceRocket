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
    int energy;
};

class Vehicle
{
  public:
    Speed*    velocity;
    NoSeats*  space;
    Capacity* hold;

    void parameters()
    {
      std::cout << "Maximum speed: " << velocity->v << " km/s" << std::endl;
      std::cout << "Maximum stuff: " << space->n << " people" << std::endl;
      std::cout << "Maximum hold capacity: " << hold->cap << " tons" << std::endl;
    }
};

class Missle
{
  public:
    Speed*     velocity;
    Tank*      distance;
    Firepower* explosion;

    void parameters()
    {
      std::cout << "Maximum speed: " << velocity->v << " km/s" << std::endl;
      std::cout << "Maximum distance: " << distance->vol << " km" << std::endl;
      std::cout << "Blast radius: " << explosion->energy << " km" <<std::endl;
    }  
};

class VehicleBuilder
{
  public:
    virtual Speed* getSpeed() = 0;
    virtual NoSeats* getNoSeats() = 0;
    virtual Capacity* getCapacity() = 0;
};

class MissleBuilder
{
  public:
    virtual Speed* getSpeed() = 0;
    virtual Tank* getTank() = 0;
    virtual Firepower* getFirepower() = 0;  
}; 

class DesignDirector     //Werner Von Braun !!
{
  VehicleBuilder* vehicleBuilder;
  MissleBuilder* missleBuilder;

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
    void setMissleBuilder(MissleBuilder* newMissleBuilder)
    {
      missleBuilder = newMissleBuilder;
    }

    Missle* getMissle()
    {
      Missle* missle = new Missle();

      missle->velocity = missleBuilder->getSpeed();

      missle->distance = missleBuilder->getTank();

      missle->explosion = missleBuilder->getFirepower();

      return missle;
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

class MarsRocket : public VehicleBuilder
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
class ShortDist : public MissleBuilder
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

class MidDist : public MissleBuilder
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

class LongDist : public MissleBuilder
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


int main()
{
  //variables
  int menuOption;
  char askOption;
  bool flag = true;
  Messeges messeges;
  DesignDirector director;
  
  //Welcome messege
  messeges.welcome();

  //Menu
  do
  {
    messeges.assortment();
    std::cin >> menuOption;

    switch (menuOption)
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
      break;   
      }
    default:
      messeges.error();
      break;
    }
    
    messeges.ask();
    std::cin >> askOption;
    if(askOption == 'Y' || askOption == 'y')
      flag = true;
    else
      flag = false;
  }
  while(flag);

  messeges.goodbye();  

  return 0;
}