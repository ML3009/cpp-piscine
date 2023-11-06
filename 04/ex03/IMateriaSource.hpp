/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:57:12 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/06 12:49:14 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class AMateria;

class IMateriaSource {

	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const& type) = 0;
};

class MateriaSource : public IMateriaSource {

	public:
		MateriaSource();
		MateriaSource(const MateriaSource& rhs);
		MateriaSource& operator=(const MateriaSource& rhs);
		~MateriaSource();

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const& type);

	protected:
		AMateria* inventory[4];

};

#endif
