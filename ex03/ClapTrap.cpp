#include "ClapTrap.hpp"

t_ClapTrap *ClapTrap::all_instances = nullptr;

void	ClapTrap::add_self()
{
	t_ClapTrap	*tmp;
	t_ClapTrap	*newClapTrap = new t_ClapTrap();

	if (newClapTrap == nullptr)
		return;

	newClapTrap->element = this;
	newClapTrap->next = nullptr;

	if (ClapTrap::all_instances == nullptr)
	{
		ClapTrap::all_instances = newClapTrap;
		return;
	}

	tmp = ClapTrap::all_instances;
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = newClapTrap;
}

void	ClapTrap::remove_self()
{
	t_ClapTrap	*tmp;
	t_ClapTrap	*prec;
	int			i;

	if (ClapTrap::all_instances == nullptr)
		return;

	i = 0;
	tmp = ClapTrap::all_instances;
	prec = ClapTrap::all_instances;
	while (tmp)
	{
			
		if (static_cast<ClapTrap*>(tmp->element) == this)
		{
			if (i == 0)
				ClapTrap::all_instances = tmp->next;
			else
				prec->next = tmp->next;
			delete tmp;
			return;
		}

		if (i != 0)
			prec = prec->next;
		tmp = tmp->next;
		i++;
	}
}

ClapTrap::ClapTrap() : m_name(""), m_health(10), m_energy(10), m_atk_dmg(0)
{
	std::cout << "Default constructor called!"<< std::endl;
	add_self();
}

ClapTrap::ClapTrap(std::string name) :  m_name(name), m_health(10), m_energy(10), m_atk_dmg(0)
{
	std::cout << "Constructor with parameter called : "<< name << std::endl;
	add_self();
}

ClapTrap::ClapTrap(ClapTrap &other) :  m_name(other.m_name), m_health(other.m_health), m_energy(other.m_energy), m_atk_dmg(other.m_atk_dmg)
{
	std::cout << "Copy constructor called!"<< std::endl;
	add_self();
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called!"<< std::endl;
	remove_self();
}

ClapTrap &ClapTrap::operator=(ClapTrap &other)
{
	std::cout << "Copy affectation called!"<< std::endl;
	this->m_name = other.m_name;
	this->m_health = other.m_health;
	this->m_energy = other.m_energy;
	this->m_atk_dmg = other.m_atk_dmg;
	add_self();
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	t_ClapTrap	*tmp;

	if (m_energy <= 0 || m_health <= 0)
		return ;
	
	tmp = ClapTrap::all_instances;
	while (tmp)
	{
		if (static_cast<ClapTrap*>(tmp->element)->get_name() == target)
			static_cast<ClapTrap*>(tmp->element)->takeDamage(m_atk_dmg);
		tmp = tmp->next;
	}

	std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing " << m_atk_dmg << " points of damage!" << std::endl;
	m_energy--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (m_health <= 0)
		return ;
	if (amount > m_health)
	{
		std::cout << m_name << " is taking " << amount << " damage!"<< std::endl;
		m_health = 0;
		return ;
	}
	std::cout << m_name << " is taking damage!"<< std::endl;
	m_health = m_health - amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (m_energy <= 0 || m_health <= 0)
		return ;
	std::cout << m_name << " is repairing him/herself!"<< std::endl;
	m_health = m_health + amount;
}

std::string	ClapTrap::get_name( void ) const
{
	return (m_name);
}
