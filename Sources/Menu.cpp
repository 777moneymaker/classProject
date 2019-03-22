//
// Created by Miłosz Chodkowski on 2019-03-12.
//

#include <iostream>
#include <fstream>
#include "Headers/Class.hpp"
#include "Headers/Menu.hpp"
#include "Headers/GVariables.hpp"


void Utilities::CommandList(){
    std::cout<<"           \t\t* HELP - prints all the commands that you can use\n"
          "                * CD - change directory (CD *level*)\n"
          "                * MO - make object for given class (MO *name*)\n"
          "                * DO - delete object (DO *name)\n"
          "                * MDO - modificate object (MDO *name*)\n"
          "                * DIR - prints every object in given class\n"
          "                * SHOW - prints info about object (SHOW *name*)\n"
          "                * SAVE - saves every object to txt file\n"
          "                * READ - reads every object from txt file\n"
          "                * TREE - shows whole structure of classes\n"
          "                * EXIT - quit the program "<<std::endl;
} // displays

void Utilities::Tree(){
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

void Utilities::MenuGenerator() {   // prints info about commands
    CommandList();
}

void Utilities::pathName(){
    if(level == "Machine")
        std::cout << "Enter command" << std::endl<< "/" + level + ":~ ";
    else if(level =="FloatingMachine" ||
             level == "FlyingMachine" ||
             level == "SpaceMachine" ||
             level == "WheelMachine" ){
                std::cout << "Enter command" << std::endl;
                std::cout << "Machine/" + level + ":~ ";
    }else if(level == "Jet" ||
             level == "Helicopter" ||
             level == "Ship" ||
             level == "Submarine" ||
             level == "Rocket"){
                std::cout << "Enter command" << std::endl;
                std::cout << "Machine/.../" + level + ":~ ";
    }
}

void Utilities::HelloMsg() {
    std::cout<<"Hi! This program allows you to have fun with creating, editing, deleting objects.\n"
               "You can save them to textfile or read from it anytime. I hope you will enjoy it :)"<<std::endl;
}

bool Base::isCommandGood(std::string command, std::string atribute) {
    if(command =="START")
        return true;
    else if (command == "")
        return false;
    else if (command == "CD" && atribute == "CD")   // single *CD* makes atribute == CD
        return false;
    else if (command == "CD"   &&  (atribute == "FlyingMachine"||
                                    atribute == "FloatingMachine" ||
                                    atribute == "SpaceMachine" ||
                                    atribute == "WheelMachine" ||
                                    atribute =="Machine" ||
                                    atribute == "."))
                                        return true;
    else if (command == "SAVE")
        return true;
    else if (command == "READ")
        return true;
    else if (command == "TREE")
        return true;
    else if (command == "EXIT")
        return true;
    else if(command =="HELP")
        return true;
    else if(command == "DIR")
        return true;
    else
        return false;
}

int Base::commandToInt(std::string command, std::string atribute) {
    if(command=="CD" && (atribute == "Machine" ||
                        atribute == "." ||
                        atribute =="FlyingMachine" ||
                        atribute =="FloatingMachine" ||
                        atribute =="SpaceMachine" ||
                        atribute =="WheelMachine"))
                            return 0;
    else if(command == "HELP")
        return 1;
    else if(command == "SAVE" )
        return 2;
    else if(command == "READ" )
        return 3;
    else if(command == "TREE" )
        return 4;
    else if(command == "EXIT" )
        return 5;
    else if(command == "DIR")
        return 6;
    else
        return 7;
}

bool FirstLevel::isCommandGood(std::string command, std::string atribute) {
    if (command == "")
        return false;
    else if (command == "CD" && atribute == "CD") {
        std::cout<<"Can't execute empty command!"<<std::endl;
        return false;
    }else if(command == "CD" && (atribute == "Jet" ||
                                atribute == "Helicopter" ||
                                atribute == "Submarine" ||
                                atribute == "Ship" ||
                                atribute == "Rocket" ||
                                atribute =="Machine" ||
                                atribute == "."))
                                    return true;
    else if (command == "DO")
        return true;
    else if (command == "MO" && atribute == "MO") // single *CD* makes atribute == CD
        return false;
    else if(command == "MO")
        return true;
    else if (command == "MDO")
        return false;
    else if (command == "DIR")
        return true;
    else if (command == "SHOW")
        return true;
    else if (command == "SAVE")
        return true;
    else if (command == "READ")
        return true;
    else if (command == "TREE")
        return true;
    else if (command == "EXIT")
        return true;
    else if (command == "HELP")
        return true;
    else
        return false;

}

int FirstLevel::commandToInt(std::string command, std::string atribute){
    if(level == "FlyingMachine" && command=="CD" && (atribute == "Machine" ||
                                                    atribute == "." ||
                                                    atribute =="Jet" ||
                                                    atribute =="Helicopter"))
                                                        return 0;
    else if(level == "FloatingMachine" && command=="CD" && (atribute == "Machine" ||
                                                            atribute == "." ||
                                                            atribute =="Submarine" ||
                                                            atribute =="Ship"))
                                                                return 0;
    else if(level == "WheelMachine" && command=="CD" && (atribute == "." ||
                                                        atribute == "Machine"))
                                                                 return 0;
    else if(level == "SpaceMachine" && command=="CD" && (atribute == "Machine" ||
                                                          atribute == "." ||
                                                          atribute =="Rocket" ))
                                                            return 0;
    else if(command == "MO" )
        return 1;
    else if(command == "DO" )
        return 2;
    else if(command == "MDO" )
        return 3;
    else if(command == "DIR" )
        return 4;
    else if(command == "SHOW" )
        return 5;
    else if(command == "SAVE")
        return 6;
    else if(command == "READ")
        return 7;
    else if(command =="TREE")
        return 8;
    else if(command == "HELP")
        return 9;
    else if(command == "EXIT")
        return 10;
    else
        return 11;
}

bool SecondLevel::isCommandGood(std::string command, std::string atribute) {
    if (command == "")
        return false;
    else if (command == "CD" && atribute == "CD")
        return false;
    else if (command == "CD" && (atribute == "FlyingMachine" ||
                                atribute == "SpaceMachine" ||
                                atribute == "FloatingMachine" ||
                                atribute == "WheelMachine" ||
                                atribute == "."))
                                    return true;
    else if (command == "DO")
        return true;
    else if (command == "MO" && atribute == "MO")
        return false;
    else if(command == "MO")
        return true;
    else if (command == "MDO")
        return true;
    else if (command == "DIR")
        return true;
    else if (command == "SHOW")
        return true;
    else if (command == "SAVE")
        return true;
    else if (command == "READ")
        return true;
    else if (command == "TREE")
        return true;
    else if (command == "EXIT")
        return true;
    else if (command == "HELP")
        return true;
    else
        return false;
}

int SecondLevel::commandToInt(std::string command, std::string atribute) {
    if (command == "CD" && (atribute == "Machine" ||
                            atribute == "." ||
                            atribute == "FlyingMachine" ||
                            atribute == "Floating Machine" ||
                            atribute == "WheelMachine" ||
                            atribute == "SpaceMachine"))
                                return 0;
    else if(command == "MO")
        return 1;
    else if(command == "DO")
        return 2;
    else if(command == "MDO")
        return 3;
    else if(command == "DIR")
        return 4;
    else if(command == "SHOW")
        return 5;
    else if(command == "SAVE" )
        return 6;
    else if(command == "READ" )
        return 7;
    else if(command == "TREE" )
        return 8;
    else if(command == "HELP" )
        return 9;
    else if(command == "EXIT")
        return 10;
    else
        return 11;
}