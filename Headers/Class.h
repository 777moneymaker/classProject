//
// Created by Miłosz Chodkowski on 2019-03-12.
//

#ifndef PROJEKT_PPO_CLASS_H
#define PROJEKT_PPO_CLASS_H

#include<iostream>
#include "MenuFunctions.h"

//  base class
class Machine {
private:
    float mass;

protected:
    float power;
public:
    std::string name;
};

// ************************************* 1st subclasses
class WheelMachine : public Machine {
private:
    int numOfWheels;

protected:
    std::string engineType;

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
// *************************************


// ************************************* 2nd subclasses
class Jet : public FlyingMachine {
private:
    std::string colour;

protected:
    std::string weaponType;
    float maxSpeed;

public:
    Jet *next;
    void insertNewJet();
};

class Helicopter : public FlyingMachine {
private:
    std::string heliType;

protected:
    float maxRPM;

public:
    Helicopter *next;
    void insertNewHeli();
};

class Submarine : public FloatingMachine {
private:
    std::string typeOfPropulsion;

protected:
    float maxSpeed;

public:
    Submarine *next;
    void insertNewSubmarine();
};

class Ship : public FloatingMachine {
private:
    int numOfSeats;

protected:
    std::string shipType;

public:
    Ship *next;
    void insertNewShip();
};

class Rocket : public SpaceMachine {
private:
    std::string missionType;

protected:
    float maxRange;

public:
    Rocket *next;
    void insertNewRocket();
};
// *************************************
#endif //PROJEKT_PPO_CLASS_H
