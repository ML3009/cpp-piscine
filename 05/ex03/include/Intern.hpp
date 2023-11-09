/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:51:32 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/09 17:23:16 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


enum {
    PRESIDENT,
    ROBOT,
    SHRUBB,
};

class Intern {

	public:
		Intern();
		Intern(const Intern& rhs);
		Intern& operator=(const Intern& rhs);
		~Intern();
		class InternException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

	AForm* makeForm(std::string form, std::string target);
	int getForm(std::string form);

	PresidentialPardonForm*	createPresidential(std::string target);
	RobotomyRequestForm*	createRobot(std::string target);
	ShrubberyCreationForm*	createShrubb(std::string target);
};

