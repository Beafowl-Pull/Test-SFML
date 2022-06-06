/*
** EPITECH PROJECT, 2022
** SFMLgame
** File description:
** create_window
*/
#include "Rpg.hpp"
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

window_c::window_c()
{
    is_fullscreen = true;
    mode = {1920, 1080, 32};
    rpg = std::make_unique<sf::RenderWindow>();
    rpg->create(mode, "Rpg", sf::Style::Fullscreen);
    rpg->setFramerateLimit(60);
    rpg->setVerticalSyncEnabled(true);
    rpg->setMouseCursorVisible(false);
}

window_c::~window_c()
{

}

void window_c::create_window()
{
    rpg.reset();
    rpg = std::make_unique<sf::RenderWindow>();

    if (is_fullscreen)
        rpg->create(mode, "SFML window", sf::Style::Fullscreen);
    else
        rpg->create(mode, "SFML", sf::Style::Close);
    rpg->setFramerateLimit(60);
    rpg->setVerticalSyncEnabled(true);
    rpg->setMouseCursorVisible(false);
}