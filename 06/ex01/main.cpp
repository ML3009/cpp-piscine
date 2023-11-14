/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:17:21 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/14 17:33:26 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(){

	Data	data;
	Data	*data2;
	uintptr_t raw;

	data.i = 0;
	data.str = "salut";

	std::cout << "\n[data]\n" << std::endl;
	std::cout << data.i << std::endl
	<< data.str << std::endl;

	raw = Serializer::serialize(&data);
	data2 = Serializer::deserialize(raw);

	std::cout << "\n[data2]\n" << std::endl;
	std::cout << data2->i << std::endl
	<< data2->str << std::endl;

	return 0;
}
