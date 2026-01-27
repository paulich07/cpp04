/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:00:26 by plichota          #+#    #+#             */
/*   Updated: 2026/01/27 20:23:48 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    // ... more tests ... wrong animal
    {
        std::cout << "----- DOG TESTS -----" << std::endl;
        Dog *d1 = new Dog();
        Dog *d2 = new Dog(*d1);
        *d2 = Dog("modified");
        std::cout << d1->getType() << std::endl;
        std::cout << d2->getType() << std::endl;
        delete d1;
        delete d2;
    }

    delete meta;
    delete j;
    delete i;
    return 0;
}