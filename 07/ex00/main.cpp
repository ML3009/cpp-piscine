/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:09:56 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/23 10:33:59 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) {

	std::cout << "\e[4;32m" << "[TEST 1: int]" << "\e[0m" << std::endl;
	int a = 2;
	int b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "\e[0;94m" << "swap function" << "\e[0m" << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "\e[0;94m" << "min function" << "\e[0m" << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "\e[0;94m" << "max function" << "\e[0m" << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;

	std::cout << "\e[4;32m" << "[TEST 2: string]" << "\e[0m" << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "\e[0;94m" << "swap function" << "\e[0m" << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "\e[0;94m" << "min function" << "\e[0m" << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "\e[0;94m" << "max function" << "\e[0m" << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl << std::endl;

	std::cout << "\e[4;32m" << "[TEST 3: double]" << "\e[0m" << std::endl;
	double e = 4.3;
	double f = 4.5;
	std::cout << "\e[0;94m" << "swap function" << "\e[0m" << std::endl;
	::swap(c, d);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "\e[0;94m" << "min function" << "\e[0m" << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "\e[0;94m" << "max function" << "\e[0m" << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl << std::endl;

	std::cout << "\e[4;32m" << "[TEST 4: char]" << "\e[0m" << std::endl;
	char g = 'a';
	char h = 'b';
	std::cout << "\e[0;94m" << "swap function" << "\e[0m" << std::endl;
	::swap(g, h);
	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "\e[0;94m" << "min function" << "\e[0m" << std::endl;
	std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
	std::cout << "\e[0;94m" << "max function" << "\e[0m" << std::endl;
	std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl << std::endl;

	std::cout << "\e[4;32m" << "[TEST 5: float]" << "\e[0m" << std::endl;
	float i = 4.3f;
	float j = 4.5f;
	std::cout << "\e[0;94m" << "swap function" << "\e[0m" << std::endl;
	::swap(c, d);
	std::cout << "i = " << i << ", j = " << j << std::endl;
	std::cout << "\e[0;94m" << "min function" << "\e[0m" << std::endl;
	std::cout << "min( i, j ) = " << ::min( i, j ) << std::endl;
	std::cout << "\e[0;94m" << "max function" << "\e[0m" << std::endl;
	std::cout << "max( i, j ) = " << ::max( i, j ) << std::endl << std::endl;
	return 0;
}
