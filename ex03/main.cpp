#include "DiamondTrap.hpp"

int main() {
    DiamondTrap dt1;
    std::cout << std::endl;
    std::string name = "Diamond";
    DiamondTrap dt2(name);
    std::cout << std::endl;
    DiamondTrap dt3(dt2);
    std::cout << std::endl;
    DiamondTrap dt4;
    dt4 = dt2;
    std::cout << std::endl;
    dt2.attack("enemy");

    return 0;
}
