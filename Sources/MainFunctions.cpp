//
// Created by Miłosz Chodkowski on 2019-03-12.
//

#include <iostream>
#include "Headers/MainFunctions.h"

void MenuGenerator() {   // prints info about commands
    std::cout<<"Commands that You can use in this program: \n"
               " * HELP - prints all the commands that you can use\n"
               " * CD - change directory (CD *class*)\n"
               " * MO - make object for given class\n"
               " * DO - delete object (DO *object*\n"
               " * MDO - modificate object (MDO *object*)\n"
               " * DIR - prints every object in given class (name)\n"
               " * SHOW - prints info about object (SHOW *object*)\n"
               " * SAVE - saves every object to txt file (SAVE *textfile.txt*)\n"
               " * READ - reads every object from txt file (READ *textfile.txt*)\n"
               " * TREE - shows whole structure of classes\n"
               " * EXIT - quit the program "<<std::endl;
}

bool isCommandGoodAtBase(std::string command) {
    if (command == "") {

        std::cout << "Can't execute empty command! Try again!" << std::endl;
        return false;

    } else if (command == "CD") {

        std::cout << "Can't execute command without direction! Try again!" << std::endl;
        return false;

    } else if (command == "DO" || command == "DO WheelMachine" || command == "DO FlyingMachine " ||
               command == "DO FloatingMachine" || command == "DO SpaceMachine") {

        std::cout << "Can't delete at this level! Try again!" << std::endl;
        return false;

    } else if (command == "MO") {

        std::cout << "Can't make object at this level! Try again!" << std::endl;
        return false;

    } else if (command == "MDO") {

        std::cout << "Can't modificate object because this level does not have objects! Try again!" << std::endl;
        return false;

    } else if (command == "DIR") {

        std::cout << "This level does not have objects! Try again!" << std::endl;
        return false;

    } else if (command == "SHOW") {

        std::cout << "This level does not have objects! Try again!" << std::endl;
        return false;

    } else if (command == "SAVE") {

        std::cout << "Can't save wtihout file! Try again!" << std::endl;
        return false;

    } else if (command == "READ") {

        std::cout << "Can't read without file! Try again" << std::endl;
        return false;

    } else if (command == "CD WheelMachine" || command == "CD FlyingMachine " ||
               command == "CD FloatingMachine" || command == "CD SpaceMachine") {

        return true;

    } else if (command == "TREE") {

        return true;

    }else if (command == "EXIT"){

        return true;

    }else {

        std::cout<<"Can't find that command! Check if it's correct!"<<std::endl;
        return false;

    }
} // checks if command is valid at this class level

int commandToInt(std::string command) {
    if(command=="CD WheelMachine"){
        return 1;
    }
    else if(command =="CD FlyingMachine"){

        return 2;
    }else if(command == "CD FloatingMachine"){

        return 3;
    }else if(command == "CD SpaceMachine"){

        return 4;
    }else{

        return 5;
    }
}

