/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:21:05 by mjong             #+#    #+#             */
/*   Updated: 2025/09/10 14:02:29 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog::makeSound() const
{
	std::cout << "Woof! Woof!" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assigned" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return (*this);
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog copy-constructed" << std::endl;
    brain = new Brain(*other.brain);
}

Dog::Dog() : brain(new Brain())
{
    type = "Dog";
    std::cout << "Dog constructed" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destroyed" << std::endl;
}
