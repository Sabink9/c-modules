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
	Contact()
	{
	}

	void setContact(std::string fn, std::string ln, std::string nn,
			std::string pn, std::string ds)
	{
		firstName = fn;
		lastName = ln;
		nickName = nn;
		phoneNumber = pn;
		darkestSecret = ds;
	}

	std::string getFirstName()
	{
		return (firstName);
	}
	std::string getLastName()
	{
		return (lastName);
	}
	std::string getNickName()
	{
		return (nickName);
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
