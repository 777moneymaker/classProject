//
// Created by Miłosz Chodkowski on 2019-03-12.
//

#ifndef PROJEKT_PPO_MAINFUNCTIONS_H
#define PROJEKT_PPO_MAINFUNCTIONS_H


namespace Utilities{
    void CommandList();   // prints list of  available Commands
    void Tree();          // prints class hierarchy
    void MenuGenerator(); // prints info about commands
    void pathName();      // shows path /.../.../:~ etc.
    void HelloMsg();
}

namespace Base {
    bool isCommandGood(std::string command, std::string atribute);     // checks for valid command at base level
    int commandToInt(std::string command, std::string atribute);       // used to transform command to int in switch-case
}

namespace FirstLevel {
    bool isCommandGood(std::string command, std::string atribute);     // checks for valid command at First level
    int commandToInt(std::string command, std::string atribute);       // used to transform command to int in switch-case
}
namespace SecondLevel{
    bool isCommandGood(std::string command, std::string atribute);       // checks for valid command af Second Level
    int commandToInt(std::string command, std::string atribute);         // used to transform command to int in switch-case
}

#endif //PROJEKT_PPO_MAINFUNCTIONS_H
