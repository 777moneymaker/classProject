//
// Created by Miłosz Chodkowski on 2019-03-12.
//

#ifndef PROJEKT_PPO_MAINFUNCTIONS_H
#define PROJEKT_PPO_MAINFUNCTIONS_H


namespace Utilities{
    void CommandList();
    void Tree();
    void MenuGenerator(); // prints info about commands
}

namespace Base {
    bool isCommandGood(std::string command, std::string atribute);
    int commandToInt(std::string command, std::string atribute);
}// returns number when given string is a command

namespace FirstLevel {
    bool isCommandGood(std::string command, std::string atribute);
    int commandToInt(std::string command, std::string atribute);
}

namespace SecondLevel{
    bool isCommandGood(std::string command, std::string atribute);
    int commandToInt(std::string command, std::string atribute);
}

#endif //PROJEKT_PPO_MAINFUNCTIONS_H
