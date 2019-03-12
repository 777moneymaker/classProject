#include <iostream>
#include "Headers/Class.h"
#include "Headers/MainFunctions.h"


//5 list's - 5 global head variables

Jet *JetNext = NULL;
Helicopter *HeliNext = NULL;
Submarine *SubNext = NULL;
Ship *ShipNext = NULL;
Rocket *RocketNext = NULL;

int main() {
    std::string command;
    MenuGenerator();

    std::cout<< "Enter the command and give the class you want to Enter" <<std::endl;
    std::cout<< "~Machine: ";

    do{
        getline(std::cin, command);
    }while( !isCommandGoodAtBase(command) );

    switch( commandToInt(command) ){
        case 1:{
            std::cout<<"You are now in WheelMachines!";
        }
        default:{

        }
    }

}





