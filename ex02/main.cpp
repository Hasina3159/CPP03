#include <iostream>
#include "FragTrap.hpp"

int main()
{
    FragTrap scavtrap1;
    std::string name = "Target1";
    FragTrap scavtrap2(name);
    FragTrap scavtrap3(scavtrap2);
    FragTrap scavtrap4;
    scavtrap4 = scavtrap2;
    scavtrap1.highFivesGuys();
    scavtrap2.attack("Target1");
    scavtrap3.attack("Target2");
    scavtrap4.attack("Target3");
    return 0;
}
