#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Arthur");

    a.attack("Bob");
    a.takeDamage(5);
    a.beRepaired(3);
    a.attack("Bob");

    ClapTrap b(a);
    b.attack("Arthur");

    return (0);
}