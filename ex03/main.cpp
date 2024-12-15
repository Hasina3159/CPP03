#include "DiamondTrap.hpp"

int main() {
	std::string name1{"Player1"}, name2{"Player2"};
	DiamondTrap dt1(name1);
	DiamondTrap dt2(name2);

	dt2.attack("enemy");
	dt2.whoAmI();
	return 0;
}
