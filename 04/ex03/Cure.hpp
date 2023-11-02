/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:05:21 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/02 16:35:36 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {

	public:
		Cure();
		Cure(std::string const& type);
		Cure(const Cure& rhs);
		Cure& operator=(const Cure& rhs);
		~Cure();

		virtual Cure* clone() const;

};
