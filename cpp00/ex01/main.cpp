#include "phoneBook.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	int			index = 0;

	while (true)
	{
		std::cout << "Entrez une commande (ADD, SEARCH, EXIT): ";
		std::string commande;
		if (!std::getline(std::cin, commande))
            break ;
		if (commande == "EXIT")
			break ;
		else if (commande == "ADD")
		{
			std::string fiNa, laNa, niNa, phNa, daSe;

			std::cout << "First Name: ";
			std::getline(std::cin, fiNa);
			std::cout << "Last Name: ";
			std::getline(std::cin, laNa);
			std::cout << "Nickname: ";
			std::getline(std::cin, niNa);
			std::cout << "Phone Number: ";
			std::getline(std::cin, phNa);
			std::cout << "Darkest Secret: ";
			std::getline(std::cin, daSe);
			if (fiNa.empty() || laNa.empty() || niNa.empty() || phNa.empty()
				|| daSe.empty())
			{
				std::cout << "Erreur : tous les champs doivent être remplis !" << std::endl;
			}
			else
			{
				phoneBook.addContact(fiNa, laNa, niNa, phNa, daSe);
				std::cout << "Contact ajouté avec succès !" << std::endl;
			}
		}
		else if (commande == "SEARCH")
		{
			phoneBook.displayAllContacts();
			std::cout << "Enter the index" << std::endl;
			std::cin >> index;
			std::cin.ignore();
			phoneBook.displayContacts(index);
		}
	}
	return (0);
}
