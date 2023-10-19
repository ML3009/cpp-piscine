/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:43:12 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/19 17:00:54 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

	public:
		ClapTrap(void);
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap &rhs);
		ClapTrap& operator=(const ClapTrap& rhs);
		~ClapTrap(void);
		

	private:
		std::string _Name;
		int	_hitPoints;
		int _energyPoints;
		int	_attackDamage;

}



#endif
