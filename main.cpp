//
// Created by Miłosz Chodkowski on 2019-03-12.
//

#include <iostream>
#include <string>
#include "Headers/Class.h"
#include "Headers/MenuFunctions.h"
#include "Headers/GlobalVariables.h"
#include "Headers/ObjectFunctions.h"

std::string level = "Machine";
Jet *JetHead = NULL;
Helicopter *HeliHead = NULL;
Submarine *SubHead = NULL;
Ship *ShipHead = NULL;
Rocket *RocketHead = NULL;
WheelMachine *MachineHead = NULL;

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
        Utilities::pathName();

        std::getline(std::cin, input);
        pos = input.find_first_of(" ");
        atribute = input.substr(pos + 1);
        command = input.substr(0, pos);

        while (Base::isCommandGood(command, atribute) ||
        FirstLevel::isCommandGood(command, atribute) ||
        SecondLevel::isCommandGood(command, atribute)) {

            if (level == "Machine") {                                //********************* base level
                switch (Base::commandToInt(command, atribute)) {
                    case 0:
                        if (atribute == ".")
                            level = "Machine";
                        else
                            level = atribute;
                        break;
                    case 1:
                        Utilities::CommandList();
                        break;
                    case 2:
                        if(atribute == "SAVE"){
                            std::cout<<"No file to save!"<<std::endl;
                            break;
                        }
                        break;
                    case 3:
                        if(atribute=="READ"){
                            std::cout<<"No file to read from!"<<std::endl;
                            break;
                        }
                        break;
                    case 4:
                        Utilities::Tree();
                        break;
                    case 5:
                        std::cout << "Goodbye!" << std::endl;
                        exit(0);
                    default:
                        std::cout << "Can't find that!" << std::endl;
                        break;
                }
                break;
            }

            if (level == "FlyingMachine" ||
            level == "FloatingMachine" ||
            level == "WheelMachine" ||
            level == "SpaceMachine"){    // ********************** 1st level
                switch (FirstLevel::commandToInt(command, atribute)) {
                    case 0:    // switches to another class
                        if(atribute==".")
                            level = "Machine";
                        else
                            level = atribute;
                        break;
                    case 1:
                        List::insertNode(atribute);  // insertion depends on level status
                        break;
                    case 2:
                        List::deleteNodeByName(atribute);
                        break;
                    case 3:
                        // object modification
                        break;
                    case 4:
                        List::printObjects();
                        break;
                    case 5:
                        // SHOW - info about object
                        break;
                    case 6:
                        // SAVE
                        break;
                    case 7:
                        // READ
                        break;
                    case 8:
                        Utilities::Tree();
                        break;
                    case 9:
                        Utilities::CommandList();
                        break;
                    case 10:
                        exit(0);
                    default:
                        std::cout<<"Couldn't Find!"<<std::endl;
                        break;
                }
                break;
            }

            if (level == "Jet" ||
            level == " Helicopter " ||
            level == "Submarine" ||
            level == " Ship " ||
            level == "Rocket") {    // ***************** 2nd level
                switch( SecondLevel::commandToInt(command, atribute) ){
                    case 0:
                        if(atribute == "." ){
                            level = "Machine";
                            break;
                        }
                        level = atribute;
                        break;
                    case 1 :
                        List::insertNode(atribute);
                        break;
                    case 2:
                        List::deleteNodeByName(atribute);
                        break;
                    case 3:
                        // Modificate object
                        break;
                    case 4:
                        List::printObjects();
                        break;
                    case 5:
                        //SHOW
                        break;
                    case 6:
                        //SAVE
                        break;
                    case 7:
                        //READ
                        break;
                    case 8:
                        Utilities::Tree();
                        break;
                    case 9:
                        Utilities::CommandList();
                        break;
                    case 10:
                        exit(0);
                    default:
                        std::cout<<"Couldn't find that!"<<std::endl;
                        break;
                }
                break;

            }
        }
    }
}
