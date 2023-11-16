/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:33:24 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/08 12:13:19 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("unknow"), _sign(false), _gradSign(5), _gradExec(5) { }

AForm::AForm(const std::string _name, const int _gradSign, const int _gradExec) : _name(_name), _sign(false), _gradSign(_gradSign), _gradExec(_gradExec) {
	std::cout << *this << std::endl;
}

AForm::AForm(const AForm& rhs) : _name(rhs._name), _sign(rhs._sign), _gradSign(rhs._gradSign), _gradExec(rhs._gradExec) {
	*this = rhs;
}

AForm& AForm::operator=(const AForm& rhs) {
	const_cast<std::string&>(this->_name) = rhs._name;
	this->_sign = rhs._sign;
	const_cast<int&>(this->_gradSign) = rhs._gradSign;
	const_cast<int&>(this->_gradExec) = rhs._gradExec;
	return *this;
}

AForm::~AForm() {}

std::string	AForm::getName() const {
	return this->_name;
}

bool	AForm::getSign() const {
	return this->_sign;
}

int	AForm::getGradeSign() const {
	return this->_gradSign;
}

int AForm::getGradeExec() const {
	return this->_gradExec;
}

void	AForm::beSigned(Bureaucrat member) {
		if (member.getGrade() < 1)
			throw GradeTooHighException();
		if (this->_gradSign < member.getGrade())
			throw GradeTooLowException();
		this->_sign = true;
	return ;
}

const char* AForm::GradeTooHighException::what() const throw(){
	return "the grade is too high!\n\n";
}

const char* AForm::GradeTooLowException::what() const throw(){
	return "the grade is too low!\n\n";
}

const char* AForm::SignExecException::what() const throw(){
	return "the form isn't signed!\n\n";
}

const char* AForm::FileError::what() const throw(){
	return "Could not open file!\n\n";
}
std::ostream& operator<<(std::ostream& o, const AForm& rhs) {

	o << "The level's grade required to sign " << rhs.getName()
	<< " is " << rhs.getGradeSign() << " and the level's grade to execute is "
	<< rhs.getGradeExec() << ". The current status of the sign is : " << rhs.getSign() << std::endl;
	return o;
}
