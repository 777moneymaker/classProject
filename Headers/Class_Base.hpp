//
// Created by Miłosz Chodkowski on 2019-03-17.
//


#ifndef PROJEKT_PPO_CLASS_H
#define PROJEKT_PPO_CLASS_H

#include<iostream>
#include <fstream>
#include "Menu_Methods.hpp"

//
//BASE CLASS
//
class Machine {
private:
    float mass;
protected:
    float power;
public:
    std::string name;
}; //end of class Machine


#endif //PROJEKT_PPO_CLASS_H
