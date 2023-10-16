/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:40:28 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/16 10:06:01 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {

    Zombie* zombie = newZombie("newZombie");
    zombie->announce();
    randomChump("randomChump");
    delete zombie;
    return 0;
}
