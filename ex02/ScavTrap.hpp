#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : virtual public ClapTrap
{
private:

public:
    ScavTrap();
    ScavTrap(std::string &name);
    ScavTrap(ScavTrap &other);
    ScavTrap operator=(ScavTrap &other);
    ~ScavTrap();
    void guardGate();
};

#endif