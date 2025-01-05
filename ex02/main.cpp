#include <iostream>
#include "FragTrap.hpp"

int main()
{
    std::string name1 = "Target1";
    std::string name2 = "Target2";
    std::string name3 = "Target3";
    FragTrap scavtrap2(name1);
    FragTrap scavtrap3(name2);
    FragTrap scavtrap4(name3);
    scavtrap2.highFivesGuys();
    scavtrap2.attack("Target1");
    scavtrap3.attack("Target2");
    scavtrap4.attack("Target3");
    scavtrap2.attack("Target1");
    scavtrap3.attack("Target2");
    scavtrap4.attack("Target3");
    return 0;
}
