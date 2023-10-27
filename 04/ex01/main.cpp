/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:59:27 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/26 17:35:32 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(){

const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();

const WrongAnimal* mita = new WrongAnimal();
const WrongAnimal* k = new WrongCat();


std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << k->getType() << " " << std::endl;

i->makeSound();
j->makeSound();
meta->makeSound();
mita->makeSound();
k->makeSound();

delete meta;
delete j;
delete i;
delete mita;
delete k;

return 0;

}
