#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->m_name = "";
	this->m_health = 100;
	this->m_energy = 100;
	this->m_atk_dmg = 30;
	std::cout << "FragTrap Default Constructor called!"<< std::endl;
}

FragTrap::FragTrap(std::string &name) : ClapTrap()
{
	this->m_name = name;
	this->m_health = 100;
	this->m_energy = 100;
	this->m_atk_dmg = 30;
	std::cout << "FragTrap Constructor with parameter called!"<< std::endl;
}

FragTrap::FragTrap(FragTrap &other) : ClapTrap()
{
	this->m_name = other.m_name;
	this->m_health = other.m_health;
	this->m_energy = other.m_energy;
	this->m_atk_dmg = other.m_atk_dmg;
	std::cout << "FragTrap Copy Constructor called!"<< std::endl;
}

void FragTrap::attack(const std::string& target)
{
	t_ClapTrap	*tmp;

	if (m_energy <= 0 || m_health <= 0)
		return ;
	
	std::cout << "FragTrap " << m_name << " attacks " << target << ", causing " << m_atk_dmg << " points of damage!" << std::endl;
	
	tmp = ClapTrap::all_instances;
	while (tmp)
	{
		if (static_cast<ClapTrap*>(tmp->element)->get_name() == target)
			static_cast<ClapTrap*>(tmp->element)->takeDamage(m_atk_dmg);
		tmp = tmp->next;
	}

	m_energy--;
}

FragTrap FragTrap::operator=(FragTrap &other)
{
	this->m_name = other.m_name;
	this->m_health = other.m_health;
	this->m_energy = other.m_energy;
	this->m_atk_dmg = other.m_atk_dmg;
	std::cout << "FragTrap Copy operation Constructor called!"<< std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called!"<< std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "HIGH FIVE!"<< std::endl;
}