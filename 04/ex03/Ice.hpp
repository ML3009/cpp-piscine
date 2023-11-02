/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:50:44 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/02 16:35:40 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria {

	public:
		Ice();
		Ice(std::string const& type);
		Ice(const Ice& rhs);
		Ice& operator=(const Ice& rhs);
		~Ice();

		virtual Ice* clone() const;

};
