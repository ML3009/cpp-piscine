/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:00:37 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/07 17:07:09 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("random"), _grade(0) {
	std::cout << "Bureaucrat's default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : _name(_name), _grade(_grade) {

	//make a try-catch

	std::cout << "Bureaucrat's constructor" << std::endl;

}

Bureaucrat::Bureaucrat(const Bureaucrat& rhs) : _name(rhs.getName()), _grade(rhs.getGrade()) {
	*this = rhs;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
	this->_grade = rhs._grade;
	const_cast<std::string&>(this->_name) = rhs._name;
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat's destructor" << std::endl;
}

std::string Bureaucrat::getName() const {
	return this->_name;
}

int	Bureaucrat::getGrade() const {
	return this->_grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low!";
}






