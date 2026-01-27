/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:09:29 by plichota          #+#    #+#             */
/*   Updated: 2026/01/27 20:46:01 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
    std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type)
{
    std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
    *this = other; // uso assignment operator
    std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal& a)
{
    if (this != &a)
    {
        this->type = a.type;
    }
    return *this;
}

void AAnimal::makeSound() const
{
    std::cout << "AAnimal makes a sound!" << std::endl;
}

std::string AAnimal::getType() const
{
    return type;
}

// Test
void AAnimal::setType(std::string t)
{
    type = t;
}