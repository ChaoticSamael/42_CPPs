
#include "PhoneBook.hpp"

void	PhoneBook::addContact(int i)
{
	std::string	fN = "";
	std::string	lN = "";
	std::string	nN = "";
	std::string	pN = "";
	std::string	dS = "";	
	while (fN == "" && !std::cin.eof())
	{
	//  check for ctrl+d
		// std::cin.clear();
	// prompt for info
		std::cout << "First Name : " ;
	// receive and fill
		getline(std::cin, fN);
		std::cout << std::endl;
	// if empty ask again
	}
	while (lN == "" && !std::cin.eof())
	{
	// prompt for info
		std::cout << "Last Name : " ;
	// receive and fill
		getline(std::cin, lN);
		std::cout << std::endl;
	// if empty ask again
	}
	while (nN == "" && !std::cin.eof())
	{
	// prompt for info
		std::cout << "Nickname : " ;
	// receive and fill
		getline(std::cin, nN);
		std::cout << std::endl;
	// if empty ask again
	}
	while (pN == "" && !std::cin.eof())
	{
	// prompt for info
		std::cout << "Phone Number : " ;
	// receive and fill
		getline(std::cin, pN);
		std::cout << std::endl;
	// if empty ask again
	}
	while (dS == "" && !std::cin.eof())
	{
	// prompt for info
		std::cout << "Darkest Secret : " ;
	// receive and fill
		getline(std::cin, dS);
		std::cout << std::endl;
	// if empty ask again
	}
	if (!std::cin.eof())
		_contacts[i].fillContact(fN, lN, nN, pN, dS);
}

void	PhoneBook::displayContacts(int i)
{
	int cnt = 8;
	for (int n = 8; n > 0; n--)
	{
		i = (i + 1) % 8;
		if (_contacts[i].contactIsFilled())
			_contacts[i].displayContactInTable(i);
	}
}

void PhoneBook::displayContactByIndex(int i)
{
	std::cout << std::endl;
	if (_contacts[i].contactIsFilled())
		_contacts[i].displayFullContactInfo();
	else
		std::cout
		<< "This contact doesn't exist yet."
		<< std::endl << std::endl;
}
