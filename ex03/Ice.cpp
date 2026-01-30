/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:40:35 by plichota          #+#    #+#             */
/*   Updated: 2026/01/30 16:40:58 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

        Ice();
        Ice(std::string const &type);
        Ice(const Ice& other);
        ~Ice();
        
        Ice& operator=(const Ice& other);

        AMateria* clone() const = 0;
        void use(ICharacter& target);