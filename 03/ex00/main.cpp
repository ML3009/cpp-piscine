/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:43:19 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/03 10:48:00 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {

	std::cout << "\n [creation] \n" << std::endl;

	ClapTrap H("ClapTrap");
	std::string target = "Gustave";

	std::cout << "\n [test] \n" << std::endl;

	H.attack(target);
	H.takeDamage(5);
	H.beRepaired(2);
	H.takeDamage(9);
	H.attack(target);
	H.beRepaired(2);

	std::cout << "\n [destruction] \n" << std::endl;

	return 0;
}
