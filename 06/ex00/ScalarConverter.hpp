/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:31:28 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/13 13:31:34 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cctype>

class ScalarConverter {

    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& rhs);
        ScalarConverter& operator=(const ScalarConverter& rhs);
        ~ScalarConverter();
        static void convert(std::string str);

    private:

};
