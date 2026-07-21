#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    // Test 1 : affichage d'un Form valide
    try
    {
        Form f("Demande de conges", 50, 25);
        std::cout << f << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    // Test 2 : Form avec grade trop haut (< 1)
    try
    {
        Form f("Trop haut", 0, 50);
        std::cout << f << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    // Test 3 : Form avec grade trop bas (> 150)
    try
    {
        Form f("Trop bas", 50, 200);
        std::cout << f << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    // Test 4 : Bureaucrat avec grade suffisant signe le Form
    try
    {
        Bureaucrat b("Sabin", 10);
        Form f("Demande de materiel", 50, 25);

        std::cout << b << std::endl;
        std::cout << f << std::endl;

        b.signForm(f);
        std::cout << f << std::endl; // isSigned doit passer a 1
    }
    catch (std::exception &e)
    {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    // Test 5 : Bureaucrat avec grade insuffisant ne peut pas signer
    try
    {
        Bureaucrat b("Stagiaire", 100);
        Form f("Demande sensible", 20, 10);

        std::cout << b << std::endl;
        std::cout << f << std::endl;

        b.signForm(f);
        std::cout << f << std::endl; // isSigned doit rester a 0
    }
    catch (std::exception &e)
    {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    // Test 6 : grade exactement egal a la limite requise (doit reussir)
    try
    {
        Bureaucrat b("Limite", 42);
        Form f("Formulaire limite", 42, 42);

        b.signForm(f);
        std::cout << f << std::endl; // doit etre signe
    }
    catch (std::exception &e)
    {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    // Test 7 : Form par defaut
    try
    {
        Form f;
        std::cout << f << std::endl; // grade 150/150, non signe
    }
    catch (std::exception &e)
    {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    // Test 8 : constructeur de copie de Form
    try
    {
        Form original("Original", 30, 20);
        Bureaucrat b("Signataire", 10);

        b.signForm(original);
        std::cout << "Original: " << original << std::endl;

        Form copie(original);
        std::cout << "Copie: " << copie << std::endl; // doit garder isSigned a 1
    }
    catch (std::exception &e)
    {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    return (0);
}