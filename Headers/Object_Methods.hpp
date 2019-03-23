//
// Created by Miłosz Chodkowski on 2019-03-17.
//


#ifndef PROJEKT_PPO_OBJECTFUNCTIONS_H
#define PROJEKT_PPO_OBJECTFUNCTIONS_H

#include <iostream>
#include <fstream>
#include "Headers/Class_Base.hpp"
#include "Headers/Menu_Methods.hpp"
#include "Headers/Global_Variables.hpp"

namespace List{
    void insertNode(std::string name);          // insertion depends on actual level
    void printObjects();                        // prints every object in actual level
    void deleteNodeByName(std::string name);    // deletes node by name in actual level
    void printObjectInfo(std::string name);     // prints objects by given name
    void modObject(std::string name);           // modificates object by given name
    void saveObjects();                         // saves objects at current level. Clears file before saving
    void readObjects();                         // reads objects at current level. Doesn't clear existing objects
}

#endif //PROJEKT_PPO_OBJECTFUNCTIONS_H
