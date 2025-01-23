#include "ScavTrap.hpp"

int main (void) {
    std::string name = "Trap_1";
    std::string name2 = "Trap_2";
    ScravTrap Trap_1(name);
    ScravTrap Trap_2 = Trap_1;
    Trap_1.attack("Johny");
    Trap_2.takeDamage(50);
    Trap_2.beRepaired(3);
    Trap_1.takeDamage(8);
    Trap_1.beRepaired(3);
    Trap_1.beRepaired(10000);
    Trap_1.takeDamage(100);
    Trap_1.guardGate();
}