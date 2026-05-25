#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    HitPoints    = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap " << _name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    ClapTrap::operator=(other);
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (HitPoints == 0 || EnergyPoints == 0)
    {
        std::cout << "ScavTrap " << _name << " can't attack!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
    EnergyPoints--;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}