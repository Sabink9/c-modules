#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Animal* animals[10];

	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();

	Dog a;
	a.getBrain()->ideas[0] = "I like bones";
	Dog b(a);
	std::cout << b.getBrain()->ideas[0] << std::endl;

	for (int i = 0; i < 10; i++)
		delete animals[i];

	return (0);
}