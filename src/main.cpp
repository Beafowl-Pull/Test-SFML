/*
** EPITECH PROJECT, 2022
** SFMLgame
** File description:
** main
*/

#include <iostream>
#include "Rpg.hpp"
#include <memory>

int main(int ac, char **av)
{
    std::string str;

    if (ac < 1)
        str = av[1];

    if (ac == 2 && str == "-h") {
        std::cout << "Usage: ./Rpg [-h] [-f]" << std::endl;
        std::cout << "  -h: display this help" << std::endl;
    }
    std::unique_ptr<Rpg> win(new Rpg());
}