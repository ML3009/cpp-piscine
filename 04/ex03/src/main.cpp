/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:12:53 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/06 14:23:18 by mvautrot         ###   ########.fr       */
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

	std::cout << "\n[New Character]\n" << std::endl;
	ICharacter* bob = new Character("Bob");

	std::cout << "\n [Equip Character]\n" << std::endl;
	tmp = src->createMateria("ice");
	bob->equip(tmp);

	std::cout << "\n[" << gus->getName() << " use Materia on " << bob->getName() << "]\n" << std::endl;
	gus->use(0, *bob);
	gus->use(1, *bob);
	gus->use(3, *bob);

	std::cout << "\n[Unequip Character]\n" << std::endl;
	AMateria* tmp1 = gus->saveEquip(0);
	gus->unequip(0);
	AMateria* tmp2 = bob->saveEquip(0);
	bob->unequip(0);
	AMateria* tmp3 = bob->saveEquip(3);
	bob->unequip(3);

	std::cout << "\n[Destruction]\n" << std::endl;
	std ::cout << "Character :\n" << std::endl;
	delete bob;
	delete gus;
	std ::cout << "\nMateria :\n" << std::endl;
	delete tmp1;
	delete tmp2;
	delete src;
	delete tmp3;
	return 0;
}
