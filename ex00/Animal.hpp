/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:00:55 by plichota          #+#    #+#             */
/*   Updated: 2026/01/27 18:12:57 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string);
        Animal(const Animal&);
        virtual ~Animal();

        Animal& operator=(const Animal&);
    
        virtual void makeSound() const;
        std::string getType() const;
};

#endif