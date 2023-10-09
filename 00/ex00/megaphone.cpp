/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:55:25 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/09 10:33:58 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // directive de preprocesseur-> inclut bibli iostream
#include <string>

//using namespace std = permet d indiquer quel lot de fonctionnalite notre fichier source va aller piocher
// std correspond a la bibiliotheque standard livree par defaut avec le cpp et dont iostream fait partie

int main(int ac, char **av)
{
	int i(1), j(0);

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for(i = 1; av[i]; i++)
		{
		{
			for(j = 0; av[i][j]; j++)
				std::cout << (char)toupper(av[i][j]);
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}

/*
exemple :


int a(0), b(0), c(0);

	c = a + b;
	std::cout << a << " + " << b << " = " << c << std::endl;
	std::cout << "valeur de a : ";
	std::cin >> a ;
	std::cout << "valeur de b : ";
	std::cin >> b ;
	c = a + b;
	std::cout << a << " + " << b << " = " << c << std::endl;
	return 0;

int				ageUtilisateur(0);

	std::cout << "Bonjour, quel age avez-vous ?" << std::endl;
	std::cin >> ageUtilisateur;
	std::cin.ignore();
	std::cout << "Quel est votre prenom ?" << std::endl;
	std::string 	nomUtilisateur("sans nom");
	getline(std::cin, nomUtilisateur);
	std::cout << "Vous avez " << ageUtilisateur << " ans " \
		<< nomUtilisateur << " ! " << std::endl;
*/
