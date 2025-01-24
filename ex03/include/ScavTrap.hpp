#include <iostream>
#include "ClapTrap.hpp"
#pragma once

class ScavTrap:virtual public ClapTrap {
public:
    ScavTrap();
    ScavTrap( const std::string &name );
    ScavTrap( const ScavTrap &copy );
    ScavTrap &operator = ( const ScavTrap &source );
    ~ScavTrap();
    void guardGate();
};