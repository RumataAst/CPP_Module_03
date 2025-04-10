#include "ClapTrap.hpp"

#pragma once

class FragTrap: virtual public ClapTrap {
private:
public:
    FragTrap();
    FragTrap( const std::string &name );
    FragTrap( const FragTrap &copy );
    FragTrap &operator = ( const FragTrap &source );
    ~FragTrap();
    void highFivesGuys( void );
};