#pragma once

#include <iostream>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap: public  FragTrap, public  ScavTrap {
private:
    std::string     _name;
    unsigned int    _hitPoints, _energyPoints, _attackDamage;
    bool            _dead;

public:
    DiamondTrap();
    DiamondTrap( const std::string &name );
    DiamondTrap( const DiamondTrap &copy );
    DiamondTrap &operator=( const DiamondTrap &source );
    ~DiamondTrap();

    void attack(const std::string &target); 

    void whoAmI() const;
};