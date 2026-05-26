#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    // Test 1 — AAnimal ne peut pas etre instanciee
    // AAnimal* a = new AAnimal();

    std::cout << "--- Test polymorphisme ---" << std::endl;
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    j->makeSound();   // Woof!
    i->makeSound();   // Meow!
    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    delete j;
    delete i;

    std::cout << "--- Test tableau ---" << std::endl;
    AAnimal* animals[10];
    for (int k = 0; k < 5; k++)
        animals[k] = new Dog();
    for (int k = 5; k < 10; k++)
        animals[k] = new Cat();
    for (int k = 0; k < 10; k++)
        delete animals[k];

    std::cout << "--- Test copie profonde ---" << std::endl;
    Dog a;
    a.getBrain()->ideas[0] = "I like bones";
    Dog b(a);
    std::cout << "a idea : " << a.getBrain()->ideas[0] << std::endl;
    std::cout << "b idea : " << b.getBrain()->ideas[0] << std::endl;
    b.getBrain()->ideas[0] = "I like cats";
    std::cout << "a idea apres modif b : " << a.getBrain()->ideas[0] << std::endl;
    std::cout << "b idea apres modif b : " << b.getBrain()->ideas[0] << std::endl;

    return (0);
}