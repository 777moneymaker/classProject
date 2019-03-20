//
// Created by Miłosz Chodkowski on 2019-03-12.
//

#ifndef PROJEKT_PPO_CLASS_H
#define PROJEKT_PPO_CLASS_H

#include<iostream>
#include "MenuFunctions.hpp"

class Machine {       // Base Class
private:
    float mass;
protected:
    float power;
public:
    std::string name;
};

class WheelMachine : public Machine {    // First level
private:
    int numOfWheels;
protected:
    std::string engineType;
public:
    WheelMachine *next;
    void insertNewVehicle(std::string name);
    void deleteMachine(WheelMachine *del);
    void printObjects();
    void printObjectinfo(std:: string name);
    void modObject(std::string name);
};

class FlyingMachine : public Machine {
private:
    int numberOfWings;
protected:
    std::string landingGear;
};

class FloatingMachine : public Machine {
private:
    float dippingLevel;
protected:
    std::string powerSupplyType;
};

class SpaceMachine : public Machine {
private:
    float range;
protected:
    float gasTankVolume;
};

class Jet : public FlyingMachine {  // Second level
private:
    std::string colour;
protected:
    std::string weaponType;
    float maxSpeed;
public:
    Jet *next;
    void insertNewJet(std::string name);
    void deleteJet(Jet *del);
    void printObjects();
    void printObjectinfo(std:: string name);
    void modObject(std::string name);
};

class Helicopter : public FlyingMachine {
private:
    std::string heliType;
protected:
    float maxRPM;
public:
    Helicopter *next;
    void insertNewHeli(std::string name);
    void deleteHeli(Helicopter *del);
    void printObjects();
    void printObjectinfo(std:: string name);
    void modObject(std::string name);
};

class Submarine : public FloatingMachine {
private:
    std::string typeOfPropulsion;
protected:
    float maxSpeed;
public:
    Submarine *next;
    void insertNewSubmarine(std::string name);
    void deleteSubmarine(Submarine *del);
    void printObjects();
    void printObjectinfo(std:: string name);
    void modObject(std::string name);
};

class Ship : public FloatingMachine {
private:
    int numOfSeats;
protected:
    std::string shipType;
public:
    Ship *next;
    void insertNewShip(std::string name);
    void deleteShip(Ship *del);
    void printObjects();
    void printObjectinfo(std:: string name);
    void modObject(std::string name);
};

class Rocket : public SpaceMachine {
private:
    std::string missionType;
protected:
    float maxRange;
public:
    Rocket *next;
    void insertNewRocket(std::string name);
    void deleteRocket(Rocket *del);
    void printObjects();
    void printObjectinfo(std:: string name);
    void modObject(std::string name);
};

#endif //PROJEKT_PPO_CLASS_H
