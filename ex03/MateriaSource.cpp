/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:21:07 by plichota          #+#    #+#             */
/*   Updated: 2026/01/30 16:31:20 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
};

MateriaSource::MateriaSource(const MateriaSource& other)
{
    *this = other;
}

MateriaSource::~MateriaSource()
{
}

MateriaSource &MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        // ??
    }
    return *this;
}