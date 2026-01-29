/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:13:03 by plichota          #+#    #+#             */
/*   Updated: 2026/01/29 19:50:46 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(std::string);
        Cat(const Cat&);
        virtual ~Cat();

        Cat& operator=(const Cat&);

        virtual void makeSound() const; // opzionale mettere virtual qui

        // test
        Brain *getBrain();
};

#endif