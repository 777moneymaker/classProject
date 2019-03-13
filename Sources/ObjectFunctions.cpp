//
// Created by Miłosz Chodkowski on 2019-03-13.
//

#include <iostream>
#include <string>
#include "Headers/Class.h"
#include "Headers/MenuFunctions.h"
#include "Headers/GlobalVariables.h"
#include "Headers/ObjectFunctions.h"

void List::insertNode() {
    if (level == "Jet") {
        JetHead->insertNewJet();
    } else if (level == "Helicopter") {
        HeliHead->insertNewHeli();
    } else if (level == "Submarine") {
        SubHead->insertNewSubmarine();
    } else if (level == "Ship") {
        ShipHead->insertNewShip();
    } else if (level == "Rocket") {
        RocketHead->insertNewRocket();
    } else if (level == "WheelMachine"){
        MachineHead->insertNewVehicle();
    }else{
        std::cout<<"Wrong level!"<<std::endl;
    }
}

void List::deleteNodeByName(std::string name){
    if(level == "S")
}