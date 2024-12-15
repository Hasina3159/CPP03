#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include "struct.h"

class ClapTrap
{
private:
	static t_ClapTrap* all_instances;

	std::string 	m_name;
	unsigned int	m_health;
	unsigned int	m_energy;
	unsigned int	m_atk_dmg;

	void			add_self();
	void			remove_self();

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap &other);
	ClapTrap &operator=(ClapTrap &other);
	virtual ~ClapTrap();
	
	void 			attack(const std::string& target);
	void 			takeDamage(unsigned int amount);
	void 			beRepaired(unsigned int amount);
	std::string		get_name( void ) const;
};

#endif