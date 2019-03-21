//
// Created by Miłosz Chodkowski on 2019-03-13.
//

#include <iostream>
#include <string>
#include <fstream>
#include "Headers/Class.hpp"
#include "Headers/MenuFunctions.hpp"
#include "Headers/GlobalVariables.hpp"
#include "Headers/ObjectFunctions.hpp"

void List::insertNode(std::string name) {
    if (level == "Jet")
        JetHead->insertNewJet(name);
    else if (level == "Helicopter")
        HeliHead->insertNewHeli(name);
    else if (level == "Submarine")
        SubHead->insertNewSubmarine(name);
    else if (level == "Ship")
        ShipHead->insertNewShip(name);
    else if (level == "Rocket")
        RocketHead->insertNewRocket(name);
    else if (level == "WheelMachine")
        MachineHead->insertNewVehicle(name);
    else
        std::cout<<"Wrong level!"<<std::endl;
}

void List::deleteNodeByName(std::string name){
    if(level == "WheelMachine"){
        WheelMachine *temp = MachineHead;
        while(temp) {
            if(temp->name == name) {
                MachineHead->deleteMachine(temp);
                return;
            }
            temp = temp->next;
        }
        return;
    }else if(level == "Jet"){
        Jet *temp = JetHead;
        while(temp) {
            if(temp->name == name) {
                JetHead->deleteJet(temp);
                return;
            }
            temp = temp->next;
        }
        return;
    }else if(level == "Helicopter"){
        Helicopter *temp = HeliHead;
        while(temp) {
            if(temp->name == name) {
                HeliHead->deleteHeli(temp);
                return;
            }
            temp = temp->next;
        }
        return;
    }else if(level == "Submarine"){
        Submarine *temp = SubHead;
        while(temp) {
            if(temp->name == name) {
                SubHead->deleteSubmarine(temp);
                return;
            }
            temp = temp->next;
        }
        return;
    }else if(level == "Ship"){
        Ship *temp = ShipHead;
        while(temp) {
            if(temp->name == name) {
                ShipHead->deleteShip(temp);
                return;
            }
            temp = temp->next;
        }
        return;
    }else if(level == "Rocket"){
        Rocket *temp = RocketHead;
        while(temp) {
            if(temp->name == name) {
                RocketHead->deleteRocket(temp);
                return;
            }
            temp = temp->next;
        }
        return;
    }else
        std::cout<<"Couldn't find object with that name!"<<std::endl;
}

void List::printObjects() {
    if(level == "Machine"){
     std::cout<<"All objects: "<<std::endl;
     MachineHead->printObjects();
     JetHead->printObjects();
     HeliHead->printObjects();
     SubHead->printObjects();
     ShipHead->printObjects();
     RocketHead->printObjects();
    }else if(level == "WheelMachine")
        MachineHead->printObjects();
    else if(level =="FloatingMachine") {
        ShipHead->printObjects();
        SubHead->printObjects();
    }else if(level == "FlyingMachine") {
        JetHead->printObjects();
        HeliHead->printObjects();
    }else if(level == "SpaceMachine"){
        RocketHead->printObjects();
    }else if(level == "Jet")
        JetHead->printObjects();
    else if(level == "Helicopter")
        HeliHead->printObjects();
    else if(level == "Submarine")
        SubHead->printObjects();
    else if(level == "Ship")
        ShipHead->printObjects();
    else if(level == "Rocket")
        RocketHead->printObjects();
    else
        std::cout<<"Wrong level!"<<std::endl;
}

void List::printObjectInfo(std::string name) {
    if (level == "Jet")
        JetHead->printObjectinfo(name);
    else if (level == "Helicopter")
        HeliHead->printObjectinfo(name);
    else if (level == "Submarine")
        SubHead->printObjectinfo(name);
    else if (level == "Ship")
        ShipHead->printObjectinfo(name);
    else if (level == "Rocket")
        RocketHead->printObjectinfo(name);
    else if (level == "WheelMachine")
        MachineHead->printObjectinfo(name);
    else
        std::cout<<"Wrong level!"<<std::endl;
}

void List::modObject(std::string name){
    if(level == "WheelMachine")
        MachineHead->modObject(name);
    else if(level == "Jet")
        JetHead->modObject(name);
    else if(level == "Helicopter")
        HeliHead->modObject(name);
    else if(level == "Submarine")
        SubHead->modObject(name);
    else if(level == "Ship")
        ShipHead->modObject(name);
    else if(level == "Rocket")
        RocketHead->modObject(name);
    else
        std::cout<<"Wrong level!"<<std::endl;
}

void List::saveObjects() {
    if(level == "Machine"){
        MachineHead->saveObjects();
        JetHead->saveObjects();
        HeliHead->saveObjects();
        SubHead->saveObjects();
        ShipHead->saveObjects();
        RocketHead->saveObjects();
    }else if(level == "WheelMachine")
        MachineHead->saveObjects();
    else if(level =="FloatingMachine") {
        ShipHead->saveObjects();
        SubHead->saveObjects();
    }else if(level == "FlyingMachine") {
        JetHead->saveObjects();
        HeliHead->saveObjects();
    }else if(level == "SpaceMachine"){
        RocketHead->saveObjects();
    }else if(level == "Jet")
        JetHead->saveObjects();
    else if(level == "Helicopter")
        HeliHead->saveObjects();
    else if(level == "Submarine")
        SubHead->saveObjects();
    else if(level == "Ship")
        ShipHead->saveObjects();
    else if(level == "Rocket")
        RocketHead->saveObjects();
    else
        std::cout<<"Wrong level!"<<std::endl;
}

void List::readObjects() {
    if(level == "Machine"){
        MachineHead->readObjects();
        JetHead->readObjects();
        HeliHead->readObjects();
        SubHead->readObjects();
        ShipHead->readObjects();
        RocketHead->readObjects();
    }else if(level == "WheelMachine")
        MachineHead->readObjects();
    else if(level =="FloatingMachine") {
        ShipHead->readObjects();
        SubHead->readObjects();
    }else if(level == "FlyingMachine") {
        JetHead->readObjects();
        HeliHead->readObjects();
    }else if(level == "SpaceMachine"){
        RocketHead->readObjects();
    }else if(level == "Jet")
        JetHead->readObjects();
    else if(level == "Helicopter")
        HeliHead->readObjects();
    else if(level == "Submarine")
        SubHead->readObjects();
    else if(level == "Ship")
        ShipHead->readObjects();
    else if(level == "Rocket")
        RocketHead->readObjects();
    else
        std::cout<<"Wrong level!"<<std::endl;
}