/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:50:04 by mvautrot          #+#    #+#             */
/*   Updated: 2023/09/05 11:54:31 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

int main(int ac, char **av)
{
	(void)av;
	std::string cmd;

	if (ac >= 2)
	{
		std::cout << "too many arguments" << std::endl;
		return 0;
	}
	std::cout << "Welcome to the Awesome PhoneBook !" <<std::endl;
	while (1)
	{
		getline(std::cin, cmd);
		if (cmd == "ADD")
			std::cout << "ok" << std::endl;
		else if (cmd == "SEARCH")
			std::cout << "tjrs ok" << std::endl;
		else if (cmd == "EXIT")
			break;

	}


	/*PhoneBook instance('a', 42);
	Contact	instance1;




	instance.user();
	instance1.getfirstName();
	instance1.setfirstName("abc");
	instance1.setfirstName("test");*/

	return 0;
}
