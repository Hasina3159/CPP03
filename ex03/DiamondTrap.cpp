#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("_clap_name")
{
	this->m_name = "";
	this->m_health = FragTrap::m_health;
	this->m_energy = ScavTrap::m_energy;
	this->m_atk_dmg = FragTrap::m_atk_dmg;
	std::cout << "DiamondTrap Constructor called for " << this->m_name << std::endl;
}


DiamondTrap::DiamondTrap(std::string &name) : ClapTrap(name + "_clap_name")
{
	this->m_name = name;
	this->m_health = 100;
	this->m_energy = 50;
	this->m_atk_dmg = 20;
	std::cout << "ScavTrap Constructor with parameter called!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
	this->m_name = other.m_name;
	this->m_health = other.m_health;
	this->m_energy = other.m_energy;
	this->m_atk_dmg = other.m_atk_dmg;
	std::cout << "ScavTrap Copy Constructor called!" << std::endl;
}

DiamondTrap DiamondTrap::operator=(DiamondTrap &other)
{
	this->m_name = other.m_name;
	this->m_health = other.m_health;
	this->m_energy = other.m_energy;
	this->m_atk_dmg = other.m_atk_dmg;
	std::cout << "ScavTrap Copy operation Constructor called!" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "ScavTrap Destructor called!" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}