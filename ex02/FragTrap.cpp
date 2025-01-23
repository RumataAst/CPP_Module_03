#include "FragTrap.hpp"

FragTrap::FragTrap( const std::string &name ) : ClapTrap ( name ) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    _dead = false;
    std::cout << "ScravTrap " << _name << " is constructed" << std::endl;
}