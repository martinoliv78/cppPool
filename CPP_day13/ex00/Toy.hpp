/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Toy_H
#define Toy_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Picture.hpp"

class Toy
{
public:
    enum ToyType {BASIC_TOY, ALIEN};
    Toy();
    Toy(ToyType type, const std::string &name, const std::string &filename);
    ~Toy();
    ToyType getType() const;
    std::string getName() const;
    void setName(const std::string &name);
    bool setAscii(const std::string &filename);
    std::string getAscii() const;
private:
    ToyType m_type;
    std::string m_name;
    Picture m_picture;
};

#endif