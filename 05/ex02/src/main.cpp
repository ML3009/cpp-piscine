/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:00:33 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/09 16:45:49 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(){

	std::cout << "\033[34m" << "\n[Form's creation]\n" << "\033[0m" << std::endl;
	PresidentialPardonForm	President("Klaus");
	RobotomyRequestForm	Robot("Rebekha");
	ShrubberyCreationForm	Shrubb("Elijah");

	std::cout << "\033[34m" << "\n[Bureaucrat's creation]\n" << "\033[0m" << std::endl;
	Bureaucrat Bob("Bob", 50);
	Bureaucrat Kim("Kim", 30);
	Bureaucrat Jim("Jim", 2);

	std::cout << "\033[34m" << "\n[Test 1]\n" << "\033[0m" << std::endl;
	Kim.signForm(President);
	Kim.signForm(Robot);
	Kim.signForm(Shrubb);
	Kim.executeForm(President);
	Kim.executeForm(Robot);
	Kim.executeForm(Shrubb);

	std::cout << "\033[34m" << "\n[Test 2]\n" << "\033[0m" << std::endl;
	Jim.signForm(President);
	Jim.signForm(Robot);
	Jim.signForm(Shrubb);
	Jim.executeForm(President);
	Jim.executeForm(Robot);
	Jim.executeForm(Shrubb);

	std::cout << "\033[34m" << "\n[Test 3]\n" << "\033[0m" << std::endl;
	Bob.signForm(President);
	Bob.signForm(Robot);
	Bob.signForm(Shrubb);
	Bob.executeForm(President);
	Bob.executeForm(Robot);
	Bob.executeForm(Shrubb);

	return 0;
}
