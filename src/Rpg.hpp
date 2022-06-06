/*
** EPITECH PROJECT, 2022
** SFMLgame
** File description:
** main
*/

#ifndef MAIN_HPP_
#define MAIN_HPP_
#include <iostream>
#include <string>
#include <memory>
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Audio.hpp"

class window_c {
    public:
        window_c();
        ~window_c();
        void create_window();
        std::unique_ptr<sf::RenderWindow> rpg;
        bool is_fullscreen;
        sf::VideoMode mode;
};

class event_c {
    public:
        sf::Event event;
};

class Rpg {
    public:
        Rpg();
        ~Rpg();
        void while_open();
        void manage_event();
    protected:
    private:
        sf::Music music;
        window_c window;
        event_c event;
};

#endif
