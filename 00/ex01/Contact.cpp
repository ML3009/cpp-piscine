/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:31:53 by mvautrot          #+#    #+#             */
/*   Updated: 2023/09/04 16:35:54 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact (char name, int number) : n(name), nb(number) {

	std::cout << "Constructor called" <<std::endl;
	std::cout << "this->nb " << this->nb << std::endl;
	std::cout << "this->n " << this->n << std::endl;
}

Contact::~Contact( void ){

	std::cout << "Destructor called" << std::endl;
	return ;
}
