#include "Bureaucrat.hpp"

int main()
{
    // Test 1 : création normale
    try
    {
        Bureaucrat b;
        std::cout << b << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    // Test 2 : grade trop haut (< 1)
    try
    {
        Bureaucrat b("Trop haut", 0);
        std::cout << b << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    // Test 3 : grade trop bas (> 150)
    try
    {
        Bureaucrat b("Trop bas", 200);
        std::cout << b << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    // Test 4 : incrémenter jusqu'à dépasser la limite haute
    try
    {
        Bureaucrat b("Ambitieux", 2);
        b.incrementGrade();
        std::cout << b << std::endl; // grade 1
        b.incrementGrade();          // doit throw
        std::cout << b << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    // Test 5 : décrémenter jusqu'à dépasser la limite basse
    try
    {
        Bureaucrat b("Fatigue", 149);
        b.decrementGrade();
        std::cout << b << std::endl; // grade 150
        b.decrementGrade();          // doit throw
        std::cout << b << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    // Test 6 : constructeur de copie + operator=
    try
    {
        Bureaucrat original("Original", 42);
        Bureaucrat copie(original);
        std::cout << copie << std::endl;

        Bureaucrat autre("Autre", 100);
        autre = original;
        std::cout << autre << std::endl; // même grade que original, nom inchangé
    }
    catch (std::exception &e)
    {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    return (0);
}
