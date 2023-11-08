/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:39:14 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/08 13:24:52 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*----------------- Coplien ------------- */

ShrubberyCreationForm::ShrubberyCreationForm(){

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rhs){

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs){

	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){

}


/*---------------- Operator ------------- */

std::ostream& operator<<(std::ostream& o, const ShrubberyCreationForm& rhs){
	o   << std::endl;
	return o;
}


/*---------- Getter / Setter ------------ */


/*--------------- Function -------------- */


/*--------------- Exception ------------- */

