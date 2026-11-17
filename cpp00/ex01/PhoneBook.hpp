# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact _contacts[8];

public:
	// PhoneBook(/* args */);
	// ~PhoneBook();
	void	addContact(int i);
	void	displayContacts(int i);
	void	displayContactByIndex(int n);
};

# endif					
