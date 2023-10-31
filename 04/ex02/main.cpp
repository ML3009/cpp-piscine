/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:59:27 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/30 13:37:23 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
    std::cout << "\n [Default Constructors]" << std::endl;
    std::cout << "\nDog:\n" << std::endl;
    const Animal* d = new Dog();
    std::cout << "\nCat:\n" << std::endl;
    const Animal* c = new Cat();
    std::cout << "\nAnimal:\n" << std::endl;
    //const Animal* a = new Animal();

    std::cout << "\n\t[Destructor]" << std::endl;
    std::cout << "\nDog:\n" << std::endl;
    delete d;
    std::cout << "\nCat:\n" << std::endl;
    delete c;
    //std::cout << "\nAnimal:\n" << std::endl;
   // delete a;

//    std::cout << "\n\t[Copy Constructor]" << std::endl;

    std::cout << "\n[Construction Cat]\n" << std::endl;
    Cat cat;
    cat.setIdea(1, "COUCOU");
    std::cout << "The cat's brain " << cat.getIdea(1) << std::endl;
    std::cout << "\n[Attribution Cat]\n" << std::endl;
    Cat A_cat = cat;
    std::cout << "The cat's brain attribution " << A_cat.getIdea(1) << std::endl;
    std::cout << "\n[Copy Cat]\n" << std::endl;
    Cat C_cat(cat);
    std::cout << "The cat's brain copy " << C_cat.getIdea(1) << std::endl;

    std::cout << "\n[Construction Dog]\n" << std::endl;
    Dog dog;
    dog.setIdea(1, "SALUT");
    std::cout << "The dog's brain " << dog.getIdea(1) << std::endl;
    std::cout << "\n[Attribution Dog]\n" << std::endl;
    Dog A_dog = dog;
    std::cout << "The dog's brain attribution " << A_dog.getIdea(1) << std::endl;
    std::cout << "\n[Copy Dog]\n" << std::endl;
    Dog C_dog(dog);
    std::cout << "The dog's brain copy " << C_dog.getIdea(1) << std::endl;


    std::cout << "\n [Table] \n" << std::endl;
    Animal *tab[10];

    for (int a = 0; a < 10; a++)
    {
        std::cout << "\n[" << a << "][Creation]\n" << std::endl;
        if (a < 5)
            tab[a] = new Dog();
        else
            tab[a] = new Cat();
    }
    for (int a = 0; a < 10; a++)
    {
        std::cout << "\n[" << a << "][Destruction]\n" << std::endl;
        delete tab[a];
    }

    std::cout << "\t\n [Destructor]\n" << std::endl;
    return 0;
}
