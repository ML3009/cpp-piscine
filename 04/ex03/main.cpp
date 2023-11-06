/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:12:53 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/06 12:57:43 by mvautrot         ###   ########.fr       */
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
	ICharacter* me = new Character("me");

	std::cout << "\n [Equip Character]\n" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);

	std::cout << "\n[Copy Character]\n" << std::endl;
	ICharacter* toome (me);

	std::cout << "\n[use Materia]\n" << std::endl;
	toome->use(0, *me);
	toome->use(1, *me);

	std::cout << "\n[New Character]\n" << std::endl;
	ICharacter* bob = new Character("bob");

	std::cout << "\n[use Materia]\n" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "\n[unequip Materia]\n" << std::endl;
	AMateria* tmp1 = me->saveEquip(0);
	me->unequip(0);

	std::cout << "\n[Destruction]\n" << std::endl;

	std ::cout << "\nCharacter :\n" << std::endl;
	delete bob;
	delete me;
	//delete test;
	//delete test2;

	std ::cout << "\nMateria :\n" << std::endl;
	delete tmp1;
	delete src;
	return 0;
}
