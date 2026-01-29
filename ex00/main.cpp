/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:00:26 by plichota          #+#    #+#             */
/*   Updated: 2026/01/28 17:41:31 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        std::cout << YELLOW << "----- STANDARD TEST -----" << RESET << std::endl;
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();

        delete meta;
        delete j;
        delete i;
    }
    {
        std::cout << YELLOW << "----- WRONG ANIMAL TEST -----" << RESET << std::endl;
        const WrongAnimal* i = new WrongCat();
        const WrongCat *cat = new WrongCat();
        std::cout << "type: " << i->getType() << " " << std::endl;
        std::cout << "type: " << cat->getType() << " " << std::endl;
        i->makeSound(); // WrongAnimal sound
        cat->makeSound(); // WrongCat sound

        delete cat;
        delete i;
    }
    {
        std::cout << YELLOW << "----- Deep copy TEST -----" << RESET << std::endl;
        Dog *d1 = new Dog();
        Dog *d2 = new Dog(*d1);
        std::cout << "type: " << d1->getType() << std::endl;
        std::cout << "type: " << d2->getType() << std::endl;
        d1->setType("modified_dog");
        std::cout << "type: " << d1->getType() << std::endl;
        delete d1;
        delete d2;
    }

    return 0;
}