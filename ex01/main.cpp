/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 03:03:22 by hryuuta           #+#    #+#             */
/*   Updated: 2021/11/19 03:52:58 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
 
int main(){
	PhoneBook info;
	std::string str;

	while (1)
	{
		//std::cout << "b" << std::endl;
		std::cout << "Command >";
		//std::cout << "a" << std::endl;
		std::cin >> str;
		//std::getline(std::cin,str);
		if (std::cin.eof())
			return (0);
		if (str == "ADD")
		{
			info.AddContactData();
			//std::cout << "a" << std::endl;
		}
		else if (str == "SEARCH")
			printf("SERACH\n");
		else if (str == "EXIT")
			printf("EXIT\n");
	}
    return 0;
}