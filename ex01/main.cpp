#include <iostream>
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scavtrap1;
    std::string name = "ScavTrapName";
    ScavTrap scavtrap2(name);
    ScavTrap scavtrap3(scavtrap2);
    ScavTrap scavtrap4;
    scavtrap4 = scavtrap2;
    scavtrap1.guardGate();
    scavtrap2.attack("Target1");
    scavtrap3.attack("Target2");
    scavtrap4.attack("Target3");

    return 0;
}