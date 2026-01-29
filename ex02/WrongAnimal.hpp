/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 20:01:54 by plichota          #+#    #+#             */
/*   Updated: 2026/01/29 20:44:22 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal& other);
        virtual ~WrongAnimal(); // senza virtual le classi ereditate non chiamerebbero ~WrongAnimal

        WrongAnimal& operator=(const WrongAnimal& other);
    
        void makeSound() const;
        std::string getType() const;

        // Test
        void setType(std::string t);
};

#endif