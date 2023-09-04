/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:50:04 by mvautrot          #+#    #+#             */
/*   Updated: 2023/09/04 16:38:24 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int main(void)
{
	PhoneBook instance;

	instance.nb = 42;
	std::cout << "instance.nb " << instance.nb << std::endl;

	instance.user();

	return 0;
}
