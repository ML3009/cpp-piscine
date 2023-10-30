/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:59:27 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/30 13:50:01 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
    std::cout << "\tBase Constructor" << std::endl;
    std::cout << "\n[Dog]\n" << std::endl;
    const Animal* j = new Dog();
    std::cout << "\n[Cat]\n" << std::endl;
    const Animal* i = new Cat();
    //const Animal* k = new Animal();


    std::cout << "\n\tBase Destructor" << std::endl;
    std::cout << "\n[Dog]\n" << std::endl;
    delete j;
    std::cout << "\n[Cat]\n" << std::endl;
    delete i;
    //delete k;


    std::cout << "\n\tCopy Constructor" << std::endl;

    std::cout << "\n[Stack Cat]\n" << std::endl;
    Cat cat;
    cat.setIdea(1, "COUCOU");
    std::cout << "BRAIN CAT " << cat.getIdea(1) << std::endl;
    std::cout << "\n[Attribution Cat]\n" << std::endl;
    Cat A_cat = cat;
    std::cout << "BRAIN CAT " << A_cat.getIdea(1) << std::endl;
    std::cout << "\n[Copy Cat]\n" << std::endl;
    Cat C_cat(cat);
    std::cout << "BRAIN CAT " << C_cat.getIdea(1) << std::endl;

    std::cout << "\n[Stack Dog]\n" << std::endl;
    Dog dog;
    dog.setIdea(1, "SALUT");
    std::cout << "BRAIN DOG " << dog.getIdea(1) << std::endl;
    std::cout << "\n[Stack Dog]\n" << std::endl;
    Dog A_dog = dog;
    std::cout << "BRAIN DOG " << A_dog.getIdea(1) << std::endl;
    std::cout << "\n[Stack Dog]\n" << std::endl;
    Dog C_dog(dog);
    std::cout << "BRAIN DOG " << C_dog.getIdea(1) << std::endl;


    std::cout << "\n Tableau \n" << std::endl;
    Animal *tab[10];

    for (int a = 0; a < 10; a++)
    {
        std::cout << "[Creation]-------------" << std::endl;
        if (a < 5)
            tab[a] = new Dog();
        else
            tab[a] = new Cat();
    }
    for (int a = 0; a < 10; a++)
    {
        std::cout << "[Destruction]------------" << std::endl;
        delete tab[a];
    }

    std::cout << "\t\n Destructor\n" << std::endl;
    return (0);
}
