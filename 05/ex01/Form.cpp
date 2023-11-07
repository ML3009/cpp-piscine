/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:33:24 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/07 19:58:25 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("unknow"), _sign(false), _gradSign(0), _gradExec(0) { }

Form::Form(const std::string _name, bool _sign, const int _gradSign, const int _gradExec) : _name(_name), _sign(_sign), _gradSign(_gradSign), _gradExec(_gradExec) {



}



void	Form::exceptFun() {
	try {
		if (this->_gradSign < 1)
			throw GradeTooHighException();
	} catch (const Form::GradeTooHighException& e) {
		std::cerr << "Caught an exception: " << e.what();
	}

	try {
		if (this->_gradSign > 150)
			throw GradeTooLowException();
	} catch (const Form::GradeTooLowException& e) {
		std::cerr << "Caught an exception : " << e.what();
	}
	return ;
}

