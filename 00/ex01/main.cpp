/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:50:04 by mvautrot          #+#    #+#             */
/*   Updated: 2023/09/05 16:24:19 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook user;
	Contact	info;
	std::string cmd;


	std::cout << "Welcome to the Awesome PhoneBook !" <<std::endl << "> ";
	while (1)
	{
		getline(std::cin, cmd);
		if (cmd == "ADD")
			user.setaddUser(), std::cout << "> ";
		else if (cmd == "SEARCH")
			user.setSearchUser(), std::cout << "> ";
		else if (cmd == "EXIT")
			break;
		else if (cmd == "TEST")
			std::cout << "ah" << std::endl;
		else
			std::cout << "enter ADD, SEARCH or EXIT" << std::endl << "> ";
	}
	return 0;
}

