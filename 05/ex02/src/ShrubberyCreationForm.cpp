/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:39:14 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/09 16:25:58 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*----------------- Coplien ------------- */

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137){
	this->_target = "randomShrubbery";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm ("Shrubbery", 145, 137){
	this->_target = target;
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rhs) : AForm(rhs){
	this->_target = rhs._target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs){
	if (this != &rhs)
	{
		this->_target = rhs._target;
		*this = rhs;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

std::string	ShrubberyCreationForm::getTarget() const{
	return this->_target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const{
	if (this->getSign() == false)
		throw SignExecException();
	if (executor.getGrade() < 1)
		throw GradeTooHighException();
	if (this->getGradeExec() < executor.getGrade())
		throw GradeTooLowException();
	executeShrubbery();
	return;
}

void	ShrubberyCreationForm::executeShrubbery() const{

	std::string	target;
	target.append(this->_target + "_shrubbery");

	std::ofstream	file(target.c_str());
	if (!file.is_open())
		throw FileError();
	file << "ASCII trees" << std::endl; // create tree
	file.close();
	return;
}

