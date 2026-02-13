#include "phoneBook.hpp"

int	main(void)
{
	PhoneBook	PhoneBook;
	int			index;

	std::string fiNa;
	std::string laNa;
	std::string niNa;
	std::string phNa;
	std::string daSe;
	while (true)
	{
		std::cout << "Entrez une commande (ADD, SEARCH, EXIT): ";
		std::string commande;
		std::getline(std::cin, commande);
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
				PhoneBook.addContact(fiNa, laNa, niNa, phNa, daSe);
				std::cout << "Contact ajouté avec succès !" << std::endl;
			}
		}
		else if (commande == "SEARCH")
		{
			PhoneBook.displayAllContacts();
			std::cout << "Enter the index" << std::endl;
			std::cin >> index;
			std::cin.ignore();
			PhoneBook.displayContacts(index);
		}
	}
	return (0);
}
