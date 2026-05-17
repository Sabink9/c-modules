#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon& w) : name(n), weapon(w)
{
}
void	HumanA::attack()
{
	std::cout << name << " attacks with " << weapon.getType() << std::endl;
}