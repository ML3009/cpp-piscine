/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:12:53 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/06 13:17:03 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"

int main()
{
	std::cout << "\n[New Materia Source]\n" << std::endl;
	IMateriaSource* src = new MateriaSource();

	std::cout << "\n[Learn Materia]\n" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());


	std::cout << "\n[New Character]\n" << std::endl;
	ICharacter* gus = new Character("Gustave");

	std::cout << "\n [Equip Character]\n" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("cure");
	gus->equip(tmp);
	tmp = src->createMateria("ice");
	gus->equip(tmp);

	std::cout << "\n[Copy Character]\n" << std::endl;
	ICharacter* cogus (gus);

	std::cout << "\n[" << cogus->getName() << " use Materia on " << gus->getName() << "]\n" << std::endl;
	cogus->use(0, *gus);
	cogus->use(1, *gus);

	std::cout << "\n[New Character]\n" << std::endl;
	ICharacter* bob = new Character("Bob");

	std::cout << "\n[" << gus->getName() << " use Materia on " << bob->getName() << "]\n" << std::endl;
	gus->use(0, *bob);
	gus->use(1, *bob);

	std::cout << "\n[unequip Materia]\n" << std::endl;
	AMateria* tmp1 = gus->saveEquip(0);
	gus->unequip(0);

	std::cout << "\n[Destruction]\n" << std::endl;
	std ::cout << "Character :\n" << std::endl;
	delete bob;
	delete gus;
	std ::cout << "\nMateria :\n" << std::endl;
	delete tmp1;
	delete src;
	return 0;
}
