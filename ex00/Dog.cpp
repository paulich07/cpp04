/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:55:31 by plichota          #+#    #+#             */
/*   Updated: 2026/01/27 19:58:44 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()  : Animal("dog")
{
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other)
{
    *this = other;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
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