#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include "struct.h"

class ClapTrap
{
protected:
	static t_ClapTrap* all_instances;

	void			remove_self();
	void			add_self();
	void 			base_attack(const std::string& target);

	std::string 	m_name;
	unsigned int	m_health;
	unsigned int	m_energy;
	unsigned int	m_atk_dmg;
	
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