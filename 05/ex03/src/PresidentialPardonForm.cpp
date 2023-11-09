/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:13:57 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/09 16:43:59 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


/*----------------- Coplien ------------- */

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential", 25, 5){
	this->_target = "randomPresidential";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential", 25, 5){
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& rhs) : AForm(rhs){
	this->_target = rhs._target;

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs){
	if (this != &rhs)
	{
		this->_target = rhs._target;
		*this = rhs;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

std::string	PresidentialPardonForm::getTarget() const{
	return this->_target;
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const{
	if (this->getSign() == false)
		throw SignExecException();
	if (executor.getGrade() < 1)
		throw GradeTooHighException();
	if (this->getGradeExec() < executor.getGrade())
		throw GradeTooLowException();
	executePresidential();
	return;
}

void	PresidentialPardonForm::executePresidential() const{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox.\n" << std::endl;
	return;
}


