#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
        : ClapTrap(), FragTrap(), ScavTrap(), _name("Default") {
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    _dead = false;
    std::cout << "DiamondTrap " << _name << " is created" << std::endl;
}

DiamondTrap::DiamondTrap( const std::string &name ) 
        : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), _name(name) {
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    _dead = false;
    std::cout << "DiamondTrap " << _name << " is created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
    : ClapTrap(copy), FragTrap(copy), ScavTrap(copy), _name(copy._name) {
    std::cout << "DiamondTrap copy constructor is called" << std::endl;
}

DiamondTrap &DiamondTrap::operator= (const DiamondTrap &source) {
    if (this != &source) {
		ClapTrap::operator=(source);
		FragTrap::operator=(source);
		ScavTrap::operator=(source);
		_name = source._name;
		_hitPoints = source._hitPoints;
		_energyPoints = source._energyPoints;
		_attackDamage = source._attackDamage;
        _dead = source._dead;
        std::cout << "DiamondTrap operator = called" << std::endl;
    }
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap dissapears" << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const {
       std::cout << "My name is " << _name 
              << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}