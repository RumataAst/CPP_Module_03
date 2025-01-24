#pragma once
#include <iostream>


class ClapTrap {
private:
    std::string _name; 
    unsigned int         _hitPoints, _energyPoints, _attackDamage;
    bool        _dead;
public:
    ClapTrap();
    ClapTrap( std::string &name );
    ClapTrap( const ClapTrap &copy);
    ClapTrap &operator = ( const ClapTrap &source );
    ~ClapTrap();

    void attack( const std::string& target );
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );
};