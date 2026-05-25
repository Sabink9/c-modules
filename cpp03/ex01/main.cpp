#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap a("Arthur");

    a.attack("Bob");
    a.takeDamage(50);
    a.beRepaired(20);
    a.guardGate();

    ScavTrap b(a);
    b.attack("Arthur");

    return (0);
}