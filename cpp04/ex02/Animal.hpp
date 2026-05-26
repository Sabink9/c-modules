#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
protected:
    std::string type;

public:
    AAnimal();
    AAnimal(const AAnimal& other);
    AAnimal& operator=(const AAnimal& other);
    virtual ~AAnimal();

    virtual void makeSound(void) const = 0;   // ← pure virtuelle
    std::string  getType(void) const;
};

#endif