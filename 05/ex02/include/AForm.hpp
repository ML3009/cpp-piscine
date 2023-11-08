/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:33:03 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/08 13:22:42 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	public:
		AForm();
		AForm(const std::string _name, const int _gradSign, const int _gradExec);
		AForm(const AForm& rhs);
		AForm& operator=(const AForm& rhs);
		virtual ~AForm();

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		virtual std::string		getName() const = 0;
		virtual bool			getSign() const = 0;
		virtual int 			getGradeSign() const = 0;
		virtual int 			getGradeExec() const = 0;
		virtual void			beSigned(Bureaucrat member) = 0;

	private:
		const std::string	_name;
		bool				_sign;
		const int			_gradSign;
		const int			_gradExec;


};

std::ostream& operator << (std::ostream& o, const AForm& rhs);

