//
// Created by Miłosz Chodkowski on 2019-03-13.
//

#include <iostream>
#include <Headers/GlobalVariables.h>
#include "Headers/Class.h"

void Jet::InsertNewJet() {
    Jet *newJet = new Jet;

    std::string colour;
    std::string weaponType;
    float maxSpeed;

    std::cout << "Set parameters for new Jet:" << std::endl;
    std::cout <<"Set colour: ";
    std::cin>>colour;

    std::cout <<"Set weapon type: ";
    std::cin>>weaponType;

    std::cout <<"Set max speed: ";
    std::cin >> maxSpeed;

    newJet->colour = colour;
    newJet->weaponType = weaponType;
    newJet->maxSpeed = maxSpeed;
    newJet->next = NULL;

    if(JetHead == NULL) {
        JetHead = newJet;
        return;
    }

    while(JetHead->next != NULL)
        JetHead = JetHead->next;
    JetHead->next = newJet;
    JetHead = newJet;
    return;
}