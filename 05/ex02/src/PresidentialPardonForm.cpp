/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:13:57 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/08 14:21:02 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


/*----------------- Coplien ------------- */

PresidentialPardonForm::PresidentialPardonForm() : AForm()  { }

PresidentialPardonForm::PresidentialPardonForm(const std::string _name, const int _gradSign, const int _gradExec) : _name("unknow"), _sign(false), _gradSign(25), _gradExec(5) { } {

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& rhs){

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs){

	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){

}


/*---------------- Operator ------------- */

std::ostream& operator<<(std::ostream& o, const PresidentialPardonForm& rhs){
	o   << std::endl;
	return o;
}


/*---------- Getter / Setter ------------ */


/*--------------- Function -------------- */


/*--------------- Exception ------------- */
