/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:31:38 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/14 16:43:12 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& rhs) {
	*this = rhs;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs){
	if(this != &rhs){
		*this = rhs;
	}
	return *this;
}


ScalarConverter::~ScalarConverter(){}

void	ScalarConverter::convert(std::string str){
	if (checkArg(str) < 0)
		return;
	int	option = getType(str);
	if (option < 0) {
		std::cout << "Error argument: " << str << std::endl;
		return ;
	}
	switch (option) {
		case CHAR:
			toChar(str);
			break;
		case INT:
			toInt(str);
			break;
		case FLOAT:
			toFloat(str);
			break;
		case DOUBLE:
			toDouble(str);
			break;
		default:
			std::cout << IMPOSSIBLE << std::endl;
	}
	return ;
}

void	toChar(std::string str){

	std::cout << "Conversion : " << std::endl
	<< "char: " << static_cast<const char>(str[0]) << std::endl
	<< "int: " << static_cast<const int>(str[0]) << std::endl
	<< "float: " << static_cast<const float>(str[0]) << ".0f" << std::endl
	<< "double: " << static_cast<const double>(str[0]) << ".0" << std::endl;
	return;
}

void	toInt(std::string str){

	char	*end;
	long	num;
	num = strtol(str.c_str(), &end, 10);
	std::cout << "Conversion : " << std::endl
	<< "char: " << "Non displayable" << std::endl;
	if (num > INT_MAX)
		std::cout << "int: overflow " << std::endl;
	else if (num < INT_MIN)
		std::cout << "int: underflow " << std::endl;
	else
		std::cout << "int: " << static_cast<const int>(num) << std::endl;
	if (-1000000 <= num || num >= 1000000) {
		std::cout << "float: " << static_cast<const float>(num) << std::endl
		<< "double: " << static_cast<const double>(num) << std::endl;
	}
	else {
		std::cout << "float: " << static_cast<const float>(num) << ".0f" << std::endl
		<< "double: " << static_cast<const double>(num) << ".0" << std::endl;
	}
	return;
}

void	toFloat(std::string str){
	char	*end;
	float	num;
	int		point = 0;
	for (int i = 0; str[i]; i++)
		if (str[i] == '.')
			point++;
	num = strtof(str.c_str(), &end);
	std::cout << "Conversion : " << std::endl
	<< "char: " << "Non displayable" << std::endl;
	if (num > (float)INT_MAX)
		std::cout << "int: overflow " << std::endl;
	else if (num < (float)INT_MIN)
		std::cout << "int: underflow " << std::endl;
	else
		std::cout << "int: " << static_cast<const int>(num) << std::endl;
	if (point == 1) {
		std::cout << "float: " << num << "f" << std::endl
		<< "double: " << static_cast<const double>(num) << std::endl;
	}
	else {
		std::cout << "float: " << num << ".0f" << std::endl
		<< "double: " << static_cast<const double>(num) << ".0" << std::endl;
	}
	return;
}

void	toDouble(std::string str){
	char	*end;
	double	num;
	int		point = 0;
	for (int i = 0; str[i]; i++)
		if (str[i] == '.')
			point++;
	num = strtod(str.c_str(), &end);
	std::cout << "Conversion : " << std::endl
	<< "char: " << "Non displayable" << std::endl;
	if (num > (double)INT_MAX)
		std::cout << "int: overflow " << std::endl;
	else if (num < (double)INT_MIN)
		std::cout << "int: underflow " << std::endl;
	else
		std::cout << "int: " << static_cast<const int>(num) << std::endl;
	if (point == 1) {
		std::cout << "float: " << static_cast<const float>(num) << "f" << std::endl
		<< "double: " << num << std::endl;
	}
	else {
		std::cout << "float: " << static_cast<const float>(num) << ".0f" << std::endl
		<< "double: " << num << ".0" << std::endl;
	}
	return;
}

int	getType(std::string str) {

	if (isChar(str) == true)
		return CHAR;
	else if (isInt(str) == true)
		return INT;
	else if (isDouble(str) == true)
		return DOUBLE;
	else if (isFloat(str) == true)
		return FLOAT;
	else
		return -1;
}

