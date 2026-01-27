/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:00:26 by plichota          #+#    #+#             */
/*   Updated: 2026/01/27 22:23:44 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *arr[100];

    for (size_t i = 0; i < 50; i++)
    {
        arr[i] = new Cat();
    }
    for (size_t i = 50; i < 100; i++)
    {
        arr[i] = new Dog();
    }
    for (size_t i = 0; i < 100; i++)
    {
        std::cout << "Animal [" << i << "] ";
        arr[i]->makeSound();
    }
    for (size_t i = 0; i < 100; i++)
    {
        delete arr[i];
    }

    return 0;
}