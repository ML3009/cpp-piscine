/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:41:29 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/25 10:28:51 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {


    if (N < 1)
        return NULL;
    Zombie* zombie = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombie[i].setName(name);
    return zombie;
}
