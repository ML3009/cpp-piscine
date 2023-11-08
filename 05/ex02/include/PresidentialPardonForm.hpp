/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:19:26 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/08 13:20:09 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "AForm.hpp"


class PresidentialPardonForm : public AForm {

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& rhs);
		PresidentialPardonForm &operator=(const PresidentialPardonForm& rhs);
		~PresidentialPardonForm();

	private:

};

std::ostream& operator<<(std::ostream& o, const PresidentialPardonForm& rhs);
