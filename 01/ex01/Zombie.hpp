/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:41:22 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/12 13:41:24 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>


class Zombie {

    public:
        Zombie( void );
        ~Zombie( void );
        void setName( std::string name );
        void announce( void );


    private:
        std::string _name;

};

Zombie* zombieHorde( int N, std::string name );


#endif
