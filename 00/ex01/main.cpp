/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:50:04 by mvautrot          #+#    #+#             */
/*   Updated: 2023/09/05 12:12:55 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

int main(void)
{
	std::string cmd;
	Contact	user;
	PhoneBook repo;

	std::cout << "Welcome to the Awesome PhoneBook !" <<std::endl;
	while (1)
	{
		getline(std::cin, cmd);
		if (cmd == "ADD")
			user.setaddUser();
		else if (cmd == "SEARCH")
			user.getaddUser();
		else if (cmd == "EXIT")
			break;
	}
	return 0;
}
