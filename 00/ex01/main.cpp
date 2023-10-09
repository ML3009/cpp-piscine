/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:50:04 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/02 11:21:31 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook user;
	std::string cmd;

	std::cout << "Welcome to the Awesome PhoneBook !" << std::endl << "> ";
	while (getline(std::cin, cmd))
	{
		if (std::cin.eof() == true)
			return 0;
		if (cmd == "ADD")
			user.addUser(), std::cout << "> ";
		else if (cmd == "SEARCH")
			user.searchUser(), std::cout << "> ";
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "enter ADD, SEARCH or EXIT" << std::endl << "> ";
	}
	return 0;
}

