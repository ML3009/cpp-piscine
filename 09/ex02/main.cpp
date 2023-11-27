/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:33:15 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/27 13:04:32 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av){
	(void)av;
	if (ac < 2)
		return std::cerr << "Error: bad arguments" << std::endl
		<< "Usage: ./RPN <positive integer sequence>" << std::endl, -1;
	try {
		PmergeMe obj;
		obj.isValidSeq(av);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}



	return 0;
}
