//
// Created by Miłosz Chodkowski on 2019-03-13.
//

#include <iostream>
#include <Headers/GlobalVariables.hpp>
#include "Headers/Class.hpp"

void WheelMachine::insertNewVehicle(std::string name) {
    WheelMachine *newMachine = new WheelMachine;

    int numOfWheels;
    std::string engineType;
    float power;

    std::cout << "Set parameters for new Vehicle:" << std::endl;
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

    if(MachineHead == NULL) {
        MachineHead = newMachine;
        return;
    }
    newMachine->next = MachineHead;
    MachineHead=newMachine;
    return;
}

void Jet::insertNewJet(std::string name) {
    Jet *newJet = new Jet;
    float power, maxSpeed;
    std::string landingGear, colour, weaponType;

    std::cout << "Set parameters for new Jet:" << std::endl;
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
    newJet->next=NULL;

    if(JetHead == NULL) {
        JetHead = newJet;
        return;
    }
    newJet->next = JetHead;
    JetHead = newJet;
    return;
}

void Helicopter::insertNewHeli(std::string name) {
    Helicopter *newHeli = new Helicopter;
    float power, maxRPM;
    std::string landingGear, heliType;

    std::cout << "Set parameters for new Helicopter:" << std::endl;
    std::cout <<"Set power: ";
    std::cin>> power;

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
    newHeli->next=NULL;

    if(HeliHead == NULL) {
        HeliHead = newHeli;
        return;
    }
    newHeli->next = HeliHead;
    HeliHead = newHeli;
    return;
}

void Submarine::insertNewSubmarine(std::string name) {
    Submarine *newSub = new Submarine;
    float power, maxSpeed;
    std::string powerSupplyType, typeOfPropulsion;

    std::cout << "Set parameters for new Submarine:" << std::endl;
    std::cout <<"Set power: ";
    std::cin>> power;

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
    newSub->next=NULL;

    if(SubHead == NULL) {
        SubHead = newSub;
        return;
    }
    newSub->next = SubHead;
    SubHead = newSub;
    return;
}

void Ship::insertNewShip(std::string name) {
    Ship *newShip = new Ship;
    float power;
    int numOfSeats;
    std::string powerSupplyType, shipType;

    std::cout << "Set parameters for new Ship" << std::endl;
    std::cout <<"Set power: ";
    std::cin>> power;

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
    newShip->next=NULL;

    if(ShipHead == NULL) {
        ShipHead = newShip;
        return;
    }
    newShip->next = ShipHead;
    ShipHead = newShip;
    return;
}

void Rocket::insertNewRocket(std::string name) {
    Rocket *newRocket = new Rocket;
    float power, gasTankVolume, maxRange;
    std::string missionType;

    std::cout << "Set parameters for new Rocket" << std::endl;
    std::cout <<"Set power: ";
    std::cin>> power;

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
    newRocket->next=NULL;

    if(RocketHead == NULL) {
        RocketHead = newRocket;
        return;
    }
    newRocket->next = newRocket;
    RocketHead = newRocket;
    return;
}

void WheelMachine::deleteMachine(WheelMachine *del) {
    if(MachineHead==NULL || del == NULL)
        return;
    if(MachineHead == del) {
        MachineHead = MachineHead->next;
        delete (del);
        return;
    }
    if(del->next != NULL){
        WheelMachine *temp = MachineHead;
        while(temp->next != del)
            temp=temp->next;
        temp->next=temp->next->next;
        delete(del);
        return;
    }
    return;
}

void Jet::deleteJet(Jet *del) {
    if (JetHead == NULL || del == NULL) {
        return;
    }
    if (del == JetHead) {
        JetHead = JetHead->next;
        delete(del);
        return;
    }
    if (del->next != NULL) {
        Jet *temp = JetHead;
        while (temp->next != del)
            temp = JetHead->next;
        temp->next = temp->next->next;
        delete (del);
        return;
    }
    return;
}

void Helicopter::deleteHeli(Helicopter *del) {
    if(HeliHead==NULL || del == NULL)
        return;
    if(HeliHead == del) {
        HeliHead = HeliHead->next;
        delete(del);
        return;
    }
    if(del->next != NULL){
        Helicopter *temp = HeliHead;
        while(temp->next != del)
            temp = temp->next;
        temp->next= temp->next->next;
        delete(del);
        return;
    }
    return;
}

