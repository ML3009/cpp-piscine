/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:43:19 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/19 16:43:20 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {

	ClapTrap H("ClapTrap");
	std::string target = "Gustave";

	H.attack(target);
	H.takeDamage(3);
	H.beRepaired(1);
	H.takeDamage(4);
	H.beRepaired(3);
	H.takeDamage(4);
	H.takeDamage(2);
	H.beRepaired(1);
	H.takeDamage(2);
	H.takeDamage(2);
	H.attack(target);


	return 0;
}
