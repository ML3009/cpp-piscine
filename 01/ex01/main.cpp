/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:41:10 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/25 10:29:53 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {

    Zombie* zombie = zombieHorde(0, "newZombie");
    if (!zombie)
        return 0;
    for (int i = 0; i < 5; i++)
        zombie[i].announce();
    delete [] zombie;
    return 0;
}
