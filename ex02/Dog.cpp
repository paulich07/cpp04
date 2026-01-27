/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:55:31 by plichota          #+#    #+#             */
/*   Updated: 2026/01/27 22:32:04 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()  : AAnimal("dog")
{
    std::cout << "Dog default constructor called" << std::endl;
    brain = new Brain();
}

Dog::Dog(std::string type) : AAnimal(type)
{
    std::cout << "Dog constructor called" << std::endl;
    brain = new Brain();
}

Dog::Dog(const Dog &other) : AAnimal(other)
{
    *this = other;
    std::cout << "Dog copy constructor called" << std::endl;
    brain = new Brain(*other.brain);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

Dog &Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << type << ": Woff" << std::endl;
}