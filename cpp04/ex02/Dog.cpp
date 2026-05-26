#include "Dog.hpp"

Dog::Dog()
{
    type   = "Dog";
    _brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : AAnimal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    _brain = new Brain();
    *this  = other;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    AAnimal::operator=(other);
    *_brain = *other._brain;
    return *this;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof!" << std::endl;
}

Brain* Dog::getBrain(void) const
{
    return _brain;
}