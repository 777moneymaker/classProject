//
// Created by Miłosz Chodkowski on 2019-03-12.
//

#include <iostream>
#include "Headers/Class.h"
#include "Headers/MainFunctions.h"

Jet *JetNext = NULL;
Helicopter *HeliNext = NULL;
Submarine *SubNext = NULL;
Ship *ShipNext = NULL;
Rocket *RocketNext = NULL;

std::string level = "Machine";

void CommandList(){
    std::cout<<"           * HELP - prints all the commands that you can use\n"
          "                * CD - change directory (CD *class*)\n"
          "                * MO - make object for given class\n"
          "                * DO - delete object (DO *object*\n"
          "                * MDO - modificate object (MDO *object*)\n"
          "                * DIR - prints every object in given class (name)\n"
          "                * SHOW - prints info about object (SHOW *object*)\n"
          "                * SAVE - saves every object to txt file (SAVE *textfile.txt*)\n"
          "                * READ - reads every object from txt file (READ *textfile.txt*)\n"
          "                * TREE - shows whole structure of classes\n"
          "                * EXIT - quit the program "<<std::endl;
}

void Tree(){
    std::cout<<"              Machine \n"
               "                 |\n"
               "                 |--> FlyingMachine \n"
               "                 |               |\n"
               "                 |               |--> Jet / Helicopter\n"
               "                 |\n"
               "                 |--> WheelMachine \n"
               "                 |               |\n"
               "                 |               |--> Empty\n"
               "                 |\n"
               "                 |--> FloatingMachine \n"
               "                 |               |\n"
               "                 |               |--> Submarine / Ship \n"
               "                 |               \n"
               "                 |--> SpaceMachine \n"
               "                 |               | \n"
               "                 |               |--> Rocket"<<std::endl;
                                                                return;
}

void MenuGenerator() {   // prints info about commands
    CommandList();
}

bool isCommandGoodAtBase(std::string command, std::string atribute) {
    if(command =="START"){

        return true;
    } else if (command == "") {

        std::cout << "Can't execute empty command! Try again!" << std::endl;
        return false;

    } else if (command == "CD" && atribute == "CD") {

        std::cout << "Can't execute command without directory! Try again!" << std::endl;
        return false;

    } else if (command == "CD" &&
               (atribute == "FlyingMachine" || atribute == "FloatingMachine" || atribute == "SpaceMachine" ||
                atribute == "WheelMachine" || atribute =="Machine" || atribute == ".")) {

        return true;

    } else if (command == "DO") {

        std::cout << "This level does not contain any objects! Try again!" << std::endl;
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

    } else if (command == "SAVE" && atribute == "SAVE") {

        std::cout << "Can't save wtihout file! Try again!" << std::endl;
        return false;

    } else if (command == "READ" && atribute == "READ") {

        std::cout << "Can't read without file! Try again" << std::endl;
        return false;

    } else if (command == "TREE") {

        return true;

    } else if (command == "EXIT") {

        return true;

    } else if(command =="HELP"){

        return true;
    }else{

        return false;
    }
} // checks if command is valid at this class level

int commandToIntAtBase(std::string command, std::string atribute) {
    if(command=="CD" && (atribute == "Machine" || atribute == "." || atribute =="FlyingMachine" || atribute =="FloatingMachine"
        || atribute =="SpaceMachine" || atribute =="WheelMachine")){
        return 0;

    }else if(command == "HELP"){

        return 1;
    }else if(command == "SAVE" ){

        return 2;
    }else if(command == "READ" ){

        return 3;
    }else if(command == "TREE" ){

        return 4;
    }else if(command == "EXIT" ){

        return 5;
    }else{
        return 6;
    }
}

bool isCommandGoodAtFirst(std::string command, std::string atribute) {
    if (command == "") {

        std::cout << "Can't execute empty command! Try again!" << std::endl;
        return false;

    } else if (command == "CD" && atribute == "CD") {

        std::cout << "Can't execute command without directory! Try again!" << std::endl;
        return false;

    } else if (command == "CD" &&
               (atribute == "Jet" || atribute == "Helicopter" || atribute == "Submarine" ||
                atribute == "Ship" || atribute == "Rocket" || atribute =="Machine" || atribute == ".")) {

        return true;

    } else if (command == "DO") {

        std::cout << "This level does not contain any objects! Try again!" << std::endl;
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

    } else if (command == "SAVE" && atribute == "SAVE") {

        std::cout << "Can't save wtihout file! Try again!" << std::endl;
        return false;

    } else if (command == "READ" && atribute == "READ") {

        std::cout << "Can't read without file! Try again" << std::endl;
        return false;

    } else if (command == "TREE") {

        return true;

    } else if (command == "EXIT") {

        return true;

    } else if (command == "HELP") {

        return true;
    } else {

        return false;
    }
}

int commandToIntAtFirst(std::string command, std::string atribute){

    if(level == "FlyingMachine" && command=="CD" && (atribute == "Machine" || atribute == "." || atribute =="Jet" || atribute =="Helicopter")) {
        return 0;
    }else if(level == "FloatingMachine" && command=="CD" && (atribute == "Machine" || atribute == "." || atribute =="Submarine" || atribute =="Ship")){
        return 1;
    }
    else if(level == "WheelMachine" && command=="CD"){

        return 2;
    }else if(level == "SpaceMachine" && command=="CD" && (atribute == "Machine" || atribute == "." || atribute =="Rocket" )){
        return 3;
    }else if(command == "CD" && atribute =="Ship"){

        return 4;
    }else if(command == "CD" && atribute == "Rocket"){

        return 5;
    }else if(command == "SAVE" ){

        return 6;
    }else if(command == "READ" ){

        return 7;
    }else if(command == "TREE" ){

        return 8;
    }else if(command == "EXIT" ){

        return 9;
    }else if(command == "HELP" ){
        return 10;
    }
}

