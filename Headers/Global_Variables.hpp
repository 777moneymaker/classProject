//
// Created by Miłosz Chodkowski on 2019-03-17.
//


#ifndef PROJEKT_PPO_GLOBALVARIABLES_H
#define PROJEKT_PPO_GLOBALVARIABLES_H

#include <iostream>
#include "Headers/Class_Base.hpp"
#include "Headers/Class_First_Level.hpp"
#include "Headers/Class_Second_Level.hpp"

extern std::string level; // var stores actual level

extern Jet *JetHead;
extern Helicopter *HeliHead;        //
extern Submarine *SubHead;          //  Each class head's
extern Ship *ShipHead;              //
extern Rocket *RocketHead;
extern WheelMachine *MachineHead;


#endif //PROJEKT_PPO_GLOBALVARIABLES_H
