/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:00:33 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/15 11:01:46 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {

	std::cout << "\n[Bureaucrat's creation]\n" << std::endl;
	Bureaucrat Bob("Bob", 60);
	Bureaucrat Jim("Jim", 3);
	Bureaucrat Kim("Kim", 1);

	std::cout << "\n[Form's creation]\n" << std::endl;
	Form file("Tax", 50, 50);
	Form file2("Tax2", 70, 20);

	std::cout << "\n[Sign]\n" << std::endl;

	std::cout << "\n[1]\n" << std::endl;
	std::cout << file << std::endl;
	Bob.signForm(file);
	Jim.signForm(file);
	Kim.signForm(file);
	std::cout << file << std::endl;

	std::cout << "\n[2]\n" << std::endl;
	std::cout << file2 << std::endl;
	Bob.signForm(file2);
	Jim.signForm(file2);
	Kim.signForm(file2);
	std::cout << file2 << std::endl;

	return 0;
}
