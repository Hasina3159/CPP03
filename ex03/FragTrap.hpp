#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string &name);
    FragTrap(FragTrap &other);
    FragTrap operator=(FragTrap &other);
    ~FragTrap();
    void highFivesGuys(void);
};

#endif