/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:37:39 by plichota          #+#    #+#             */
/*   Updated: 2026/01/30 17:07:49 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(std::string const &type) : AMateria(type)
{
}

Cure::Cure(const Cure& other) : AMateria(other)
{
    *this = other;
}

Cure::~Cure()
{
}

Cure& Cure::operator=(const Cure& other)
{
    if (this != &other)
    {
        this->type = other.type; // altro??
    }
    return *this;
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}