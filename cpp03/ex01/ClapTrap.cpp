#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "ClapTrap " << _name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    _name         = other._name;
    HitPoints     = other.HitPoints;
    EnergyPoints  = other.EnergyPoints;
    AttackDamage  = other.AttackDamage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (HitPoints == 0 || EnergyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " can't attack!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
    EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (HitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
    HitPoints -= amount;
    if (HitPoints < 0)
        HitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (HitPoints == 0 || EnergyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " can't repair!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " repairs itself, gaining " << amount << " hit points!" << std::endl;
    HitPoints += amount;
    EnergyPoints--;
}