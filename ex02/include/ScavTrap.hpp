#include <iostream>
#include "ClapTrap.hpp"
#pragma once

class ScravTrap: public ClapTrap {
public:
    ScravTrap(const std::string &name);
    ScravTrap(const ScravTrap &copy);
    ScravTrap &operator = ( const ScravTrap &source );
    ~ScravTrap();
    void guardGate();
};