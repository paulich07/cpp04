/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:00:55 by plichota          #+#    #+#             */
/*   Updated: 2026/01/27 22:29:26 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

#include <iostream>
#include <string>

# define GREEN   	"\033[0;32m"
# define YELLOW  	"\033[0;33m"
# define BLUE    	"\033[0;34m"
# define MAGENTA 	"\033[0;35m"
# define RESET   	"\033[0m"

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(std::string);
        AAnimal(const AAnimal&);
        virtual ~AAnimal();

        AAnimal& operator=(const AAnimal&);
    
        virtual void makeSound() const = 0;
        std::string getType() const;

        // Test
        void setType(std::string t);
};

#endif