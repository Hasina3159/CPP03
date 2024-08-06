#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : m_name(""), m_atk_dmg(0), m_energy(10), m_health(10)
{
    std::cout << "Default constructor called!"<< std::endl;
}

ClapTrap::ClapTrap(std::string name) :  m_name(name), m_atk_dmg(0), m_energy(10), m_health(10)
{
    std::cout << "Constructor with parameter called!"<< std::endl;
}

ClapTrap::ClapTrap(ClapTrap &other) :  m_name(other.m_name), m_atk_dmg(other.m_atk_dmg), m_energy(other.m_energy), m_health(other.m_health)
{
    std::cout << "Copy constructor called!"<< std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called!"<< std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &other)
{
    std::cout << "Copy affectation called!"<< std::endl;
    this->m_name = other.m_name;
    this->m_energy = other.m_energy;
    this->m_health = other.m_health;
    this->m_atk_dmg = other.m_atk_dmg;
    return (*this);
}
void ClapTrap::attack(const std::string& target)
{
    if (m_energy <= 0 || m_health <= 0)
        return ;
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
    m_health++;
}