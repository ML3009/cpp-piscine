/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:39:30 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/09 16:44:23 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*----------------- Coplien ------------- */

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", 72, 45){
	this->_target = "randomRobotomy";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm ("Robotomy", 72, 45){
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rhs) : AForm(rhs){
	this->_target = rhs._target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs){
	if (this != &rhs)
	{
		this->_target = rhs._target;
		*this = rhs;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

std::string	RobotomyRequestForm::getTarget() const{
	return this->_target;
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const{
	if (this->getSign() == false)
		throw SignExecException();
	if (executor.getGrade() < 1)
		throw GradeTooHighException();
	if (this->getGradeExec() < executor.getGrade())
		throw GradeTooLowException();
	executeRobotomy();
	return;
}

void	RobotomyRequestForm::executeRobotomy() const{
	std::cout << "[drilling noises]\n" << std::endl;
	std::srand(std::time(0));
	int random = std::rand() % 10;
	if (random > 4)
		std::cout << this->_target << " has been robotomized successfully 50%/ of the time.\n" << std::endl;
	else
		std::cout << "The robotomy failed.\n" << std::endl;
	return;
}



