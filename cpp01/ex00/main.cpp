#include "Zombie.hpp"

int main(void) 
{
    Zombie* z = newZombie("Heap Bob");
    z->announce();
    delete z;

    randomChump("Stack Alice");

    return 0;
}