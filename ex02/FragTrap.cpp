#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    _dead = false;
    std::cout << "ScravTrap " << _name << " is constructed" << std::endl;
}

FragTrap::FragTrap( const std::string &name ) : ClapTrap( name ) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    _dead = false;
    std::cout << "ScravTrap " << _name << " is constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
    std::cout << "FragTrap copy constructor is called" << std::endl;
}

FragTrap &FragTrap::operator = (const FragTrap &source) {
    if (this != &source) {
        ClapTrap::operator=(source);
        std::cout << "FragTrap operator = called" << std::endl;
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap dissapears" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << _name << " high five? i guess...." << std::endl;
}