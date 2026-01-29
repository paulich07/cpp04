/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:00:26 by plichota          #+#    #+#             */
/*   Updated: 2026/01/29 20:01:34 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>
#include <string>

int main()
{
    // Object slicing: oggetti temporanei creati e distrutti subito
    // perdo tutte le info di Cat/Dog perchè uso copy constructor di Animal
    // const Animal arr[4] = { Cat(), Dog(), Cat(), Dog() };
    {
        std::cout << GREEN << "---- Correct Animals ----" << RESET << std::endl;
        // array di 4 puntatori (stack)
        Animal *arr[] = {
            new Cat(), new Cat("cat1"), new Dog(), new Dog("dog1")
        };
    
        int n = sizeof(arr) / sizeof(arr[0]);
    
        for (int i = 0; i < n; i++)
        {
            std::cout << "Animal [" << i << "] ";
            arr[i]->makeSound();
        }
    
        for (int i = 0; i < n; i++)
            delete arr[i];
    }
    {
        std::cout << GREEN << "---- Brain Deep copy test ----" << RESET << std::endl;
        Cat cat1("cat1");
        cat1.getBrain()->addIdea("I want fish");
        Cat cat2 = cat1; // copy constructor
        std::cout << "cat1 ideas: " << std::endl;
        cat1.getBrain()->getIdeas();
        std::cout << "cat2 ideas: " << std::endl;
        cat1.getBrain()->getIdeas();
        std::cout << "cat2 add idea" << std::endl;
        cat2.getBrain()->addIdea("I want MORE");
        std::cout << "After modifying cat2:" << std::endl;
        std::cout << "cat1 ideas: " << std::endl;
        cat1.getBrain()->getIdeas();
        std::cout << "cat2 ideas: " << std::endl;
        cat2.getBrain()->getIdeas();
    }
    return 0;
}
