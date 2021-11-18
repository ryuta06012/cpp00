/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 03:18:12 by hryuuta           #+#    #+#             */
/*   Updated: 2021/11/18 04:47:36 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	upper_case(char *str)
{
	std::string string(str);
	size_t	len;
	size_t	i;

	len = string.length();
	i = 0;
	while (i < len)
	{
		std::cout << (char)(std::toupper(str[i]));
		i++;
	}
	//std::cout << toupper(str);
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	i = 1;
	while (i < argc)
	{
		upper_case(argv[i]);
		i++;
	}
	std::cout << std::endl;
	return (0);
}