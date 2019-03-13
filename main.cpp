#include <iostream>
#include <string>
#include "Headers/Class.h"
#include "Headers/MenuFunctions.h"
#include "Headers/GlobalVariables.h"

std::string level = "Machine";
Jet *JetHead = NULL;
Helicopter *HeliHead = NULL;
Submarine *SubHead = NULL;
Ship *ShipHead = NULL;
Rocket *RocketHead = NULL;

int main() {

    std::string input;
    Utilities::MenuGenerator();

    std::cout << "Type *START* to start the program" << std::endl;
    std::cout << "~ ";

    std::cin.clear();
    std::getline(std::cin, input);
    int pos = input.find_first_of(" ");
    std::string atribute = input.substr(pos + 1), command = input.substr(0, pos);

    while (command != "START") {
        std::cout << " Type only one word with capital letters - START" << std::endl;

        std::cin.clear();
        std::getline(std::cin, input);
        pos = input.find_first_of(" ");
        atribute = input.substr(pos + 1);
        command = input.substr(0, pos);
    }

    while (true) {


        std::cout << "Enter the command" << std::endl;
        std::cout << "~ " + level + ": ";

        std::getline(std::cin, input);
        pos = input.find_first_of(" ");
        atribute = input.substr(pos + 1);
        command = input.substr(0, pos);

        while (Base::isCommandGood(command, atribute) || FirstLevel::isCommandGood(command, atribute) || SecondLevel::isCommandGood(command, atribute)) {

            if (level == "Machine") {
                switch (Base::commandToInt(command, atribute)) {
                    case 0: {
                        if (atribute == ".")
                            level = "Machine";
                        else
                            level = atribute;
                        break;
                    }
                    case 1: {
                        Utilities::CommandList();
                        break;
                    }
                    case 2: {
                        if(atribute == "SAVE"){
                            std::cout<<"No file to save!"<<std::endl;
                            break;
                        }
                        break;
                    }
                    case 3: {
                        if(atribute=="READ"){
                            std::cout<<"No file to read from!"<<std::endl;
                            break;
                        }
                        break;
                    }
                    case 4: {
                        Utilities::Tree();
                        break;
                    }
                    case 5: {
                        std::cout << "Goodbye!" << std::endl;
                        exit(0);
                    }
                    default: {
                        std::cout << "Can't find that!" << std::endl;
                        break;
                    }

                }
                break;
            }

            if (level == "FlyingMachine" || level == "FloatingMachine" || level == "WheelMachine" ||
                level == "SpaceMachine") {

                switch (FirstLevel::commandToInt(command, atribute)) {
                    case 0: {
                        if(atribute==".")
                            level = "Machine";
                        else
                            level = atribute;
                        break;
                    }
                    case 1: {
                        if(atribute==".")
                            level = "Machine";
                        else
                            level = atribute;
                        break;
                    }
                    case 2:{
                        if(atribute=="." || atribute =="Machine"){
                            level = "Machine";
                            break;
                        }
                       std::cout<<"This level does not have sub-level"<<std::endl;
                       break;
                    }
                    case 3:{
                        if(atribute=="." || atribute =="Machine") {
                            level = "Machine";
                            break;
                        }
                        level = atribute;
                        break;
                    }
                    case 4:{
                        if(atribute=="SAVE"){
                            std::cout<<"No file to save to!"<<std::endl;
                            break;
                        }
                        std::cout<<"save";
                        break;
                    }
                    case 5:{
                        if(atribute=="READ"){
                            std::cout<<"No file to read from!"<<std::endl;
                            break;
                        }
                        std::cout<<"read";
                        break;
                    }
                    case 6:{
                        Utilities::Tree();
                        break;
                    }
                    case 7:{
                        exit(0);
                    }
                    case 8:{
                        Utilities::CommandList();
                        break;
                    }
                    default:{
                        std::cout<<"Couldn't Find!"<<std::endl;
                        break;
                    }

                }
                break;
            }

            if (level == "Jet" || level == " Helicopter " || level == "Submarine" || level == " Ship " ||
                level == "Rocket") {

                switch( SecondLevel::commandToInt(command, atribute) ){
                    case 0:{
                        if(atribute == "." ){
                            level = "Machine";
                            break;
                        }
                        level = atribute;
                        break;

                    }
                    case 1 :{
                        if(level == "Jet")
                            JetHead->insertNewJet();
                        break;
                    }
                }
                break;

            }
        }
    }
}


