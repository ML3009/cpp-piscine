/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:00:33 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/07 19:28:25 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {
	std::cout << "\033[34m" << "\n[test: grade ok]\n" << "\033[0m" << std::endl;
	Bureaucrat gus("Gus", 1);
	std::cout << gus << std::endl;
	Bureaucrat bob("Bob", 150);
	std::cout << bob << std::endl;
	Bureaucrat lou("Lou", 100);
	std::cout << lou << std::endl;

	std::cout <<  "\033[34m" <<  "\n[test:grade ko]\n" << "\033[0m" << std::endl;
	Bureaucrat wil("Wil", 0);
	std::cout << wil << std::endl;

	std::cout <<  "\033[34m" << "\n[test: decrease grade]\n" << "\033[0m" << std::endl;
	lou.downGrade();
	std::cout << "\033[32m" <<  lou << "\033[0m" << std::endl;
	bob.downGrade();
	std::cout << "\033[31m" << bob << "\033[0m" << std::endl;

	std::cout <<  "\033[34m" << "\n[test: increase grade]\n" << "\033[0m" << std::endl;
	lou.upGrade();
	std::cout << "\033[32m" << lou << "\033[0m" << std::endl;
	gus.upGrade();
	std::cout << "\033[31m" << gus << "\033[0m" << std::endl;

	return 0;
}
