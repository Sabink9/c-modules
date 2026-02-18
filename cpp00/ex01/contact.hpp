#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <cctype>
#include <iostream>
#include <string>

class Contact
{
  private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	public:
	Contact();

	void setContact(std::string fn, std::string ln, std::string nn,
			std::string pn, std::string ds);
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getPhoneNumber();
	std::string getDarkestSecret();
};

#endif
