/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:16:13 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/03 17:25:14 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class AMateria;

class ICharacter {

	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
		virtual AMateria* saveEquip(int idx) = 0;
};

class Character : public ICharacter {

	public:
		Character();
		Character(std::string name);
		Character(const Character& rhs);
		Character& operator=(const Character& rhs);
		~Character();

		std::string const& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		AMateria* saveEquip(int idx);

	protected:
		std::string name;
		AMateria* stock[4];

};


#endif
