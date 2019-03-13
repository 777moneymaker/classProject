//
// Created by Miłosz Chodkowski on 2019-03-13.
//

#include <iostream>
#include <Headers/GlobalVariables.h>
#include <opencl-c.h>
#include "Headers/Class.h"

void WheelMachine::insertNewVehicle() {
    WheelMachine *newMachine = new WheelMachine;

    int numOfWheels;
    std::string engineType;
    float power;
    std::string name;

    std::cout << "Set parameters for new Vehicle:" << std::endl;
    std::cout <<"Set name: ";
    std::cin>>name;

    std::cout <<"Set num of wheels: ";
    std::cin>>numOfWheels;

    std::cout <<"Set engine type: ";
    std::cin>>engineType;

    std::cout <<"Set power: ";
    std::cin>>power;

    std::cin.ignore();

    newMachine->name = name;
    newMachine->numOfWheels = numOfWheels;
    newMachine->engineType = engineType;
    newMachine->power = power;
    newMachine->next = NULL;

    if(MachineHead == NULL) {
        MachineHead = newMachine;
        return;
    }

    while(MachineHead->next != NULL)
        MachineHead = MachineHead->next;
    MachineHead->next = newMachine;
    MachineHead = newMachine;
    return;
}

void Jet::insertNewJet() {
    Jet *newJet = new Jet;

    float power;
    std::string name;
    std::string landingGear;
    std::string colour;
    std::string weaponType;
    float maxSpeed;

    std::cout << "Set parameters for new Jet:" << std::endl;
    std::cout <<"Set name: ";
    std::cin>>name;

    std::cout <<"Set power: ";
    std::cin>>power;

    std::cout <<"Set landing gear: ";
    std::cin >> landingGear;

    std::cout <<"Set colour: ";
    std::cin >> colour;

    std::cout <<"Set weapon type: ";
    std::cin >> weaponType;

    std::cout <<"Set max speed: ";
    std::cin >> maxSpeed;

    std::cin.ignore();

    newJet->name = name;
    newJet->power = power;
    newJet->landingGear = landingGear;
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

    float power;
    std::string name;
    std::string landingGear;
    std::string heliType;
    float maxRPM;

    std::cout << "Set parameters for new Helicopter:" << std::endl;
    std::cout <<"Set power: ";
    std::cin>> power;

    std::cout <<"Set name: ";
    std::cin>> name;

    std::cout <<"Set landing gear: ";
    std::cin>> landingGear;

    std::cout <<"Set helicopter type: ";
    std::cin>> heliType;

    std::cout <<"Set max RPM: ";
    std::cin>> maxRPM;


    std::cin.ignore();

    newHeli->power = power;
    newHeli->name = name;
    newHeli->landingGear = landingGear;
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

    float power;
    std::string name;
    std::string powerSupplyType;
    std::string typeOfPropulsion;
    float maxSpeed;

    std::cout << "Set parameters for new Submarine:" << std::endl;
    std::cout <<"Set power: ";
    std::cin>> power;

    std::cout <<"Set name: ";
    std::cin>> name;

    std::cout <<"Set power supply type: ";
    std::cin>> powerSupplyType;

    std::cout <<"Set type of propulsion: ";
    std::cin>> typeOfPropulsion;

    std::cout <<"Set max speed: ";
    std::cin>> maxSpeed;

    std::cin.ignore();

    newSub->power = power;
    newSub->name = name;
    newSub->powerSupplyType = powerSupplyType;
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
    Ship *newShip = new Ship;

    float power;
    std::string name;
    std::string powerSupplyType;
    int numOfSeats;
    std::string shipType;

    std::cout << "Set parameters for new Ship" << std::endl;
    std::cout <<"Set power: ";
    std::cin>> power;

    std::cout <<"Set name: ";
    std::cin>> name;

    std::cout <<"Set power supply type: ";
    std::cin>> powerSupplyType;

    std::cout <<"Set number of seats: ";
    std::cin>> numOfSeats;

    std::cout <<"Set ship type: ";
    std::cin>> shipType;

    std::cin.ignore();

    newShip->power = power;
    newShip->name = name;
    newShip->powerSupplyType = powerSupplyType;
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

    float power;
    std::string name;
    float gasTankVolume;
    std::string missionType;
    float maxRange;

    std::cout << "Set parameters for new Rocket" << std::endl;
    std::cout <<"Set power: ";
    std::cin>> power;

    std::cout <<"Set name: ";
    std::cin>> name;

    std::cout <<"Set gas tank volume: ";
    std::cin>> gasTankVolume;

    std::cout <<"Set mission type ";
    std::cin>> missionType;

    std::cout <<"Set max range: ";
    std::cin>> maxRange;

    std::cin.ignore();

    newRocket->power=power;
    newRocket->name=name;
    newRocket->gasTankVolume=gasTankVolume;
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

void WheelMachine::deleteMachine(WheelMachine *del) {
    if(MachineHead==NULL || del == NULL)
        return;
    if(MachineHead == del)
        MachineHead=del->next;
    if(del->next != NULL){
        WheelMachine *temp;
        while(temp->next != del)
            temp=temp->next;
        temp->next=temp->next->next;
    }
    delete(del);
    return;
}

void Jet::deleteJet(Jet *del) {
    if (JetHead == NULL || del == NULL)
        return;
    if (JetHead == del)
        JetHead = del->next;
    if (del->next != NULL) {
        Jet *temp = JetHead;
        while (temp->next != del)
            temp = JetHead->next;
        temp->next = temp->next->next;
    }
    delete (del);
    return;
}

void Helicopter::deleteHeli(Helicopter *del) {
    if(HeliHead==NULL || del == NULL)
        return;
    if(HeliHead == del)
        HeliHead=del->next;
    if(del->next != NULL){
        Helicopter *temp = HeliHead;
        while(temp->next != del)
            temp = temp->next;
        temp->next= temp->next->next
    }
    delete(del);
    return;
}

void Submarine::deleteSubmarine(Submarine *del) {
    if(SubHead==NULL || del == NULL)
        return;
    if(SubHead == del)
        SubHead=del->next;
    if(del->next != NULL){
        Submarine *temp = SubHead;
        while(temp->next != del)
            temp = temp->next;
        temp->next= temp->next->next
    }
    delete(del);
    return;
}

void Ship::deleteShip(Ship *del) {
    if(ShipHead==NULL || del == NULL)
        return;
    if(ShipHead == del)
        ShipHead=del->next;
    if(del->next != NULL){
        Ship *temp = ShipHead;
        while(temp->next != del) {
            temp = temp->next;
        }
        temp->next= temp->next->next
    }
    delete(del);
    return;
}

void Rocket::deleteRocket(Rocket *del) {
    if(RocketHead==NULL || del == NULL)
        return;
    if(RocketHead == del)
        RocketHead=del->next;
    if(del->next != NULL){
        Rocket *temp = RocketHead;
        while(temp->next != del) {
            temp = temp->next;
        }
        temp->next= temp->next->next
    }
    delete(del);
    return;
}