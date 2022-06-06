/*
** EPITECH PROJECT, 2022
** SFMLgame
** File description:
** event
*/

#include "Rpg.hpp"

void Rpg::manage_event()
{
    while(window.rpg->pollEvent(event.event)) {
        if (event.event.type == sf::Event::Closed)
            window.rpg->close();
        if (event.event.type == sf::Event::KeyReleased && event.event.key.code == sf::Keyboard::F11) {
            window.is_fullscreen = !window.is_fullscreen;
            window.create_window();
        }
        if (event.event.type == sf::Event::KeyPressed && event.event.key.code == sf::Keyboard::F4)
            window.rpg->close();
    }
}