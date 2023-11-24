/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:33:59 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/24 09:36:07 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(){
	std::cout << "\e[4;32m" << "[TEST 1: main 42]" << "\e[0m" << std::endl;
	Span sp = Span(5);
	try {
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	sp.addNumber(6);
	try {
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	sp.addNumber(3);
	try {
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try {
		sp.addNumber(12);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	print(sp.getRange());
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "\e[4;32m" << "[TEST 2: Span(20 000)]" << "\e[0m" << std::endl;
	Span test(20000);
	try {
		std::cout << test.shortestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	test.addNumber(17);
	test.addNumber(9);
	test.addNumber(11);
	test.AddMultiNumber();
	std::cout << "[Container of " <<test.getRange().size() << " integers]" << std::endl;
	//print(test.getRange());
	try {
	   test.addNumber(11);
	   test.AddMultiNumber();
	} catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << test.shortestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
