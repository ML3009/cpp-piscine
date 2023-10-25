/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:43:12 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/23 12:37:14 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

	public:
		ClapTrap(void);
		ClapTrap(std::string n ame);
		ClapTrap(const ClapTrap &rhs);
		ClapTrap& operator=(const ClapTrap& rhs);
		~ClapTrap(void);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
		std::string _Name;
		unsigned int	_hitPoints;
		unsigned int _energyPoints;
		unsigned int	_attackDamage;

};

#endif
