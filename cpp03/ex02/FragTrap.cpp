#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    HitPoints    = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FragTrap " << _name << " created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    ClapTrap::operator=(other);
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}