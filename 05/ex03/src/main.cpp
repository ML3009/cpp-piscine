/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:00:33 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/15 11:12:03 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(){

	std::cout << "\n[creation of office workers]\n" << std::endl;
	Bureaucrat Bob ("Bob", 50);
	Bureaucrat Jim ("Jim", 90);
	Bureaucrat Kim ("Kim", 2);
	Intern randomIntern;

	std::cout << "\n[creation of forms by an intern]\n" << std::endl;
	AForm* rrf;
	AForm* prf;
	AForm* srf;
	AForm *test;
	rrf = randomIntern.makeForm("robotomy request", "RRF");
	prf = randomIntern.makeForm("presidential pardon", "PRF");
	srf = randomIntern.makeForm("shrubbery creation", "SRF");
	std::cout << "\n[test ko]\n" << std::endl;
	test = randomIntern.makeForm("test", "tttt");



	std::cout << "\n[signing and execution of forms by a bureaucrat]\n" << std::endl;
	std::cout << "\n[Bob]\n" << std::endl;
	Bob.signForm(*rrf);
	Bob.executeForm(*rrf);
	Bob.signForm(*prf);
	Bob.executeForm(*prf);
	Bob.signForm(*srf);
	Bob.executeForm(*srf);

	std::cout << "\n[Jim]\n" << std::endl;
	Jim.signForm(*rrf);
	Jim.executeForm(*rrf);
	Jim.signForm(*prf);
	Jim.executeForm(*prf);
	Jim.signForm(*srf);
	Jim.executeForm(*srf);

	std::cout << "\n[Kim]\n" << std::endl;
	Kim.signForm(*rrf);
	Kim.executeForm(*rrf);
	Kim.signForm(*prf);
	Kim.executeForm(*prf);
	Kim.signForm(*srf);
	Kim.executeForm(*srf);

	delete rrf;
	delete prf;
	delete srf;
	delete test;
	return 0;
}
