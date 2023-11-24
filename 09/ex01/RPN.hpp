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


class RPN {
	public:
		RPN();
		RPN(const RPN& rhs);
		RPN& operator=(const RPN& rhs);
		~RPN();

};
