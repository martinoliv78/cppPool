/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Woody.hpp"

Woody::Woody(const std::string &name, const std::string &filename) : Toy(Toy::WOODY, name, filename)
{
}

Woody::~Woody()
{
}

void Woody::speak(const std::string &statement)
{
    std::cout << "WOODY: " << m_name << " \"" << statement << "\"" << std::endl;
}