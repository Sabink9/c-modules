#include "Animal.hpp"

Animal::Animal() : type("")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    type = other.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
    std::cout << "Animal makes a sound" << std::endl;
}

std::string Animal::getType(void) const
{
    return type;
}