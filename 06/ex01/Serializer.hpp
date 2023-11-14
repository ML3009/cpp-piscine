/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:17:30 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/14 17:32:20 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdint.h>

struct Data {
	int	i;
	std::string	str;
};

class Serializer {

	public:
		Serializer();
		Serializer(const Serializer& rhs);
		Serializer& operator=(const Serializer& rhs);
		~Serializer();

		static uintptr_t	serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

};


