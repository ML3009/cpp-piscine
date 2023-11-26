/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:58:22 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/24 14:04:07 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av){

	if (ac != 2) 
		return std::cerr << "Error: bad arguments" << std::endl
		<< "Usage: ./RPN <inverted Polish mathematical expression>" << std::endl, -1;
	try {
		RPN obj;
		obj.isValidExpr(av[1]);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
