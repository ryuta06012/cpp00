/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 03:03:40 by hryuuta           #+#    #+#             */
/*   Updated: 2021/11/19 05:12:38 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() : _OldIndex(1)
{
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void	PhoneBook::ContactInput(void)
{
	std::cout << "FirstName \t";
	std::cin >> this->_contact_arry[_OldIndex].FirstName;
	std::cout << "LastName \t";
	std::cin >> this->_contact_arry[_OldIndex].LastName;
	std::cout << "NickName \t";
	std::cin >> this->_contact_arry[_OldIndex].NickName;
	std::cout << "PhoneNumber \t";
	std::cin >> this->_contact_arry[_OldIndex].PhoneNumber;
	std::cout << "DarkestScret \t";
	std::cin >> this->_contact_arry[_OldIndex].DarkestScret;
	//std::cout << std::endl;
}

void	PhoneBook::AddContactData(void)
{
	ContactInput();
	std::cout << this->_contact_arry[0].FirstName << std::endl;
	
}