bool	isChar(std::string str) {
	if (str.length() == 1 && std::isalpha(str[0]))
		return true;
	return false;
}

bool	isInt(std::string str) {

	char	*end;
	long	num;
	num = strtol(str.c_str(), &end, 10);
	if (*end)
		return false;
	else
		return true;
}

bool	isFloat(std::string str) {

	int i = -1;
	int	f = 0;
	int sign = 0;
	if (str[i + 1] && (str[i + 1] == '+' || str[i + 1] == '-'))
		i++;
	while (str[++i]) {
		if (str[i] == 'f'){
			f++;
			break;
		}
		if (str[i] == '.' && (!isdigit(str[i + 1]) || !isdigit(str[i - 1])))
			break;
		if (str[i] == '+' || str[i] == '-')
			break;
		if (!isdigit(str[i]) && str[i] != '.' && str[i] != 'f' && str[i] != '+' && str[i] != '-')
			break;
	}
	if ((int)str.length() - 1 != i || sign > 1)
		return false;
	else if (f != 1)
		return false;
	else
		return true;
}

bool	isDouble(std::string str) {
	char	*end;
	long	num;
	num = strtod(str.c_str(), &end);
	if (*end)
		return false;
	else
		return true;
}

int	checkArg(std::string str){
	for (int i = 0; str[i]; i++){
		if (std::isgraph(str[i]) == false){
			std::cout <<  "Error: this character isn't printable." << std::endl;
			return -1;
		}
	}
	if (!str.compare("-inff") || !str.compare("+inff") || !str.compare("nanf")
		|| !str.compare("-inf") || !str.compare("+inf") || !str.compare("nan")){
		pseudoLiterals(str);
		return -1;
	}
	return 0;
}

void	pseudoLiterals(std::string str){

	int	literal = getPseudoLiterals(str);
	switch (literal){
		case 0:
			std::cout << "Conversion: -inff" << std::endl
			<< "char:" << IMPOSSIBLE << std::endl
			<< "int:" << IMPOSSIBLE << std::endl
			<< "float:" << " -inff" << std::endl
			<< "double:" << " -inf" << std::endl;
			break;
		case 1:
			std::cout << "Conversion: +inff" << std::endl
			<< "char:" << IMPOSSIBLE << std::endl
			<< "int:" << IMPOSSIBLE << std::endl
			<< "float:" << " +inff" << std::endl
			<< "double:" << " +inf" << std::endl;
			break;
		case 2:
			std::cout << "Conversion: nanf" << std::endl
			<< "char:" << IMPOSSIBLE << std::endl
			<< "int:" << IMPOSSIBLE << std::endl
			<< "float:" << " nanf" << std::endl
			<< "double:" << " nan" << std::endl;
			break;
		case 3:
			std::cout << "Conversion: -inf" << std::endl
			<< "char:" << IMPOSSIBLE << std::endl
			<< "int:" << IMPOSSIBLE << std::endl
			<< "float:" << " -inff" << std::endl
			<< "double:" << " -inf" << std::endl;
			break;
		case 4:
			std::cout << "Conversion: +inf" << std::endl
			<< "char:" << IMPOSSIBLE << std::endl
			<< "int:" << IMPOSSIBLE << std::endl
			<< "float:" << " +inff" << std::endl
			<< "double:" << " +inf" << std::endl;
			break;
		case 5:
			std::cout << "Conversion: nan" << std::endl
			<< "char:" << IMPOSSIBLE << std::endl
			<< "int:" << IMPOSSIBLE << std::endl
			<< "float:" << " nanf" << std::endl
			<< "double:" << " nan" << std::endl;
			break;
		default:
			std::cout << "Error: this is not a pseudo literal." << std::endl;
	}
}

int getPseudoLiterals(std::string str) {
	std::string strComp[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	for (int i = 0; i < 6; i++) {
		if (str == strComp[i])
			return i;
	}
	return -1;
}




