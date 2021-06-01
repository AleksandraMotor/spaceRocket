#include <iostream>
#include <string>

//PROPERTIES
class Speed
{
  public:
    int v;
};

class NumSeats       //number of seats (short from Number is "No.", but we can't use commas, so better "NumSeats, then "no" Seats)
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

class Firepower /*Siła ognia to zdolność militarna do kierowania siłą na wroga. 
                (Nie należy go mylić z pojęciem szybkostrzelności, które opisuje cykliczne działanie mechanizmu strzelającego w systemie uzbrojenia). 
                Siła ognia obejmuje całą gamę potencjalnych broni. Nie rozumiem co ta klasa ma opisywać? Siłę pocisków? */
{
  public:
    int energy; 
};

class Vehicle
{
  public:
    Speed*    velocity;
    NumSeats*  space;
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
    virtual NumSeats* getNumSeats() = 0;
    virtual Capacity* getCapacity() = 0;
};

class MissleBuilder
{
  public:
    virtual Speed* getSpeed() = 0;
    virtual Tank* getTank() = 0;
    virtual Firepower* getFirepower() = 0;  
}; 

class DesignDirector     //Werner Von Braun -> Widmo jego nazistowskiej przeszłości powróciło na początku lat siedemdziesiątych. Lepiej go zostawmy w spokoju :P !!
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

      vehicle->space = vehicleBuilder->getNumSeats();

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
//---------Concretes Vehicle builders------------- Betony konstruktor pojazdu?? Może details? albo specifications?
class MoonRocket : public VehicleBuilder
{
  public:
    Speed* getSpeed()
    {
      Speed* velocity = new Speed();
      velocity->v = 30000;
      return velocity;
    } 

    NumSeats* getNumSeats()
    {
      NumSeats* space = new NumSeats();
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

    NumSeats* getNumSeats()
    {
      NumSeats* space = new NumSeats();
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

//---------Concretes Bullet builders---------- "Konstruktorzy pocisków betonowych" Może details? albo specifications tak technicznie brzmi
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
    /* "Rakiety są zbudowane z gotowych modułów (części), takich jak:
    silniki, skrzydła, koła, zbiorniki z paliwem i stateczniki. 
    Dodatkowe moduły, takie jak gotowe łaziki lub broń, mogą zostać dodane.
    Proponuję tutaj wypisać części, z których później będziemy budować,
    nie tylko dla użytkownika, ale tez dla nas, bo się gubię co ma co oznaczać. */
  }

  void goodbye()
  {
    std::cout << "wiadomosc pozegnalna." << std::endl;
    /*  „May the 4th be with You!” XD */
  }

  void error()
  {
    std::cout << "This item is out of range." << std::endl;
    std::cout << "Please select an item from the assortment list."<< std::endl;
  }

  void ask()
  {
    std::cout << "Do you want to check the parameters of other rockets?"[Y/N]" << std::endl;
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
    std::cout << "Please select your rocket if you want to know its parameters." << std::endl;
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
