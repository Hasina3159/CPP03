#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->m_name = "";
	this->m_health = 100;
	this->m_energy = 50;
	this->m_atk_dmg = 20;
	std::cout << "ScavTrap Default Constructor called!"<< std::endl;
}

ScavTrap::ScavTrap(std::string &name) : ClapTrap()
{
	this->m_name = name;
	this->m_health = 100;
    this->m_energy = 50;
    this->m_atk_dmg = 20;
	std::cout << "ScavTrap Constructor with parameter called!"<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap &other) : ClapTrap()
{
	this->m_name = other.m_name;
	this->m_health = other.m_health;
    this->m_energy = other.m_energy;
    this->m_atk_dmg = other.m_atk_dmg;
	std::cout << "ScavTrap Copy Constructor called!"<< std::endl;
}

ScavTrap ScavTrap::operator=(ScavTrap &other)
{
	this->m_name = other.m_name;
	this->m_health = other.m_health;
    this->m_energy = other.m_energy;
    this->m_atk_dmg = other.m_atk_dmg;
	std::cout << "ScavTrap Copy operation Constructor called!"<< std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called!"<< std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gatekeeper mode"<< std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << m_name << " attacks " << target << ", causing " << m_atk_dmg << " points of damage!" << std::endl;
	ClapTrap::base_attack(target);
}