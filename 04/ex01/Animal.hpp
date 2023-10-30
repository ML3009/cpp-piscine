/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:49:30 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/26 17:36:06 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {

	public:
		Animal(void);
		Animal(const Animal& rhs);
		Animal& operator=(const Animal& rhs);
		virtual ~Animal(void);

		virtual void makeSound() const;
		std::string getType() const;
		
		virtual void setIdea(int posidea, std::string idea);
        virtual std::string getIdea(int posidea) const;

	protected:
		std::string type;
};



#endif
