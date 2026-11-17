#include "Contact.hpp"

	Contact::Contact()
	{
		_firstName = "";
		_lastName = "";
		_nickname = "";
		_phoneNumber = "";
		_darkestSecret = "";
	}

	void	Contact::fillContact(std::string fN, std::string lN, std::string nN, std::string pN, std::string dS)
	{
		_firstName = fN;
		_lastName = lN;
		_nickname = nN;
		_phoneNumber = pN;
		_darkestSecret = dS;
	}

	bool	Contact::contactIsFilled()
	{
		if (_firstName != "")
			return 1;
		return 0;
	}

	void	Contact::displayContactInTable(int i)
	{
		std::cout
		<< std::setw(10) << i
		<< "|";
		if (_firstName.length() > 10)
			std::cout
			<< _firstName.substr(0, 9)
			<< ".";
		else
			std::cout
			<< std::setw(10) << _firstName;
		std:: cout << "|";
		if (_lastName.length() > 10)
			std::cout
			<< _lastName.substr(0, 9)
			<< ".";
		else
			std::cout
			<< std::setw(10) << _lastName;
		std:: cout << "|";
		if (_nickname.length() > 10)
			std::cout
			<< _nickname.substr(0, 9)
			<< ".";
		else
			std::cout
			<< std::setw(10) << _nickname;
		std::cout << std::endl;
	}

	void	Contact::displayFullContactInfo()
	{
		std::cout << std::endl
		<< "First Name : " << _firstName
		<< std::endl
		<< "Last Name : " << _lastName
		<< std::endl
		<< "Nickname : " << _nickname
		<< std::endl
		<< "Phone Number : " << _phoneNumber
		<< std::endl
		<< "Darkest Secret : " << _darkestSecret
		<< std::endl << std::endl;
	}

