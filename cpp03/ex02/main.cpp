#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ScavTrap a("Arthur");

    a.attack("Bob");
    a.takeDamage(50);
    a.beRepaired(20);
    a.guardGate();

    FragTrap b("Bob");
    b.attack("Arthur");
    b.highFivesGuys();

    return (0);
}