#include <iostream>
#include <string>
#include "Headers/Class.h"
#include "Headers/MainFunctions.h"



int main() {
    std::string input;
    MenuGenerator();

    std::cout << "Type *START* to start the program" << std::endl;
    std::cout << "~ ";

    std::cin.clear();
    getline(std::cin, input);
    int pos = input.find_first_of(" ");
    std::string atribute = input.substr(pos + 1), command = input.substr(0, pos);

    while (command != "START") {
        std::cout << " Type only one word with capital letters - START" << std::endl;
        std::cin.clear();
        getline(std::cin, input);
        pos = input.find_first_of(" ");
        atribute = input.substr(pos + 1);
        command = input.substr(0, pos);
    }

    while (true) {


        std::cout << "Enter the command" << std::endl;
        std::cout << "~ " + level + ": ";

        std::cin.clear();
        getline(std::cin, input);
        pos = input.find_first_of(" ");
        atribute = input.substr(pos + 1);
        command = input.substr(0, pos);

        while (isCommandGoodAtBase(command, atribute) || isCommandGoodAtFirst(command, atribute)) {

            if (level == "Machine") {
                switch (commandToIntAtBase(command, atribute)) {
                    case 0: {
                        if (atribute == ".")
                            level = "Machine";
                        else
                            level = atribute;
                        break;
                    }
                    case 1: {
                        CommandList();
                        break;
                    }
                    case 2: {
                        break;
                    }
                    case 3: {
                        break;
                    }
                    case 4: {
                        Tree();
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

                switch (commandToIntAtFirst(command, atribute)) {
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
                       std::cout<<"This level does not have sub-level"<<std::endl;
                       break;
                    }
                    case 3:{

                    }
                    case 4:{

                    }
                    case 5:{

                    }
                    default:{
                        break;
                    }

                }
                break;
            }
            if (level == "Jet" || level == " Helicopter " || level == "Submarine" || level == " Ship " ||
                level == "Rocket") {
                std::cout << "Jestem w jecie";
                break;

            }

        }
    }
}


