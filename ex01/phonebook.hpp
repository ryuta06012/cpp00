#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "contact.hpp"

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();
	void	AddContactData(void);
	void	ContactInput(void);
	void	FirstDelete(void);
	void	SearchData(void);
	void	IndexInfo(void);
	void	FieldFormat(void);
	void	PrintTable(std::string *lst);
	void	InfoDetail(void);
	void	PrintDetail(int index);
private:
	Contact	_ContactArry[8];
	int _OldIndex;
};

#endif
