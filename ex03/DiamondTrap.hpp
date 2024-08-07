#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>
# include <string>

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string m_name;
public:
    DiamondTrap();
    DiamondTrap(std::string &name);
    DiamondTrap(DiamondTrap &other);
    DiamondTrap operator=(DiamondTrap &other);
    virtual ~DiamondTrap();
    void attack(const std::string& target);
};

#endif