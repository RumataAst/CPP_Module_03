#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main (void) {
    std::string name = "Trap_1";
    std::string name2 = "Trap_2";
    std::string name3 = "Trap_3";


    // ScavTrap Trap_1(name);
    // FragTrap Trap_2(name2);
    DiamondTrap Trap_3(name3);
    Trap_3.printEnergy();
    // std::cout << "------------------------" << std::endl;
    // Trap_1.attack("Johny");
    // Trap_1.takeDamage(8);
    // Trap_1.beRepaired(3);
    // Trap_1.beRepaired(10000);
    // Trap_1.takeDamage(100);
    // Trap_1.guardGate();

    // std::cout << "------------------------" << std::endl;
    // Trap_2.takeDamage(8);
    // Trap_2.beRepaired(3);
    // Trap_2.beRepaired(10000);
    // Trap_2.takeDamage(100);
    // Trap_2.highFivesGuys();

    // std::cout << "------------------------" << std::endl;
    // Trap_2.takeDamage(8);
    // Trap_2.beRepaired(3);
    // Trap_2.beRepaired(10000);
    // Trap_2.takeDamage(100);
    // Trap_2.highFivesGuys();

    std::cout << "------------------------" << std::endl;
    Trap_3.takeDamage(8);
    Trap_3.beRepaired(3);
    Trap_3.beRepaired(10000);
    Trap_3.attack("Somebody");
    Trap_3.takeDamage(100);
    Trap_3.whoAmI();

}