/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:25:49 by mjong             #+#    #+#             */
/*   Updated: 2025/09/10 14:04:20 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::makeSound() const
{
    std::cout << "Meow~" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Cat assigned" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return (*this);
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat copy-constructed" << std::endl;
    brain = new Brain(*other.brain);
}

Cat::Cat() : brain(new Brain())
{
    type = "Cat";
    std::cout << "Cat constructed" << std::endl;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destroyed" << std::endl;
}
