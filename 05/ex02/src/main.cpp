/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:00:33 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/09 16:22:16 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(){

	PresidentialPardonForm	President("Klaus");
	RobotomyRequestForm	Robot("Rebekha");
	ShrubberyCreationForm	Shrubb("Elijah");
	Bureaucrat Bob("Bob", 50);

	Bob.executeForm(President);
	Bob.executeForm(Robot);
	Bob.executeForm(Shrubb);

	return 0;
}
