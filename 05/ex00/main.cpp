/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:00:33 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/15 12:14:54 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {

	std::cout << "\033[34m" << "\n[test 1 : too high]\n" << "\033[0m" << std::endl;
	//try {
	Bureaucrat gus("Gus", 0);
	std::cout << gus << std::endl;
	//} catch (const Bureaucrat::GradeTooHighException& e) {
	//	std::cerr << e.what() << std::endl;
	//} catch (const Bureaucrat::GradeTooLowException& e) {
	//	std::cerr << e.what() << std::endl;
}

	std::cout << "\033[34m" << "\n[test 2 : too low]\n" << "\033[0m" << std::endl;
	try {
		Bureaucrat bob("Bob", 151);
		std::cout << bob << std::endl;
		bob.downGrade();
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout <<  "\033[34m" <<  "\n[test 3 : grade ok]\n" << "\033[0m" << std::endl;
	try {
		Bureaucrat lou("Lou", 120);
		std::cout << lou << std::endl;
		std::cout <<  "\033[34m" << "\n[test 3.1: decrease grade]\n" << "\033[0m" << std::endl;
		lou.downGrade();
		std::cout <<  lou << std::endl;
		std::cout <<  "\033[34m" << "\n[test 3.2: increase grade]\n" << "\033[0m" << std::endl;
		lou.upGrade();
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << e.what() << std::endl;
	}


	std::cout <<  "\033[34m" <<  "\n[test 4 : grade ok | ]\n" << "\033[0m" << std::endl;
	try {
		Bureaucrat lou("Lou", 150);
		std::cout << lou << std::endl;
		std::cout <<  "\033[34m" << "\n[test 4.1: decrease grade]\n" << "\033[0m" << std::endl;
		lou.downGrade();
		std::cout <<  lou << std::endl;
		std::cout <<  "\033[34m" << "\n[test 4.2: increase grade]\n" << "\033[0m" << std::endl;
		lou.upGrade();
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout <<  "\033[34m" <<  "\n[test 5 : grade ok]\n" << "\033[0m" << std::endl;
	try {
		Bureaucrat lou("Lou", 1);
		std::cout <<  lou << std::endl;
		std::cout <<  "\033[34m" << "\n[test 5.1: increase grade]\n" << "\033[0m" << std::endl;
		lou.upGrade();
		std::cout << lou << std::endl;
		std::cout <<  "\033[34m" << "\n[test 5.2: decrease grade]\n" << "\033[0m" << std::endl;
		lou.downGrade();
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
