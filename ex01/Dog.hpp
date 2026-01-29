/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:52:38 by plichota          #+#    #+#             */
/*   Updated: 2026/01/29 19:50:49 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog &other);
        ~Dog();
        Dog &operator=(const Dog &other);
        void makeSound() const;

        Brain *getBrain();
};

#endif