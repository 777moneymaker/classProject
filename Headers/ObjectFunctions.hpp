//
// Created by Miłosz Chodkowski on 2019-03-13.
//

#ifndef PROJEKT_PPO_OBJECTFUNCTIONS_H
#define PROJEKT_PPO_OBJECTFUNCTIONS_H

#include <iostream>
#include "Headers/Class.hpp"
#include "Headers/MenuFunctions.hpp"
#include "Headers/GlobalVariables.hpp"

namespace List{
    void insertNode(std::string name);  // insertion depends on actual level
    void printObjects();        // prints every object in actual level
    void deleteNodeByName(std::string name);
}

#endif //PROJEKT_PPO_OBJECTFUNCTIONS_H
