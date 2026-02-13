#include "contact.hpp"
#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>

class PhoneBook
{
  private:
	Contact contacts[8];
	int totalContacts;

  public:
	PhoneBook()
	{
		totalContacts = 0;
	}
	void addContact(std::string fn, std::string ln, std::string nn,
			std::string pn, std::string ds)
	{
		int index = totalContacts % 8;
		contacts[index].setContact(fn, ln, nn, pn, ds);
		totalContacts++;
	}

	void displayAllContacts()
	{
		int nbToDisplay;
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		if (totalContacts < 8)
			nbToDisplay = totalContacts;
		else
			nbToDisplay = 8;
		for (int i = 0; i < nbToDisplay; i++)
		{
			std::cout << "|" << std::setw(10) << std::right << i;
			std::string fn = contacts[i].getFirstName();
			if (fn.length() > 10)
				fn = fn.substr(0, 9) + ".";
			std::cout << "|" << std::setw(10) << std::right << fn;
			std::string ln = contacts[i].getLastName();
			if (ln.length() > 10)
				ln = ln.substr(0, 9) + ".";
			std::cout << "|" << std::setw(10) << std::right << ln;
			std::string nn = contacts[i].getNickName();
			if (nn.length() > 10)
				nn = nn.substr(0, 9) + ".";
			std::cout << "|" << std::setw(10) << std::right << nn;
			std::cout << "|" << std::endl;
		}
	}

	void displayContacts(int index)
	{
		int nbActuels;
		if (totalContacts < 8)
			nbActuels = totalContacts;
		else
			nbActuels = 8;

		if (index < 0 || index >= nbActuels)
		{
			std::cout << "Index invalide !" << std::endl;
			return ;
		}

		std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
		std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
		std::cout << "Nickname: " << contacts[index].getNickName() << std::endl;
		std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
	}
};
