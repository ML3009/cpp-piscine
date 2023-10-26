/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:25:34 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/26 17:26:14 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal {

	public:
		WrongCat(void);
		WrongCat(const WrongCat& rhs);
		WrongCat& operator=(const WrongCat&  rhs);
		~WrongCat(void);

		void makeSound() const;
};


#endif
