#include <cctype>
#include <iostream>
#include <string>

using namespace	std;

#include <string>

class Contact
{
  private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

  public:
	Contact()
	{
	}

	void setContact(std::string fn, std::string ln, std::string nn,
			std::string pn, std::string ds)
	{
		firstName = fn;
		lastName = ln;
		nickname = nn;
		phoneNumber = pn;
		darkestSecret = ds;
	}

	// Getters
	std::string getFirstName()
	{
		return (firstName);
	}
	std::string getLastName()
	{
		return (lastName);
	}
	std::string getNickname()
	{
		return (nickname);
	}
	std::string getPhoneNumber()
	{
		return (phoneNumber);
	}
	std::string getDarkestSecret()
	{
		return (darkestSecret);
	}
};

class PhoneBook
{
  private:
	Contact contacts[8]; // tableau statique de 8 contacts
	int currentIndex;    // index où ajouter le prochain contact
	int totalContacts;   // nombre total de contacts ajoutés

  public:
	PhoneBook()
		: currentIndex(0), totalContacts(0)
	{
	}

	void addContact(Contact newContact)
	{
		contacts[currentIndex] = newContact;
		currentIndex = (currentIndex + 1) % 8; // revient à 0 après 7
		if (totalContacts < 8)
		{
			totalContacts++;
		}
	}

	Contact getContact(int index)
	{
		if (index >= 0 && index < totalContacts)
		{
			return (contacts[index]);
		}
		return (Contact()); // retourne un contact vide si index invalide
	}

	int getContactCount()
	{
		return (totalContacts);
	}
};

int	main(void)
{
	return (0);
}
