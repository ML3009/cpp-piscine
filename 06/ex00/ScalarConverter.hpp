/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:31:28 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/14 15:59:22 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <cerrno>
#include <limits.h>

#define CHAR 0
#define INT 1
#define FLOAT 2
#define DOUBLE 3
#define IMPOSSIBLE " impossible."


class ScalarConverter {

	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& rhs);
		ScalarConverter& operator=(const ScalarConverter& rhs);
		~ScalarConverter();
		static void convert(std::string str);


};

int checkArg(std::string str);
void	pseudoLiterals(std::string str);
int	getPseudoLiterals(std::string str);
int			getType(std::string str);
bool		isChar(std::string str);
bool		isInt(std::string str);
bool		isDouble(std::string str);
bool		isFloat(std::string str);
void		toChar(std::string str);
void		toInt(std::string str);
void		toDouble(std::string str);
void		toFloat(std::string str);
