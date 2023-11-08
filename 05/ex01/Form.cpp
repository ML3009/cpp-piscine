/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:33:24 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/08 11:02:39 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("unknow"), _sign(false), _gradSign(0), _gradExec(0) { }

Form::Form(const std::string _name, bool _sign, const int _gradSign, const int _gradExec) : _name(_name), _sign(_sign), _gradSign(_gradSign), _gradExec(_gradExec) { }

Form::Form(const Form& rhs) : _name(rhs._name), _sign(rhs._sign), _gradSign(rhs._gradSign), _gradExec(rhs._gradExec) {
	*this = rhs;
}

Form& Form::operator=(const Form& rhs) {
	const_cast<std::string&>(this->_name) = rhs._name;
	this->_sign = rhs._sign;
	const_cast<int&>(this->_gradSign) = rhs._gradSign;
	const_cast<int&>(this->_gradExec) = rhs._gradExec;
}

std::string	Form::getName() const {
	return this->_name;
}

bool	Form::getSign() const {
	return this->_sign;
}

const int	Form::getGradeSign() const {
	return this->_gradSign;
}

const int Form::getGradeExec() const {
	return this->_gradExec;
}

void	Form::beSigned(Bureaucrat member) {

	try {
		if (this->_gradSign < 1)
			throw GradeTooHighException();
		if (this->_gradSign > 150)
			throw GradeTooLowException();
		this->_sign = true;
	}	catch (const Form::GradeTooHighException& e) {
			std::cerr << "Caught an exception: " << e.what();
	}	catch (const Form::GradeTooLowException& e) {
			std::cerr << "Caught an exception : " << e.what();
	}	catch(...) {
			std::cerr << "Unknow error" << std::endl;
	}
	return ;

}

/*void	Form::exceptSign() {
	try {
		if (this->_gradSign < 1)
			throw GradeTooHighException();
		if (this->_gradSign > 150)
			throw GradeTooLowException();
		this->_sign = true;
	}	catch (const Form::GradeTooHighException& e) {
			std::cerr << "Caught an exception: " << e.what();
	}	catch (const Form::GradeTooLowException& e) {
			std::cerr << "Caught an exception : " << e.what();
	}	catch(...) {
			std::cerr << "Unknow error" << std::endl;
	}
	return ;
}*/


void	Form::exceptExec() {
	try {
		if (this->_gradExec < 1)
			throw GradeTooHighException();
		if (this->_gradExec > 150)
			throw GradeTooLowException();
	}	catch (const Form::GradeTooHighException& e) {
			std::cerr << "Caught an exception: " << e.what();
	}	catch (const Form::GradeTooLowException& e) {
			std::cerr << "Caught an exception : " << e.what();
	}	catch (...) {
			std::cerr << "Unknow error" << std::endl;
	}
	return ;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade is too high!\n";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade is too low!\n";
}
