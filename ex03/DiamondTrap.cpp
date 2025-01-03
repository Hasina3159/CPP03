#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	ClapTrap::m_name = "_clap_name";
	this->m_name = "";
	this->m_health = FragTrap::m_health;
	this->m_energy = ScavTrap::m_energy;
	this->m_atk_dmg = FragTrap::m_atk_dmg;
	std::cout << "DiamondTrap Constructor called for " << this->m_name << std::endl;
}


DiamondTrap::DiamondTrap(std::string &name)
{
	ClapTrap::m_name = name + "_clap_name";
	this->m_name = name;
	this->m_health = 100;
	this->m_energy = 50;
	this->m_atk_dmg = 20;
	std::cout << "DiamondTrap Constructor with parameter called!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &other) : FragTrap(other), ScavTrap(other)
{
	ClapTrap::m_name = other.m_name + "_clap_name";
	this->m_name = other.m_name;
	this->m_health = other.m_health;
	this->m_energy = other.m_energy;
	this->m_atk_dmg = other.m_atk_dmg;
	std::cout << "DiamondTrap Copy Constructor called!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &other)
{
	if (this == &other)
		return (*this);
	ClapTrap::m_name = other.m_name + "_clap_name";
	this->m_name = other.m_name;
	this->m_health = other.m_health;
	this->m_energy = other.m_energy;
	this->m_atk_dmg = other.m_atk_dmg;
	std::cout << "DiamondTrap Copy operation Constructor called!" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called!" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target + "_clap_name");
}

void	DiamondTrap::whoAmI( void ) const
{
	std::cout << "name : " << m_name << ", ClapTrap name : " << this->ClapTrap::m_name << std::endl;
}
