/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:41:10 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/12 13:41:12 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {

    Zombie* zombie = zombieHorde(5, "newZombie");
    for (int i = 0; i < 5; i++)
        zombie[i].announce();
    delete [] zombie;
    return 0;
}
