/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 22:02:41 by plichota          #+#    #+#             */
/*   Updated: 2026/01/29 20:02:55 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(std::string idea);
        Brain(std::string ideas[100]);
        Brain(const Brain&);
        ~Brain();

        Brain& operator=(const Brain&);
        void addIdea(std::string idea);

        // test
        void getIdeas() const;
};

#endif