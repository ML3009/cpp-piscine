/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:00:33 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/08 12:10:03 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {

	std::cout << "\n[Bureaucrat's creation]\n" << std::endl;
	Bureaucrat Bob("Bob", 60);
	Bureaucrat Jim("Jim", 0);
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

	std::cout << "\n[2]\n" << std::endl;
	std::cout << file2 << std::endl;
	Bob.signForm(file2);
	Jim.signForm(file);
	Kim.signForm(file2);


	return 0;
}
