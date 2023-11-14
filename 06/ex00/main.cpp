/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:32:46 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/14 11:31:23 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av) {

	if (ac != 2) {
		std::cout << "Error: wrong number of arguments." << std::endl;
		return -1;
	}
	else
		ScalarConverter::convert(av[1]);
	return 0;
}
