#include "ScavTrap.hpp"

int main (void) {
    std::string name = "Trap_1";
    ScravTrap Trap_1(name);
    Trap_1.attack("Johny");
    Trap_1.takeDamage(8);
    Trap_1.beRepaired(3);
    Trap_1.beRepaired(10000);
    Trap_1.takeDamage(100);
    Trap_1.guardGate();
}