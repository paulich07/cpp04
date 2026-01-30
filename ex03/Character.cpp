/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 17:07:07 by plichota          #+#    #+#             */
/*   Updated: 2026/01/30 17:07:26 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

        Character()
        Character(std::string &name);
        Character(Character const &src);
        ~Character();

        Character& operator=(Character const &src);
        // metodi di ICharacter
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);