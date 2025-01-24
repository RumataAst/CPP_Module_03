#include "ScavTrap.hpp"

ScravTrap::ScravTrap() : ClapTrap() {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    _dead = false;
    std::cout << "ScravTrap " << _name << " is constructed" << std::endl;
}

ScravTrap::ScravTrap(const std::string &name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    _dead = false;
    std::cout << "ScravTrap " << _name << " is constructed" << std::endl;
}

ScravTrap::ScravTrap(const ScravTrap &copy) :  ClapTrap(copy) {
    std::cout << "ScravTrap copy constructor called" << std::endl;
}

ScravTrap &ScravTrap::operator = ( const ScravTrap &source ) {
    if (this != &source) {
        ClapTrap::operator=(source);
        std::cout << "ScravTrap operator = called" << std::endl;
    }
    return *this;
}

ScravTrap::~ScravTrap() {
        std::cout << "ScravTrap dissapears" << std::endl;
}

void ScravTrap::guardGate( void ) {
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

