/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:18:18 by plichota          #+#    #+#             */
/*   Updated: 2026/01/30 17:24:53 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include <string>
#include <iostream>
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        AMateria *inventory[4]; // any type of AMateria
        std::string name;
    public:
        Character();
        Character(std::string &name);
        Character(Character const &src);
        ~Character();

        Character& operator=(Character const &src);
        // metodi di ICharacter
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif