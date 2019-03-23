//
// Created by Miłosz Chodkowski on 2019-03-17.
//


#include <iostream>
#include <fstream>
#include <Headers/Global_Variables.hpp>
#include "Headers/Class_Second_Level.hpp"

    //
    //  Jet::methods definitions
    //

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
}   //  end of Jet::insertNewJet

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
}   //  end of Jet::deleteJet

void Jet::printObjects() {
    Jet *temp = JetHead;
    while(temp){
        std::cout<<std::endl;
        std::cout <<"Name: "<<temp->name<<std::endl;
        std::cout<<std::endl;
        temp=temp->next;
    }
}   //  end of Jet::printObjects

void Jet::printObjectinfo(std::string name) {
    Jet *temp = JetHead;
    while(temp){
        if(temp->name==name){
            std::cout<<std::endl;
            std::cout <<"Name: "<<temp->name<<std::endl;
            std::cout <<"Power: "<<temp->power<<std::endl;
            std::cout <<"Landing gear: "<<temp->landingGear<<std::endl;
            std::cout <<"Colour: "<<temp->colour<<std::endl;
            std::cout <<"Weapon type: "<<temp->weaponType<<std::endl;
            std::cout <<"Max speed: "<<temp->maxSpeed<<std::endl;
            std::cout<<std::endl;
        }
        temp=temp->next;
    }
}   //  end of Jet::printObjectInfo

void Jet::modObject(std::string name) {
    Jet *temp = JetHead;
    while(temp){
        if(temp -> name == name){
            float power, maxSpeed;
            std::string landingGear, colour, weaponType;

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

            temp->name = name;
            temp->power = power;
            temp->landingGear = landingGear;
            temp->colour = colour;
            temp->weaponType = weaponType;
            temp->maxSpeed = maxSpeed;
            std::cout<<std::endl<<"Modification Completed!"<<std::endl;
        }
        temp = temp->next;
    }
}   //  end of Jet::modObject

void Jet::saveObjects() {
    Jet *temp = JetHead;
    std::ofstream myfile;
    myfile.open("Jet.txt");
    myfile.clear();
    if(myfile.fail()){
        std::cout<<"Fail opening a file!"<<std::endl;
        return;
    }
    while(temp){
        myfile<<temp->name<<std::endl;
        myfile<<temp->power<<std::endl;
        myfile<<temp->landingGear<<std::endl;
        myfile<<temp->colour<<std::endl;
        myfile<<temp->weaponType<<std::endl;
        myfile<<temp->maxSpeed<<std::endl;
        temp=temp->next;
    }
    myfile.close();
    return;
}   //    end of Jet::saveObjects

void Jet::readObjects() {
    Jet *temp = new Jet;
    std::ifstream myfile;
    myfile.open("Jet.txt");
    if(myfile.fail()){
        std::cout<<"Fail!"<<std::endl;
        return;
    }
    while(myfile >> temp->name){
        myfile>>temp->power;
        myfile>>temp->landingGear;
        myfile>>temp->colour;
        myfile>>temp->weaponType;
        myfile>>temp->maxSpeed;

        temp->next=NULL;

        if(JetHead == NULL) {
            JetHead = temp;
            continue;
        }
        temp->next = JetHead;
        JetHead = temp;
    }
    myfile.close();
    return;
}   //  end of Jet::readObjects
    //  End of Jet::methods definition

    //
    //  Helicopter::methods definitions
    //

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
}   //  end of Helicopter::inserNewHeli

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
}   //  end of Helicopter::deleteHeli

void Helicopter::printObjects() {
    Helicopter *temp = HeliHead;
    while(temp){
        std::cout<<std::endl;
        std::cout <<"Name: "<<temp->name<<std::endl;
        std::cout<<std::endl;
        temp=temp->next;
    }
}   //  end of Helicopter::printObjects

void Helicopter::printObjectinfo(std::string name) {
    Helicopter *temp = HeliHead;
    while(temp){
        if(temp->name==name){
            std::cout<<std::endl;
            std::cout <<"Name: "<<temp->name<<std::endl;
            std::cout <<"Power: "<<temp->power<<std::endl;
            std::cout <<"Landing gear: "<<temp->landingGear<<std::endl;
            std::cout <<"Helicopter type: "<<temp->heliType<<std::endl;
            std::cout <<"Max RPM: "<<temp->maxRPM<<std::endl;
            std::cout<<std::endl;
        }
        temp=temp->next;
    }
}   //  end of Helicpoter::printObjectInfo

void Helicopter::modObject(std::string name) {
    Helicopter *temp = HeliHead;
    while(temp){
        if (temp->name == name){
            float power, maxRPM;
            std::string landingGear, heliType;

            std::cout <<"Set power: ";
            std::cin>> power;

            std::cout <<"Set landing gear: ";
            std::cin>> landingGear;

            std::cout <<"Set helicopter type: ";
            std::cin>> heliType;

            std::cout <<"Set max RPM: ";
            std::cin>> maxRPM;

            std::cin.ignore();

            temp->power = power;
            temp->name = name;
            temp->landingGear = landingGear;
            temp->heliType = heliType;
            temp->maxRPM = maxRPM;
            std::cout<<std::endl<<"Modification Completed!"<<std::endl;
        }
        temp=temp->next;
    }
}   //  end of Helicpoter::modObject

void Helicopter::saveObjects() {
    Helicopter *temp = HeliHead;
    std::ofstream myfile;
    myfile.open("Helicopter.txt");
    myfile.clear();
    if(myfile.fail()){
        std::cout<<"Fail opening a file!"<<std::endl;
        return;
    }
    while(temp){
        myfile<<temp->name<<std::endl;
        myfile<<temp->power<<std::endl;
        myfile<<temp->landingGear<<std::endl;
        myfile<<temp->heliType<<std::endl;
        myfile<<temp->maxRPM<<std::endl;
        temp=temp->next;
    }
    myfile.close();
    return;
}   //    end of Helicpoter::saveObjects

void Helicopter::readObjects() {
    Helicopter *temp = new Helicopter;
    std::ifstream myfile;
    myfile.open("Helicopter.txt");
    if(myfile.fail()){
        std::cout<<"Fail!"<<std::endl;
        return;
    }
    while(myfile >> temp->name){
        myfile>>temp->power;
        myfile>>temp->landingGear;
        myfile>>temp->heliType;
        myfile>>temp->maxRPM;

        temp->next=NULL;

        if(HeliHead == NULL) {
            HeliHead = temp;
            continue;
        }
        temp->next = HeliHead;
        HeliHead = temp;
    }
    myfile.close();
    return;
}   //    end of Helicopter::readObjects
    //  End of Helicopter::methods definitions

    //
    //  Ship::methods definitions
    //

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
}   //  end of Ship::insertNewShip

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
}   //  end of Ship::deleteShip

void Ship::printObjects() {
    Ship *temp = ShipHead;
    while(temp){
        std::cout<<std::endl;
        std::cout <<"Name: "<<temp->name<<std::endl;
        std::cout<<std::endl;
        temp=temp->next;
    }
}   //  end of Ship::printObjects

void Ship::printObjectinfo(std::string name) {
    Ship *temp = ShipHead;
    while(temp){
        if(temp->name == name){
            std::cout<<std::endl;
            std::cout <<"Name: "<<temp->name<<std::endl;
            std::cout <<"Power: "<<temp->power<<std::endl;
            std::cout <<"Power supply type: "<<temp->powerSupplyType<<std::endl;
            std::cout <<"Number of seats: "<<temp->numOfSeats<<std::endl;
            std::cout <<"Ship type: "<<temp->shipType<<std::endl;
            std::cout<<std::endl;
        }
        temp=temp->next;
    }
}   //  end of Ship::printObjectInfo

void Ship::modObject(std::string name) {
    Ship *temp = ShipHead;
    while(temp){
        if(temp->name == name){
            float power;
            int numOfSeats;
            std::string powerSupplyType, shipType;

            std::cout <<"Set power: ";
            std::cin>> power;

            std::cout <<"Set power supply type: ";
            std::cin>> powerSupplyType;

            std::cout <<"Set number of seats: ";
            std::cin>> numOfSeats;

            std::cout <<"Set ship type: ";
            std::cin>> shipType;

            std::cin.ignore();

            temp->power = power;
            temp->name = name;
            temp->powerSupplyType = powerSupplyType;
            temp->numOfSeats = numOfSeats;
            temp->shipType = shipType;
            std::cout<<std::endl<<"Modification Completed!"<<std::endl;
        }
        temp=temp->next;
    }
}   //  end of Ship::modObject

void Ship::saveObjects() {
    Ship *temp = ShipHead;
    std::ofstream myfile;
    myfile.open("Ship.txt");
    myfile.clear();
    if(myfile.fail()){
        std::cout<<"Fail opening a file!"<<std::endl;
        return;
    }
    while(temp){
        myfile<<temp->name<<std::endl;
        myfile<<temp->power<<std::endl;
        myfile<<temp->powerSupplyType<<std::endl;
        myfile<<temp->numOfSeats<<std::endl;
        myfile<<temp->shipType<<std::endl;
        temp=temp->next;
    }
    myfile.close();
    return;
}   //  end of Ship::saveObjects

void Ship::readObjects() {
    Ship *temp = new Ship;
    std::ifstream myfile;
    myfile.open("Ship.txt");
    if(myfile.fail()){
        std::cout<<"Fail!"<<std::endl;
        return;
    }
    while(myfile >> temp->name){
        myfile>>temp->power;
        myfile>>temp->powerSupplyType;
        myfile>>temp->numOfSeats;
        myfile>>temp->shipType;

        temp->next=NULL;

        if(ShipHead == NULL) {
            ShipHead = temp;
            continue;
        }
        temp->next = ShipHead;
        ShipHead = temp;
    }
    myfile.close();
    return;
}   //  end of Ship::readObjects
    //  End of Ship::methods definitions

    //
    //  Submarine::methods definitions
    //

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
}   //  end of Submarine::inserNewSubmarine

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
}   //  end of Submarine::deleteSubmarine

void Submarine::printObjects() {
    Submarine *temp = SubHead;
    while(temp){
        std::cout<<std::endl;
        std::cout <<"Name: "<<temp->name<<std::endl;
        std::cout<<std::endl;
        temp=temp->next;
    }
}   //  end of Submarine::printObjects

void Submarine::printObjectinfo(std::string name) {
    Submarine *temp = SubHead;
    while(temp){
        if(temp->name == name){
            std::cout<<std::endl;
            std::cout <<"Name: "<<temp->name<<std::endl;
            std::cout <<"Power: "<<temp->power<<std::endl;
            std::cout <<"Power supply type: "<<temp->powerSupplyType<<std::endl;
            std::cout <<"Type of propulsion: "<<temp->typeOfPropulsion<<std::endl;
            std::cout<<"Max speed: "<<temp->maxSpeed<<std::endl;
            std::cout<<std::endl;
        }
        temp=temp->next;
    }
}   //  end of Submarine::printObjectInfo

void Submarine::modObject(std::string name) {
    Submarine *temp = SubHead;
    while(temp){
        if(temp->name == name){
            float power, maxSpeed;
            std::string powerSupplyType, typeOfPropulsion;

            std::cout <<"Set power: ";
            std::cin>> power;

            std::cout <<"Set power supply type: ";
            std::cin>> powerSupplyType;

            std::cout <<"Set type of propulsion: ";
            std::cin>> typeOfPropulsion;

            std::cout <<"Set max speed: ";
            std::cin>> maxSpeed;

            std::cin.ignore();

            temp->power = power;
            temp->name = name;
            temp->powerSupplyType = powerSupplyType;
            temp->typeOfPropulsion = typeOfPropulsion;
            temp->maxSpeed = maxSpeed;
            std::cout<<std::endl<<"Modification Completed!"<<std::endl;
        }
        temp=temp->next;
    }
}   //  end of Submarine::modObject

void Submarine::saveObjects() {
    Submarine *temp = SubHead;
    std::ofstream myfile;
    myfile.open("Submarine.txt");
    myfile.clear();
    if(myfile.fail()){
        std::cout<<"Fail opening a file!"<<std::endl;
        return;
    }
    while(temp){
        myfile<<temp->name<<std::endl;
        myfile<<temp->power<<std::endl;
        myfile<<temp->powerSupplyType<<std::endl;
        myfile<<temp->typeOfPropulsion<<std::endl;
        myfile<<temp->maxSpeed<<std::endl;
        temp=temp->next;
    }
    myfile.close();
    return;
}   //  end of Submarine::saveObjects

void Submarine::readObjects() {
    Submarine *temp = new Submarine;
    std::ifstream myfile;
    myfile.open("Submarine.txt");
    if(myfile.fail()){
        std::cout<<"Fail!"<<std::endl;
        return;
    }
    while(myfile >> temp->name){
        myfile>>temp->power;
        myfile>>temp->powerSupplyType;
        myfile>>temp->typeOfPropulsion;
        myfile>>temp->maxSpeed;

        temp->next=NULL;

        if(SubHead == NULL) {
            SubHead = temp;
            continue;
        }
        temp->next = SubHead;
        SubHead = temp;
    }
}   //  end of Submarine::readObjects
    //  End of Submarine::methods definitions

    //
    //  Rocket::methods definitions
    //

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
}   //  end of Rocket::insertNewRocket


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
}   //  end of Rocket::deleteRocket

void Rocket::printObjects() {
    Rocket *temp = RocketHead;
    while(temp){
        std::cout<<std::endl;
        std::cout <<"Name: "<<temp->name<<std::endl;
        std::cout<<std::endl;
        temp=temp->next;
    }
}   //  end of Rocket::printObjects

void Rocket::printObjectinfo(std::string name) {
    Rocket *temp = RocketHead;
    while(temp){
        if(temp->name == name) {
            std::cout << std::endl;
            std::cout << "Name: " << temp->name << std::endl;
            std::cout << "Power: " << temp->power << std::endl;
            std::cout << "Gas tank volume: " << temp->gasTankVolume << std::endl;
            std::cout << "Mission type " << temp->missionType << std::endl;
            std::cout << "Max range: " << temp->maxRange << std::endl;
            std::cout << std::endl;
        }
        temp=temp->next;
    }
}   //  end of Rocket::printObjectInfo

void Rocket::modObject(std::string name) {
    Rocket *temp = RocketHead;
    while(temp){
        if(temp->name == name){
            float power, gasTankVolume, maxRange;
            std::string missionType;

            std::cout <<"Set power: ";
            std::cin>> power;

            std::cout <<"Set gas tank volume: ";
            std::cin>> gasTankVolume;

            std::cout <<"Set mission type ";
            std::cin>> missionType;

            std::cout <<"Set max range: ";
            std::cin>> maxRange;

            std::cin.ignore();

            temp->power=power;
            temp->name=name;
            temp->gasTankVolume=gasTankVolume;
            temp->missionType = missionType;
            temp->maxRange = maxRange;
            std::cout<<std::endl<<"Modification Completed!"<<std::endl;
        }
        temp=temp->next;
    }
}   //  end of Rocket::modObject

void Rocket::saveObjects() {
    Rocket *temp = RocketHead;
    std::ofstream myfile;
    myfile.open("Rocket.txt");
    myfile.clear();
    if(myfile.fail()){
        std::cout<<"Fail opening a file!"<<std::endl;
        return;
    }
    while(temp){
        myfile<<temp->name<<std::endl;
        myfile<<temp->power<<std::endl;
        myfile<<temp->gasTankVolume<<std::endl;
        myfile<<temp->missionType<<std::endl;
        myfile<<temp->maxRange<<std::endl;
        temp=temp->next;
    }
    myfile.close();
    return;
}   //  end of Rocket::SaveObjects


void Rocket::readObjects() {
    Rocket *temp = new Rocket;
    std::ifstream myfile;
    myfile.open("Rocket.txt");
    if(myfile.fail()){
        std::cout<<"Fail!"<<std::endl;
        return;
    }
    while(myfile >> temp->name){
        myfile>>temp->power;
        myfile>>temp->gasTankVolume;
        myfile>>temp->missionType;
        myfile>>temp->maxRange;

        temp->next = NULL;

        if(RocketHead == NULL) {
            RocketHead = temp;
            continue;
        }
        temp->next = temp;
        RocketHead = temp;
    }
    myfile.close();
    return;
}   //  end of Rocket::readObjects
    //End of Rocket::methods definitions

    //End of Class_Second_Level.cpp











