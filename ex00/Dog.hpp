/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:52:38 by plichota          #+#    #+#             */
/*   Updated: 2026/01/27 19:58:53 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog &other);
        ~Dog();
        Dog &operator=(const Dog &other);
        void makeSound() const;
};

#endif