/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:59:03 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/24 12:00:35 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <sstream>

class RPN {
	public:
		RPN();
		RPN(const RPN& rhs);
		RPN& operator=(const RPN& rhs);
		~RPN();
	void isValidExpr(char * av);
	int	getResult(std::string& str);

	class invalidExpr : public std::exception {
		public:
			virtual const char* what() const throw();
	};
	private:
		std::stack<int> opStack;
};



