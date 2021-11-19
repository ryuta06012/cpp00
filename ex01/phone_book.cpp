/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 03:03:40 by hryuuta           #+#    #+#             */
/*   Updated: 2021/11/19 10:30:52 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() : _OldIndex(0)
{
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void	PhoneBook::ContactInput(void)
{
	std::cout << "FirstName \t:";
	std::cin >> this->_ContactArry[_OldIndex].FirstName;
	std::cout << "LastName \t:";
	std::cin >> this->_ContactArry[_OldIndex].LastName;
	std::cout << "NickName \t:";
	std::cin >> this->_ContactArry[_OldIndex].NickName;
	std::cout << "PhoneNumber \t:";
	std::cin >> this->_ContactArry[_OldIndex].PhoneNumber;
	std::cout << "DarkestScret \t:";
	std::cin >> this->_ContactArry[_OldIndex].DarkestScret;
	_OldIndex += 1;
}

void	PhoneBook::FirstDelete(void)
{
	for (int i=0; i < 7; i++)
		this->_ContactArry[i] = this->_ContactArry[i + 1];
	_OldIndex = 7;
}

void	PhoneBook::AddContactData(void)
{
	if (_OldIndex > 7)
		FirstDelete();
	ContactInput();
}

void	PhoneBook::FieldFormat(void)
{
	std::string	line(10, '-');

	std::cout << "*";
	for (int j=0; j < 4; j++)
		std::cout << line << "*";
	std::cout << std::endl;
}

void	PhoneBook::PrintTable(std::string *lst)
{
	size_t size = 10;

	FieldFormat();
	std::cout << "|";
	for (int i=0; i < 4; i++)
	{
		if (lst[i].size() > size)
		{
			lst[i].erase(10);
			lst[i].replace(9, 1, ".");
		}
		std::cout << std::setw(10) << lst[i];
		std::cout << "|";
	}
	std::cout << std::endl;
}

void	PhoneBook::PrintDetail(int index)
{
	std::string	line(30, '=');

	std::cout << line << std::endl;
	std::cout << "FirstName \t:";
	std::cout << this->_ContactArry[index].FirstName << std::endl;
	std::cout << "LastName \t:";
	std::cout << this->_ContactArry[index].LastName << std::endl;
	std::cout << "NickName \t:";
	std::cout << this->_ContactArry[index].NickName << std::endl;
	std::cout << "PhoneNumber \t:";
	std::cout << this->_ContactArry[index].PhoneNumber << std::endl;
	std::cout << "DarkestScret \t:";
	std::cout << this->_ContactArry[index].DarkestScret << std::endl;
	std::cout << line << std::endl;
}

void	PhoneBook::InfoDetail(void)
{
	std::string	str;
	int	index;

	while (1)
	{
		std::cout << "enter a index\t:";
		std::cin >> str;
		index = str[0] - '0';
		if (index < _OldIndex && (index >= 0 && index <= 7))
		{
			PrintDetail(index);
			break ;
		}
		else
			std::cout << "The value you entered is out of range." << std::endl;
	}
}

void	PhoneBook::SearchData(void)
{
	std::string header[4] = {"INDEX", "FIRSTNAME", "LASTNAME", "NICKNAME"};
	PrintTable(header);
	int i;
	for (i=0; i < _OldIndex; i++)
	{
		std::string lst[4] = {
			std::to_string(i),
			_ContactArry[i].FirstName,
			_ContactArry[i].LastName,
			_ContactArry[i].NickName
		};
		PrintTable(lst);
	}
	FieldFormat();
	if (i < 1)
	{
		std::cout << "No Contact" << std::endl;
		return ;
	}
	InfoDetail();
}