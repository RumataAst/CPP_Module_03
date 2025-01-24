#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Defaul ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0), _dead(false) {
    std::cout << "ClapTrap " << _name <<" is constructed" << std::endl;
}

ClapTrap::ClapTrap( const std::string &name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0), _dead(false) {
    std::cout << "ClapTrap " << _name <<" is constructed" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &copy ) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &source ) {
    if (this != &source) {
        _name = source._name;
        _hitPoints = source._hitPoints;
        _energyPoints = source._energyPoints;
        _attackDamage = source._attackDamage;
        std::cout << "ClapTrap operator = called" << std::endl;  
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap dissapears" << std::endl;
}

void ClapTrap::attack( const std::string& target ) {
    if (_dead || _energyPoints == 0)
    {
        std::cout << "ClapTrap is unable to attack";
    }
    else {
        _energyPoints--;
        std::cout << "ClapTrap: " << _name << " attacks "  
            << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage( unsigned int amount ) {
    if (amount >= _hitPoints) {
        _hitPoints = 0;
        _dead = true;
        std::cout << "Definitely destroyed" << std::endl;
    }
    else {
        _hitPoints -= amount;
        std::cout << "ClapTrap: " << _name << " takes " << amount
                << " points of damage, remaining HP: " << _hitPoints << std::endl;
        }
}

void ClapTrap::beRepaired( unsigned int amount ) {
    if (!_dead || _energyPoints > 0)
    {
        _energyPoints--;
        if (_hitPoints + amount <= 10) {
            _hitPoints += amount;
            std::cout << "Trap was repared for " << amount
                    << ". Current HP is " << _hitPoints << std::endl;
        }
        else {
            _hitPoints = 10;
            std::cout << "Trap looks like new" << std::endl;
        }
    }
    else 
        std::cout << "Dead can't heal" << std::endl;
}