void Submarine::deleteSubmarine(Submarine *del) {
    if(SubHead==NULL || del == NULL)
        return;
    if(SubHead == del) {
        SubHead = SubHead->next;
        delete (del);
        return;
    }
    if(del->next != NULL) {
        Submarine *temp = SubHead;
        while (temp->next != del)
            temp = temp->next;
        temp->next = temp->next->next;
        delete (del);
        return;
    }
    return;
}

void Ship::deleteShip(Ship *del) {
    if(ShipHead==NULL || del == NULL)
        return;
    if(ShipHead == del) {
        ShipHead = ShipHead->next;
        delete(del);
        return;
    }
    if(del->next != NULL){
        Ship *temp = ShipHead;
        while(temp->next != del) {
            temp = temp->next;
        }
        temp->next= temp->next->next;
        delete(del);
        return;
    }
    return;
}

void Rocket::deleteRocket(Rocket *del) {
    if(RocketHead==NULL || del == NULL)
        return;
    if(RocketHead == del) {
        RocketHead = del->next;
        delete(del);
        return;
    }
    if(del->next != NULL){
        Rocket *temp = RocketHead;
        while(temp->next != del)
            temp = temp->next;
        temp->next= temp->next->next;
        delete(del);
        return;
    }
    return;
}

void WheelMachine::printObjects() {
    WheelMachine *temp = MachineHead;
        while(temp){
            std::cout<<std::endl;
            std::cout <<"Name: "<< temp->name<<std::endl;
            std::cout <<"Num of wheels: "<<temp->numOfWheels<<std::endl;
            std::cout <<"Engine type: "<<temp->engineType<<std::endl;
            std::cout <<"Power: "<<temp->power<<std::endl;
            std::cout<<std::endl;
            temp=temp->next;
        }
}

void Jet::printObjects() {
    Jet *temp = JetHead;
    while(temp){
        std::cout<<std::endl;
        std::cout <<"Name: "<<temp->name<<std::endl;
        std::cout <<"Power: "<<temp->power<<std::endl;
        std::cout <<"Landing gear: "<<temp->landingGear<<std::endl;
        std::cout <<"Colour: "<<temp->colour<<std::endl;
        std::cout <<"Weapon type: "<<temp->weaponType<<std::endl;
        std::cout <<"Max speed: "<<temp->maxSpeed<<std::endl;
        std::cout<<std::endl;
        temp=temp->next;
    }
}

void Helicopter::printObjects() {
    Helicopter *temp = HeliHead;
    while(temp){
        std::cout<<std::endl;
        std::cout <<"Name: "<<temp->name<<std::endl;
        std::cout <<"Power: "<<temp->power<<std::endl;
        std::cout <<"Landing gear: "<<temp->landingGear<<std::endl;
        std::cout <<"Helicopter type: "<<temp->heliType<<std::endl;
        std::cout <<"Max RPM: "<<temp->maxRPM<<std::endl;
        std::cout<<std::endl;
        temp=temp->next;
    }
}

void Submarine::printObjects() {
    Submarine *temp = SubHead;
    while(temp){
        std::cout<<std::endl;
        std::cout <<"Name: "<<temp->name<<std::endl;
        std::cout <<"Power: "<<temp->power<<std::endl;
        std::cout <<"Power supply type: "<<temp->powerSupplyType<<std::endl;
        std::cout <<"Type of propulsion: "<<temp->typeOfPropulsion<<std::endl;
        std::cout<<"Max speed: "<<temp->maxSpeed<<std::endl;
        std::cout<<std::endl;
        temp=temp->next;
    }
}

void Ship::printObjects() {
    Ship *temp = ShipHead;
    while(temp){
        std::cout<<std::endl;
        std::cout <<"Name: "<<temp->name<<std::endl;
        std::cout <<"Power: "<<temp->power<<std::endl;
        std::cout <<"Power supply type: "<<temp->powerSupplyType<<std::endl;
        std::cout <<"Number of seats: "<<temp->numOfSeats<<std::endl;
        std::cout <<"Ship type: "<<temp->shipType<<std::endl;
        std::cout<<std::endl;
        temp=temp->next;
    }
}

void Rocket::printObjects() {
    Rocket *temp = RocketHead;
    while(temp){
        std::cout<<std::endl;
        std::cout <<"Name: "<<temp->name<<std::endl;
        std::cout <<"Power: "<<temp->power<<std::endl;
        std::cout <<"Gas tank volume: "<<temp->gasTankVolume<<std::endl;
        std::cout <<"Mission type "<<temp->missionType<<std::endl;
        std::cout <<"Max range: "<<temp->maxRange<<std::endl;
        std::cout<<std::endl;
        temp=temp->next;
    }
}