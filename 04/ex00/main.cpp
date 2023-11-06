/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:59:27 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/06 10:15:52 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(){

const Animal* anim = new Animal();
const Animal* dog = new Dog();
const Animal* cat = new Cat();

const WrongAnimal* wanim = new WrongAnimal();
const WrongAnimal* wcat = new WrongCat();


std::cout << dog->getType() << " " << std::endl;
std::cout << cat->getType() << " " << std::endl;
std::cout << wcat->getType() << " " << std::endl;

cat->makeSound();
dog->makeSound();
anim->makeSound();
wanim->makeSound();
wcat->makeSound();

delete anim;
delete dog;
delete cat;
delete wanim;
delete wcat;

return 0;

}
