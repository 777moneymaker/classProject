//
// Created by Miłosz Chodkowski on 2019-03-12.
//

#include <iostream>
#include "Headers/Class.h"
#include "Headers/MenuFunctions.h"
#include "Headers/GlobalVariables.h"


void Utilities::CommandList(){
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

bool Base::isCommandGood(std::string command, std::string atribute) {
    if(command =="START"){
        return true;
    } else if (command == "") {
        return false;
    } else if (command == "CD" && atribute == "CD") {
        std::cout<<"Can't execute empty command!"<<std::endl;
        return false;
    } else if (command == "CD" &&
               (atribute == "FlyingMachine" || atribute == "FloatingMachine" || atribute == "SpaceMachine" ||
                atribute == "WheelMachine" || atribute =="Machine" || atribute == ".")) {
        return true;
    } else if (command == "SAVE") {
        return true;
    }else if (command == "READ"){
        return true;
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

int Base::commandToInt(std::string command, std::string atribute) {
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

bool FirstLevel::isCommandGood(std::string command, std::string atribute) {
    if (command == "") {
        return false;
    } else if (command == "CD" && atribute == "CD") {
        std::cout<<"Can't execute empty command!"<<std::endl;
        return false;
    } else if (command == "CD" &&
               (atribute == "Jet" || atribute == "Helicopter" || atribute == "Submarine" ||
                atribute == "Ship" || atribute == "Rocket" || atribute =="Machine" || atribute == ".")) {
        return true;
    } else if (command == "DO") {
        return false;
    } else if (command == "MO") {
        return false;
    } else if (command == "MDO") {
        return false;
    } else if (command == "DIR") {
        return false;
    } else if (command == "SHOW") {
        return true;
    } else if (command == "SAVE") {
        return true;
    } else if (command == "READ") {
        return true;
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

int FirstLevel::commandToInt(std::string command, std::string atribute){

    if(level == "FlyingMachine" && command=="CD" && (atribute == "Machine" || atribute == "." || atribute =="Jet" || atribute =="Helicopter")) {
        return 0;
    }else if(level == "FloatingMachine" && command=="CD" && (atribute == "Machine" || atribute == "." || atribute =="Submarine" || atribute =="Ship")){
        return 1;
    }
    else if(level == "WheelMachine" && command=="CD" && (atribute == "." || atribute == "Machine")){
        return 2;
    }else if(level == "SpaceMachine" && command=="CD" && (atribute == "Machine" || atribute == "." || atribute =="Rocket" )){
        return 3;
    }else if(command == "SAVE" ){
        return 4;
    }else if(command == "READ" ){
        return 5;
    }else if(command == "TREE" ){
        return 6;
    }else if(command == "EXIT" ){
        return 7;
    }else if(command == "HELP" ){
        return 8;
    }
    else
        return 10;
}

bool SecondLevel::isCommandGood(std::string command, std::string atribute) {
    if (command == "") {
        return false;

    } else if (command == "CD" && atribute == "CD") {

        std::cout<<"Can't execute empty command!"<<std::endl;
        return false;

    } else if (command == "CD" &&
               (atribute == "FlyingMachine" || atribute == "SpaceMachine" || atribute == "FloatingMachine" ||
                atribute == "WheelMachine" || atribute == ".")){
        return true;
    } else if (command == "DO") {

        return true;

    } else if (command == "MO") {

        return true;

    } else if (command == "MDO") {

        return true;

    } else if (command == "DIR") {

        return true;

    } else if (command == "SHOW") {

        return true;

    } else if (command == "SAVE") {

        return true;

    } else if (command == "READ") {

        return true;

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

int SecondLevel::commandToInt(std::string command, std::string atribute) {

    if (command == "CD" &&
        (atribute == "Machine" || atribute == "." || atribute == "FlyingMachine" || atribute == "Floating Machine" ||
         atribute == "WheelMachine" || atribute == "SpaceMachine")) {
        return 0;

    }else if(command == "MO") {
        return 1;
    }else if(command == "DO") {

    }else if(command == "MDO") {

    }else if(command == "DIR") {

    }else if(command == "SHOW") {

    }else if(command == "READ" ) {

    }else if(command == "TREE" ) {

    }else if(command == "EXIT" ) {

    }else if(command == "HELP" ) {

    }else
        return 10;

}