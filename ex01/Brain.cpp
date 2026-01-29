/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 22:10:47 by plichota          #+#    #+#             */
/*   Updated: 2026/01/29 19:59:12 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        ideas[i] = "";
    }
}

Brain::Brain(std::string idea)
{
    std::cout << "Brain constructor called" << std::endl;
    ideas[0] = idea;
    for (int i = 1; i < 100; i++)
    {
        ideas[i] = "";
    }
}

Brain::Brain(std::string ideas[100])
{
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = ideas[i];
    }
}

Brain::Brain(const Brain& other)
{
    *this = other; // uso assignment operator
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain& b)
{
    if (this != &b)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = b.ideas[i];
        }
    }
    return *this;
}

void Brain::addIdea(std::string idea)
{
    int i = 0;
    while (ideas[i] != "")
        i++;
    ideas[i] = idea;
}

void Brain::getIdeas() const
{
    int i = 0;
    while (ideas[i] != "")
    {
        std::cout << ideas[i] << std::endl; 
        i++;
    }
}
