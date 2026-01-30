/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:05:24 by plichota          #+#    #+#             */
/*   Updated: 2026/01/30 16:26:22 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("AMateria")
{
}

AMateria::AMateria(std::string const &type) : type(type)
{
}

AMateria::AMateria(const AMateria& other) : type(other.type)
{
}

AMateria::~AMateria()
{
}

AMateria& AMateria::operator=(const AMateria& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

std::string const &AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    // ?? tanto sono virtual
}