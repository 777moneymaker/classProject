//
// Created by Miłosz Chodkowski on 2019-03-12.
//

#ifndef PROJEKT_PPO_MAINFUNCTIONS_H
#define PROJEKT_PPO_MAINFUNCTIONS_H

extern std::string level;

void CommandList();

void Tree();

void MenuGenerator(); // prints info about commands

bool isCommandGoodAtBase(std::string command, std::string atribute);

int commandToIntAtBase(std::string command,std::string atribute);  // returns number when given string is a command

bool isCommandGoodAtFirst(std::string command, std::string atribute);

int commandToIntAtFirst(std::string command, std::string atribute);
#endif //PROJEKT_PPO_MAINFUNCTIONS_H
