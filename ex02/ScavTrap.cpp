#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
    _dead = false;
    std::cout << "ScavTrap " << _name << " is constructed" << std::endl;
}

ScavTrap::ScavTrap( const std::string &name ) : ClapTrap( name ) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
    _dead = false;
    std::cout << "ScavTrap " << _name << " is constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) :  ClapTrap(copy) {
    std::cout << "ScavTrap copy constructor is called" << std::endl;
}

ScavTrap &ScavTrap::operator = ( const ScavTrap &source ) {
    if (this != &source) {
        ClapTrap::operator=(source);
        std::cout << "ScavTrap operator = called" << std::endl;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
        std::cout << "ScavTrap dissapears" << std::endl;
}

void ScavTrap::attack( const std::string &target) {
    std::cout << "Mighty ScavTrap attacks " << target << std::endl;
}

void ScavTrap::guardGate( void ) {
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

