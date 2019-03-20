//
// Created by Miłosz Chodkowski on 2019-03-13.
//

#include <iostream>
#include <string>
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
    if(level == "WheelMachine")
        MachineHead->printObjects();
    else if(level == "Jet")
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
    if(level == "WheelMachine")
        MachineHead->printObjectinfo(name);
    else if(level == "Jet")
        JetHead->printObjectinfo(name);
    else if(level == "Helicopter")
        HeliHead->printObjectinfo(name);
    else if(level == "Submarine")
        SubHead->printObjectinfo(name);
    else if(level == "Ship")
        ShipHead->printObjectinfo(name);
    else if(level == "Rocket")
        RocketHead->printObjectinfo(name);
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