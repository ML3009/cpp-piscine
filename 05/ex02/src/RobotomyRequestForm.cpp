/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:39:30 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/08 13:27:21 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*----------------- Coplien ------------- */

RobotomyRequestForm::RobotomyRequestForm(){

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rhs){

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs){

	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){

}


/*---------------- Operator ------------- */

std::ostream& operator<<(std::ostream& o, const RobotomyRequestForm& rhs){
	o   << std::endl;
	return o;
}


/*---------- Getter / Setter ------------ */


/*--------------- Function -------------- */


/*--------------- Exception ------------- */

