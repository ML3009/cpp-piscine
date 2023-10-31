/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:49:38 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/26 17:22:46 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"


class Cat : public Animal {

	public:
		Cat(void);
		Cat(const Cat& rhs);
		Cat& operator=(const Cat&  rhs);
		~Cat(void);

		virtual void makeSound() const;
};


#endif
