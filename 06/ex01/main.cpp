/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:17:21 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/16 11:50:49 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(){

	Data	data;
	Data	*data2;
	uintptr_t raw;

	data.i = 3;
	data.str = "salut";

	std::cout << "\n[data]" << std::endl;
	std::cout << "adress: " << &data << std::endl;
	std::cout << "int i: " << data.i << std::endl
	<< "string str: " << data.str << std::endl;

	raw = Serializer::serialize(&data);
	data2 = Serializer::deserialize(raw);

	std::cout << "\n[data2]" << std::endl;
	std::cout << "adress: " << &data2 << std::endl;
	std::cout << "int i: " << data2->i << std::endl
	<< "string str: " << data2->str << std::endl << std::endl;
	return 0;
}
