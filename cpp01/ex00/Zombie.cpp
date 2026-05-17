#include "Zombie.hpp"

// Zombie.cpp
Zombie::Zombie(std::string name) 
{
    this->name = name;
}

Zombie::~Zombie() 
{
    std::cout << name << " est détruit" << std::endl;
}

void Zombie::announce(void) 
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}