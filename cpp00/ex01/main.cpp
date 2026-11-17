#include <string>
#include <iostream>
#include "PhoneBook.hpp"

int	main()
{
	// initialize stuff
	PhoneBook 	phoneBook;
	bool		phoneBookIsOpen = true;
	std::string	cmd;
	// contact index (input by user)
	std::string	num;
	// contact index (input by user for internal use)
	int			n;
	// internal contact index
	int i = -1;

	// ask for a command
	std::cout
	<< "Welcome to your New Empty Crappy PhoneBook!"
	<< std::endl
	<< "Type \"ADD\" to add a new contact, \"SEARCH\" to look for a contact or \"EXIT\" to quit your PhoneBook and erase all the data."
	<< std::endl
	<< "Useful right!?"
	<< std::endl << std::endl;
	while (phoneBookIsOpen )
	{
		getline(std::cin, cmd);
		if (std::cin.eof())
			phoneBookIsOpen = false;
		// wait for command
		// receive comand
		else if (cmd == "SEARCH")
		{
	// 		// display table
			if (i >= 0)
				phoneBook.displayContacts(i);
			std::cout << std::endl;
	// 		// ask for index
			std::cout
			<< "Please type the index of the contact you want displayed : ";
	// 		// wait and receive and index (n=index)
			// std::cin.clear();
	// 		// display index or manage error
			getline(std::cin, num);
			std::cin.clear();
			if (num.length() > 1 || (num[0] < '0' || num[0] > '7'))
				std::cout
				<< std::endl
				<< "Invalid Index. The index range for this Phonebook is 0 - 7."
				<< std::endl
				<< "Please introduce it as a numerical character without any spaces or extra characters."
				<< std::endl << std::endl;
			else
			{
				n = num[0] - '0';
				phoneBook.displayContactByIndex(n);
			}
		}
		// if add
		else if (cmd == "ADD")
		{
			i = (i + 1) % 8;
			std::cout << std::endl;
			phoneBook.addContact(i);
		}
		else if (cmd == "EXIT")
			phoneBookIsOpen = false;
		// else
			// do nothing

	}
	return 0;
}

