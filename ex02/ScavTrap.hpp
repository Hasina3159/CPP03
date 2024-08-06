#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : public ClapTrap
{
private:

public:
    ScavTrap();
    ScavTrap(std::string &name);
    ScavTrap(ScavTrap &other);
    ScavTrap operator=(ScavTrap &other);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();
};

#endif