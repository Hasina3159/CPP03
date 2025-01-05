#include <iostream>
#include "ScavTrap.hpp"

int main()
{
	std::string name1 = "Target1";
	std::string name2 = "Target2";
	ScavTrap 	scavtrap1(name1);
	ScavTrap 	scavtrap2(name2);

	for (int i = 0; i < 100; i++)
	{
		std::cout << i << " : " << std::flush;
		scavtrap2.attack("Target1");
	}
	scavtrap2.guardGate();
	return 0;
}
