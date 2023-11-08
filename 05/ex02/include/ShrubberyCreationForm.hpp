/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:35:36 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/08 13:22:23 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& rhs);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm& rhs);
		~ShrubberyCreationForm();

	private:

};

std::ostream& operator<<(std::ostream& o, const ShrubberyCreationForm& rhs);
