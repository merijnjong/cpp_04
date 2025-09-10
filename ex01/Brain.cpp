/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 13:56:40 by mjong             #+#    #+#             */
/*   Updated: 2025/09/10 14:00:02 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

const std::string &Brain::getIdea(int index) const
{
    static std::string empty = "";
    if (index >= 0 && index < 100)
        return ideas[index];
    return (empty);
}

void Brain::setIdea(int index, const std::string &idea)
{
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain assigned" << std::endl;
    if (this != &other) {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    return (*this);
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain copy-constructed" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
}

Brain::Brain()
{
    std::cout << "Brain constructed" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destroyed" << std::endl;
}
