/*
** EPITECH PROJECT, 2022
** SFMLgame
** File description:
** utils
*/

#include <iostream>
#include <string>
#include <fstream>

bool file_exist(std::string path)
{
    std::ifstream file(path);
    if (file)
        return true;
    else
        return false;
}