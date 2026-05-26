#include "Cat.hpp"

Cat::Cat()
{
    type   = "Cat";
    _brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    _brain = new Brain();
    *this  = other;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    Animal::operator=(other);
    *_brain = *other._brain;
    return *this;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}

Brain* Cat::getBrain(void) const
{
    return _brain;
}