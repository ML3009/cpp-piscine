/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:33:24 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/15 11:12:54 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("unknow"), _sign(false), _gradSign(5), _gradExec(5) { }

Form::Form(const std::string _name, const int _gradSign, const int _gradExec) : _name(_name), _sign(false), _gradSign(_gradSign), _gradExec(_gradExec) {
	std::cout << *this << std::endl;
}

Form::Form(const Form& rhs) : _name(rhs._name), _sign(rhs._sign), _gradSign(rhs._gradSign), _gradExec(rhs._gradExec) {
	*this = rhs;
}

Form& Form::operator=(const Form& rhs) {
	const_cast<std::string&>(this->_name) = rhs._name;
	this->_sign = rhs._sign;
	const_cast<int&>(this->_gradSign) = rhs._gradSign;
	const_cast<int&>(this->_gradExec) = rhs._gradExec;
	return *this;
}

Form::~Form() {}

std::string	Form::getName() const {
	return this->_name;
}

bool	Form::getSign() const {
	return this->_sign;
}

int	Form::getGradeSign() const {
	return this->_gradSign;
}

int Form::getGradeExec() const {
	return this->_gradExec;
}

void	Form::beSigned(Bureaucrat member) {
		if (member.getGrade() < 1)
			throw GradeTooHighException();
		if (this->_gradSign < member.getGrade())
			throw GradeTooLowException();
		this->_sign = true;
	return ;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "the grade is too high!\n\n";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "the grade is too low!\n\n";
}

std::ostream& operator<<(std::ostream& o, const Form& rhs) {

	o << "The level's grade required to sign " << rhs.getName()
	<< " is " << rhs.getGradeSign() << " and the level's grade to execute is "
	<< rhs.getGradeExec() << ". The current status of the sign is : " << rhs.getSign() << std::endl;
	return o;
}
