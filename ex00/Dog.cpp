/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:21:05 by mjong             #+#    #+#             */
/*   Updated: 2025/09/10 13:51:43 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog::makeSound() const
{
	std::cout << "Woof! Woof!" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	Animal::operator=(other);
	return (*this);
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog copy-constructed" << std::endl;
}

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog constructed" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destroyed" << std::endl;
}
