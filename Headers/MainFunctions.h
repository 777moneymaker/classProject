//
// Created by Miłosz Chodkowski on 2019-03-12.
//

#ifndef PROJEKT_PPO_MAINFUNCTIONS_H
#define PROJEKT_PPO_MAINFUNCTIONS_H

void MenuGenerator(); // prints info about commands

bool isCommandGoodAtBase(std::string command);

int commandToInt(std::string command);  // returns number when given string is a command



#endif //PROJEKT_PPO_MAINFUNCTIONS_H
