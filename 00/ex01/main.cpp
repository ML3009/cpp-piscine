/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:50:04 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/12 13:16:20 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook user;
	std::string cmd;

	std::cout << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Welcome to the Awesome PhoneBook !" << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl << "[ADD, SEARCH or EXIT] > ";
	while (getline(std::cin, cmd))
	{
		if (cmd == "ADD")
			user.addUser(), std::cout << "[ADD, SEARCH or EXIT] > ";
		else if (cmd == "SEARCH")
			user.searchUser(), std::cout << "[ADD, SEARCH or EXIT] > ";
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl << "[ADD, SEARCH or EXIT] > ";
	}
	std::cout << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Exiting the Awesome PhoneBook." <<std::endl;
	std::cout << "----------------------------------" << std::endl;
	return 0;
}

