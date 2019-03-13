//
// Created by Miłosz Chodkowski on 2019-03-13.
//

#include <iostream>
#include <Headers/GlobalVariables.h>
#include <opencl-c.h>
#include "Headers/Class.h"

void Jet::insertNewJet() {
    Jet *newJet = new Jet;

    std::string colour;
    std::string weaponType;
    float maxSpeed;

    std::cout << "Set parameters for new Jet:" << std::endl;
    std::cout <<"Set colour: ";
    std::cin>>colour;

    std::cout <<"Set weapon type: ";
    std::cin>>weaponType;

    std::cout <<"Set max speed: ";
    std::cin >> maxSpeed;

    std::cin.ignore();

    newJet->colour = colour;
    newJet->weaponType = weaponType;
    newJet->maxSpeed = maxSpeed;
    newJet->next = NULL;

    if(JetHead == NULL) {
        JetHead = newJet;
        return;
    }

    while(JetHead->next != NULL)
        JetHead = JetHead->next;
    JetHead->next = newJet;
    JetHead = newJet;
    return;
}

void Helicopter::insertNewHeli() {
    Helicopter *newHeli = new Helicopter;

    std::string heliType;
    float maxRPM;

    std::cout << "Set parameters for new Helicopter:" << std::endl;
    std::cout <<"Set new type of Heli: ";
    std::cin>> heliType;

    std::cout <<"Set maxRPM: ";
    std::cin>> maxRPM;

    std::cin.ignore();

    newHeli->heliType = heliType;
    newHeli->maxRPM = maxRPM;
    newHeli->next = NULL;

    if(HeliHead == NULL) {
        HeliHead = newHeli;
        return;
    }

    while(HeliHead->next != NULL)
        HeliHead = HeliHead->next;
    HeliHead->next = newHeli;
    HeliHead = newHeli;
    return;
}

void Submarine::insertNewSubmarine() {
    Submarine *newSub = new Submarine;

    std::string typeOfPropulsion;
    float maxSpeed;

    std::cout << "Set parameters for new Submarine:" << std::endl;
    std::cout <<"Set new type of propulsion: ";
    std::cin>> typeOfPropulsion;

    std::cout <<"Set max speed: ";
    std::cin>> maxSpeed;

    std::cin.ignore();

    newSub->typeOfPropulsion = typeOfPropulsion;
    newSub->maxSpeed = maxSpeed;
    newSub->next = NULL;

    if(SubHead == NULL) {
        SubHead = newSub;
        return;
    }

    while(SubHead->next != NULL)
        SubHead = SubHead->next;
    SubHead->next = newSub;
    SubHead = newSub;
    return;
}

void Ship::insertNewShip() {
    Ship newShip = new Ship;

    int numOfSeats;
    std::string shipType;

    std::cout << "Set parameters for new Ship" << std::endl;
    std::cout <<"Set number of seats: ";
    std::cin>> numOfSeats;

    std::cout <<"Set new ship type";
    std::cin>> shipType;

    std::cin.ignore();

    newShip->numOfSeats = numOfSeats;
    newShip->shipType = shipType;
    newShip->next = NULL;

    if(ShipHead == NULL) {
        ShipHead = newShip;
        return;
    }

    while(ShipHead->next != NULL)
        ShipHead = ShipHead->next;
    ShipHead->next = newShip;
    ShipHead = newShip;
    return;
}

void Rocket::insertNewRocket() {
    Rocket *newRocket = new Rocket;

    std::string missionType;
    float maxRange;

    std::cout << "Set parameters for new Rocket" << std::endl;
    std::cout <<"Set mission type: ";
    std::cin>> missionType;

    std::cout <<"Set new range: ";
    std::cin>> maxRange

    std::cin.ignore();

    newRocket->missionType = missionType;
    newRocket->maxRange = maxRange;
    newRocket->next = NULL;

    if(RocketHead == NULL) {
        RocketHead = newRocket;
        return;
    }

    while(RocketHead->next != NULL)
        RocketHead = RocketHead->next;
    RocketHead->next = newRocket;
    RocketHead = newRocket;
    return;
}