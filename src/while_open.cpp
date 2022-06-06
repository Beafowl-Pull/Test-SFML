/*
** EPITECH PROJECT, 2022
** SFMLgame
** File description:
** while_open
*/

#include "Rpg.hpp"

void Rpg::while_open()
{
    while (window.rpg->isOpen()) {
        manage_event();
        window.rpg->clear();
        window.rpg->display();
    }
}
