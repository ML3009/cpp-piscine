/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:40:59 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/12 13:41:01 by mvautrot         ###   ########.fr       */
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

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
