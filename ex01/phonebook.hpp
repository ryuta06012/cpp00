#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip>
#include "contact.hpp"

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();
	void	AddContactData();
	void	ContactInput();
private:
	Contact	_contact_arry[9];
	int _OldIndex;

};

#endif
