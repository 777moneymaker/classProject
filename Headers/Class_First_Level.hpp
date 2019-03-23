//
// Created by Miłosz Chodkowski on 2019-03-17.
//


#ifndef PROJEKT_PPO_CLASS_FIRST_LEVEL_H
#define PROJEKT_PPO_CLASS_FIRST_LEVEL_H

#include<iostream>
#include <fstream>
#include "Menu_Methods.hpp"

//
// FIRST LEVEL CLASSES
//
class WheelMachine : public Machine {
private:
    int numOfWheels;
protected:
    std::string engineType;
public:
    WheelMachine *next;                         // pointer to next object in class list
    void insertNewVehicle(std::string name);    // inserts newly created object & and sets it as new head
    void deleteMachine(WheelMachine *del);      // deletes object and rearrange list
    void printObjects();                        // prints objects of given class
    void printObjectinfo(std:: string name);    // prints info about given object(name)
    void modObject(std::string name);           // modificates given object(name)
    void saveObjects();                         // save object's of given class to filename WheelMachine.txt
    void readObjects();                         // reads object's of given class from filename WheelMachine.txt
}; // end of class WheelMachine

class FlyingMachine : public Machine {
private:
    int numberOfWings;
protected:
    std::string landingGear;
}; //end of class FlyingMachine

class FloatingMachine : public Machine {
private:
    float dippingLevel;
protected:
    std::string powerSupplyType;
}; //end of class FloatingMachine

class SpaceMachine : public Machine {
private:
    float range;
protected:
    float gasTankVolume;
}; //end of class SpaceMachine


#endif //PROJEKT_PPO_CLASS_FIRST_LEVEL_H
