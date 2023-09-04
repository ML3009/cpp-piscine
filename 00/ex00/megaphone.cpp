/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:55:25 by mvautrot          #+#    #+#             */
/*   Updated: 2023/09/01 16:31:02 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // directive de preprocesseur-> inclut bibli iostream
#include <string>
//using namespace std = permet d indiquer quel lot de fonctionnalite notre fichier source va aller piocher
// std correspond a la bibiliotheque standard livree par defaut avec le cpp et dont iostream fait partie

int main(void)
{
	int				ageUtilisateur(16);
	int				nombreAmis(432);
	std::string 	nomUtilisateur("Albert");
	int&			maVariable(ageUtilisateur);
	
	std::cout << "Bonjour," << std::endl;
	std::cout << "Votre avez " << ageUtilisateur << std::endl;
	std::cout << "Vous avez egalement " << maVariable << " ans." << std::endl;
	std::cout << "Vous avez " << nombreAmis << " amis et votre nom est " << nomUtilisateur << std::endl;
	return 0;
}
