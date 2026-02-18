#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <cctype>
# include <iomanip>
# include <iostream>
# include <string>

class PhoneBook
{
  private:
	Contact contacts[8];
	int totalContacts;

  public:
	PhoneBook();
	void addContact(std::string fn, std::string ln, std::string nn,
			std::string pn, std::string ds);

	void displayAllContacts();

	void displayContacts(int index);
};

#endif
