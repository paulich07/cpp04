/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:00:55 by plichota          #+#    #+#             */
/*   Updated: 2026/01/28 18:42:29 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

# define GREEN   	"\033[0;32m"
# define YELLOW  	"\033[0;33m"
# define BLUE    	"\033[0;34m"
# define MAGENTA 	"\033[0;35m"
# define RESET   	"\033[0m"

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string);
        Animal(const Animal&);
        virtual ~Animal(); // senza virtual le classi ereditate non chiamerebbero ~Animal

        Animal& operator=(const Animal&);
    
        virtual void makeSound() const;
        std::string getType() const;

        // Test
        void setType(std::string t);
};

#endif