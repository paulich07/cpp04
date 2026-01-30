/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:40:35 by plichota          #+#    #+#             */
/*   Updated: 2026/01/30 17:41:39 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice& other) : AMateria(other)
{
    *this = other;
}

Ice::~Ice()
{
}

Ice& Ice::operator=(const Ice& other)
{
    if (this != &other)
    {
        // chiamo AMateria
    }
    return *this;
}

AMateria* Ice::clone() const
{
    // creo new Ice
    // ci copio i dati
}

void Ice::use(ICharacter& target);