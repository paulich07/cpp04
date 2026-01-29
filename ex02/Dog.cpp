/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:55:31 by plichota          #+#    #+#             */
/*   Updated: 2026/01/29 20:44:01 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("dog"), brain(new Brain())
{
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) : AAnimal(type), brain(new Brain())
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other), brain(new Brain(*other.brain))
{
    std::cout << "Dog copy constructor called" << std::endl;
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
        *(this->brain) = *(other.brain);
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << type << ": Woff" << std::endl;
}

Brain *Dog::getBrain()
{
    return brain;
}