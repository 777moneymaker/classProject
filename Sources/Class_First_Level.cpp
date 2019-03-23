//
// Created by Miłosz Chodkowski on 2019-03-17.
//


#include <iostream>
#include <fstream>
#include <Headers/Global_Variables.hpp>
#include "Headers/Class_First_Level.hpp"

//
// WheelMachine::methods definition
//

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
    newMachine->next = NULL;

    if(MachineHead == NULL) {
        MachineHead = newMachine;
        return;
    }
    newMachine->next = MachineHead;
    MachineHead=newMachine;
    return;
}// end of WheelMachine::insertNewVehicle

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
} // end of WheelMachine::deleteMachine

void WheelMachine::printObjects() {
    WheelMachine *temp = MachineHead;
    while(temp){
        std::cout<<std::endl;
        std::cout <<"Name: "<< temp->name<<std::endl;
        std::cout<<std::endl;
        temp=temp->next;
    }
} // end of WheelMachine::printObjects

void WheelMachine::printObjectinfo(std::string name) {
    WheelMachine *temp = MachineHead;
    while(temp){
        if(temp->name == name){
            std::cout<<std::endl;
            std::cout <<"Name: "<< temp->name<<std::endl;
            std::cout <<"Num of wheels: "<<temp->numOfWheels<<std::endl;
            std::cout <<"Engine type: "<<temp->engineType<<std::endl;
            std::cout <<"Power: "<<temp->power<<std::endl;
            std::cout<<std::endl;
        }
        temp=temp->next;
    }
} // end of WheelMachine::printObjectInfo

void WheelMachine::modObject(std::string name) {
    WheelMachine *temp = MachineHead;
    while(temp){
        if(temp->name == name){
            int numOfWheels;
            std::string engineType;
            float power;

            std::cout <<"Set num of wheels: ";
            std::cin>>numOfWheels;

            std::cout <<"Set engine type: ";
            std::cin>>engineType;

            std::cout <<"Set power: ";
            std::cin>>power;

            std::cin.ignore();

            temp->name = name;
            temp->numOfWheels = numOfWheels;
            temp->engineType = engineType;
            temp->power = power;
            std::cout<<std::endl<<"Modification Completed!"<<std::endl;
        }
        temp=temp->next;
    }
} // end of WheelMachine::modObject

void WheelMachine::saveObjects() {
    WheelMachine *temp = MachineHead;
    std::ofstream myfile;
    myfile.open("WheelMachine.txt");
    myfile.clear();
    if(myfile.fail()){
        std::cout<<"Fail opening a file!"<<std::endl;
        return;
    }
    while(temp){
        myfile<<temp->name<<std::endl;
        myfile<<temp->numOfWheels<<std::endl;
        myfile<<temp->engineType<<std::endl;
        myfile<<temp->power<<std::endl;
        temp=temp->next;
    }
    myfile.close();
    return;
} // end of WheelMachine::saveObjects

void WheelMachine::readObjects() {
    WheelMachine *temp = new WheelMachine;
    std::ifstream myfile;
    myfile.open("WheelMachine.txt");
    if(myfile.fail()){
        std::cout<<"Fail!"<<std::endl;
        return;
    }
    while(myfile >> temp->name){
        myfile>>temp->numOfWheels;
        myfile>>temp->engineType;
        myfile>>temp->power;

        temp->next = NULL;

        if(MachineHead == NULL) {
            MachineHead = temp;
            continue;
        }
        temp->next = MachineHead;
        MachineHead=temp;
    }
    myfile.close();
    return;
} // end of WheelMachine::readObjects

//
// End of Class_First_Level.cpp
//