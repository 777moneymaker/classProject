//
// Created by Miłosz Chodkowski on 2019-03-17.
//


#ifndef PROJEKT_PPO_CLASS_SECOND_LEVEL_H
#define PROJEKT_PPO_CLASS_SECOND_LEVEL_H

#include<iostream>
#include <fstream>
#include "Class_Base.hpp"
#include "Class_Second_Level.hpp"
#include "Menu_Methods.hpp"

//
// SECOND LEVEL CLASSES
//
class Jet : public FlyingMachine {
private:
    std::string colour;
protected:
    std::string weaponType;
    float maxSpeed;
public:
    Jet *next;                                  // pointer to next object in class list
    void insertNewJet(std::string name);        // inserts newly created object & and sets it as new head
    void deleteJet(Jet *del);                   // deletes object and rearrange list
    void printObjects();                        // prints objects of given class
    void printObjectinfo(std:: string name);    // prints info about given object(name)
    void modObject(std::string name);           // modificates given object(name)
    void saveObjects();                         // save object's of given class to filename Jet.txt
    void readObjects();                         // reads object's of given class from filename Jet.txt
};//end of class Jet

class Helicopter : public FlyingMachine {
private:
    std::string heliType;
protected:
    float maxRPM;
public:
    Helicopter *next;                           // pointer to next object in class list
    void insertNewHeli(std::string name);       // inserts newly created object & and sets it as new head
    void deleteHeli(Helicopter *del);           // deletes object and rearrange list
    void printObjects();                        // prints objects of given class
    void printObjectinfo(std:: string name);    // prints info about given object (name)
    void modObject(std::string name);           // modificates given object (name)
    void saveObjects();                         // save object's of given class to filename Helicopter.txt
    void readObjects();                         // reads object's of given class from filename Helicopter.txt
};

class Submarine : public FloatingMachine {
private:
    std::string typeOfPropulsion;
protected:
    float maxSpeed;
public:
    Submarine *next;                            // pointer to next object in class list
    void insertNewSubmarine(std::string name);  // inserts newly created object & and sets it as new head
    void deleteSubmarine(Submarine *del);       // deletes object and rearrange list
    void printObjects();                        // prints objects of given class
    void printObjectinfo(std:: string name);    // prints info about given object (name)
    void modObject(std::string name);           // modificates given object (name)
    void saveObjects();                         // save object's of given class to filename Submarine.txt
    void readObjects();                         // reads object's of given class from filename Submarine.txt
};

class Ship : public FloatingMachine {
private:
    int numOfSeats;
protected:
    std::string shipType;
public:
    Ship *next;                                 // pointer to next object in class list
    void insertNewShip(std::string name);       // inserts newly created object & and sets it as new head
    void deleteShip(Ship *del);                 // deletes object and rearrange list
    void printObjects();                        // prints objects of given class
    void printObjectinfo(std:: string name);    // prints info about given object (name)
    void modObject(std::string name);           // modificates given object (name)
    void saveObjects();                         // save object's of given class to filename Ship.txt
    void readObjects();                         // reads object's of given class from filename Ship.txt
};

class Rocket : public SpaceMachine {
private:
    std::string missionType;
protected:
    float maxRange;
public:
    Rocket *next;                               // pointer to next object in class list
    void insertNewRocket(std::string name);     // inserts newly created object & and sets it as new head
    void deleteRocket(Rocket *del);             // deletes object and rearrange list
    void printObjects();                        // prints objects of given class
    void printObjectinfo(std:: string name);    // prints info about given object (name)
    void modObject(std::string name);           // modificates given object (name)
    void saveObjects();                         // save object's of given class to filename Rocket.txt
    void readObjects();                         // reads object's of given class from filename Rocket.txt
};


#endif //PROJEKT_PPO_CLASS_SECOND_LEVEL_H
