/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:39:13 by plichota          #+#    #+#             */
/*   Updated: 2026/01/29 20:03:32 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("cat"), brain(new Brain())
{
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) : AAnimal(type), brain(new Brain())
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal(other), brain(new Brain(*other.brain))
{
    std::cout << "Copy constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        this->type = other.type;
        *(this->brain) = *(other.brain); // operator = di brain, NO copia pointer
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << type << ": Meow" << std::endl;
}

Brain *Cat::getBrain()
{
    return brain;
}