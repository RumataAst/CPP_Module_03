#include "ClapTrap.hpp"

#pragma once

class FragTrap: public ClapTrap {
private:
public:
    FragTrap( const std::string &name);
    FragTrap(const FragTrap &copy);
    FragTrap &operator = ( const FragTrap &source);
    ~FragTrap();
    void highFivesGuys(void);
};