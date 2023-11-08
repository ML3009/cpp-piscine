/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:33:03 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/08 11:01:26 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form {

	public:

		Form();
		Form(const std::string _name, bool _sign, const int _gradSign, const int _gradExec);
		Form(const Form& rhs);
		Form& operator=(const Form& rhs);
		~Form();

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		std::string		getName() const;
		bool			getSign() const;
		const int 		getGradeSign() const;
		const int 		getGradeExec() const;
		void			beSigned(Bureaucrat member);
		//void			exceptSign();
		void			exceptExec();

	private:

		const std::string	_name;
		bool				_sign;
		const int			_gradSign;
		const int			_gradExec;


};

std::ostream& operator << (std::ostream& o, const Form& rhs);

#endif
