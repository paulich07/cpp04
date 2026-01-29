/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 22:41:17 by plichota          #+#    #+#             */
/*   Updated: 2026/01/27 22:50:49 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>

class ICharacter; // forward declaration per evitare includes

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(std::string const &type);
        AMateria(const AMateria& other);
        virtual ~AMateria();

        AMateria& operator=(const AMateria& other);

        std::string const & getType() const; // Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif