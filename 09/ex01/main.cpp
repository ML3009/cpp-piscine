/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:58:22 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/27 11:31:53 by mvautrot         ###   ########.fr       */
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
/*
int	main(){
    std::cout << "-- PERSONNAL TEST --" << std::endl;


    try{
		RPN obj;
        obj.isValidExpr(const_cast<char *>("+ 1"));
    }
    catch (std::exception &e){std::cout << e.what() << std::endl;}
    std::cout << std::endl;

    try{
        RPN obj;
        obj.isValidExpr(const_cast<char *>("1 1"));
	}
    catch (std::exception &e){std::cout << e.what() << std::endl;}
    std::cout << std::endl;

    try{
        RPN obj;
        obj.isValidExpr(const_cast<char *>("+"));
	}
    catch (std::exception &e){std::cout << e.what() << std::endl;}
    std::cout << std::endl;

    try{
        RPN obj;
        obj.isValidExpr(const_cast<char *>("11 12 +"));
	}
    catch (std::exception &e){std::cout << e.what() << std::endl;}
    std::cout << std::endl;

    return 0;
}*/
