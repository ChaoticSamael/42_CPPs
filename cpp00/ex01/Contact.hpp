# ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>


class Contact
{
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;
public:
	Contact();
	// ~Contact();
	void	fillContact(std::string fN, std::string lN, std::string nN, std::string pN, std::string dS);
	bool	contactIsFilled();
	void	displayContactInTable(int i);
	void	displayFullContactInfo();
};

# endif