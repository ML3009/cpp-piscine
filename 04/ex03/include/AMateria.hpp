/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:18:57 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/06 13:26:39 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CPP
# define AMATERIA_CPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

class ICharacter;

class AMateria {

	public:
		AMateria();
		AMateria(std::string const& type);
		AMateria(const AMateria& rhs);
		AMateria& operator=(const AMateria& rhs);
		virtual ~AMateria();

		std::string const& getType()const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string type;

};

class Cure : public AMateria {

	public:
		Cure();
		Cure(std::string const& type);
		Cure(const Cure& rhs);
		Cure& operator=(const Cure& rhs);
		~Cure();

		virtual Cure* clone() const;

};

class Ice : public AMateria {

	public:
		Ice();
		Ice(std::string const& type);
		Ice(const Ice& rhs);
		Ice& operator=(const Ice& rhs);
		~Ice();

		virtual Ice* clone() const;

};

#endif
