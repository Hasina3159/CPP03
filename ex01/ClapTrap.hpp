#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
protected:
	std::string 	m_name;
	unsigned int	m_health;
	unsigned int	m_energy;
	unsigned int	m_atk_dmg;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap &other);
	ClapTrap &operator=(ClapTrap &other);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif