#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (void) {
    std::string name = "Trap_1";
    std::string name2 = "Trap_2";

    ScavTrap Trap_1(name);
    FragTrap Trap_2(name2);
    std::cout << "------------------------" << std::endl;
    Trap_1.attack("Johny");
    Trap_1.takeDamage(8);
    Trap_1.beRepaired(3);
    Trap_1.beRepaired(10000);
    Trap_1.takeDamage(100);
    Trap_1.guardGate();

    std::cout << "------------------------" << std::endl;
    Trap_2.takeDamage(8);
    Trap_2.beRepaired(3);
    Trap_2.beRepaired(10000);
    Trap_2.takeDamage(100);
    Trap_2.highFivesGuys();

}