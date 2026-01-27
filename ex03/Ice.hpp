/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 22:42:36 by plichota          #+#    #+#             */
/*   Updated: 2026/01/27 22:46:21 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

Class Ice : public AMateria
{
    public:
        Ice();
        Ice(std::string const &type);
        Ice(const Ice& other);
        virtual ~Ice();
        
        Ice& operator=(const Ice& other);
};

#endif