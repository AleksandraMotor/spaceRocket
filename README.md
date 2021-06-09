# Rock&Rockets Co.

The "rock&Rockets" program creates rockets from scratch. Whether you want to explore space or blow up your enemies we got you covered!

## Table of Contents

* [General information](#general-information)
* [Technologies](#technologies)
* [Setup](#setup)
* [Changelog](#changelog)
* [Sources](#sources)
* [DevStuff](#developers)

## General Information
 
  Using the "Builder" design pattern, we created an application that allows you to build a rocket tailored to your individual needs.
  The builder is a creative design pattern that gives the ability to create complex objects step by step. This pattern allows manufacturing different types and representations of an object using the same construction code.
## Technologies

  Project is created with:
  * C++ version: 17.0

## Setup
### Installation:
 1. get a makefile api from: [makefile install](https://www.gnu.org/software/make/)
 2. clone the repository 
 ```
 $ https://github.com/AleksandraMotor/spaceRocket.git
 $ cd spaceRocket
 $ make
 ``` 
 3. clean 
 ``` 
 $ make clean
 ``` 
 
The directory structure:
```
spaceRocket
├── Makefile
├── src
│   └── main.cpp
│   └── director.cpp
│   └── vehicles.cpp
│   └── missles.cpp
│   └── message.cpp
│   └── menu.cpp
│   └── rocketType.cpp
└── include
    ├── builders.hpp
    ├── director.hpp
    ├── menu.hpp
    ├── message.hpp
    ├── missles.hpp
    ├── properties.hpp
    ├── rocketType.hpp
    ├── vehicles.hpp
```

## Changelog

  #### version 1.0
    * added main.cpp code
    * fixed bugs
  
  #### version 1.1
    * added welcome and goodbye messages
    * added include folder and class files
    * added makefile code
  #### version 1.2 
    * Added Vehicles
     - Moon Rocket
     - Mars Rocket
    * Added Missiles
     - Short Distance
     - Medium Distance
     - Long Distance
## Sources

  The inspiration for the creation of the program was an article about the design pattern from the website:
[Refactoring](https://refactoring.guru/pl/design-patterns/builder?fbclid=IwAR1rcdXvBowsoDcANUUvhslLGe2IGXwATqt070e-DtIxNwmpw37gZfWRLNA)

## Developers

  Program was created by following students:
### [Aleksandra Motor](https://github.com/AleksandraMotor)
### [Weronika Smagór](https://github.com/werooloo)
### [Krzysztof Konieczny](https://github.com/Linarian235)
### [Patryk Polczyk](https://github.com/ppolczyk)
