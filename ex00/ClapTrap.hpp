#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
private:
	std::string m_name;
	int         m_health;
	int         m_energy;
	int         m_atk_dmg;
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

ClapTrap::ClapTrap(/* args */)
{
}

ClapTrap::~ClapTrap()
{
}


#endif