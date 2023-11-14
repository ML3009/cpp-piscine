/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:17:26 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/14 17:17:34 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){}

Serializer::Serializer(const Serializer& rhs){
	*this = rhs;
}

Serializer& Serializer::operator=(const Serializer& rhs){
	if(this != &rhs){
		*this = rhs;
	}
	return *this;
}

Serializer::~Serializer(){}

Data t = {} ;

uintptr_t Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw){
	return reinterpret_cast<Data*>(raw);
}
