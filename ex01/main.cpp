/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 03:03:22 by hryuuta           #+#    #+#             */
/*   Updated: 2021/11/19 10:30:02 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
 
int main(){
	PhoneBook info;
	std::string str;

	while (1)
	{
		std::cout << "Command >";
		std::cin >> str;
		if (std::cin.eof())
			return (0);
		if (str == "ADD")
		{
			info.AddContactData();
		}
		else if (str == "SEARCH")
			info.SearchData();
		else if (str == "EXIT")
		{
			std::cout << "Close PhoneBook" << std::endl;
			std::exit(0);
		}
	}
    return 0;
}