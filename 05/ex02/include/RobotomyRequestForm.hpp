/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:38:29 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/08 13:21:57 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AForm.hpp"


class RobotomyRequestForm : public AForm {

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& rhs);
		RobotomyRequestForm &operator=(const RobotomyRequestForm& rhs);
		~RobotomyRequestForm();

	private:

};

std::ostream& operator<<(std::ostream& o, const RobotomyRequestForm& rhs);
