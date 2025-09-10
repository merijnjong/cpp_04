/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:16:15 by mjong             #+#    #+#             */
/*   Updated: 2025/09/10 14:31:54 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string Animal::getType() const
{
    return (type);
}

void Animal::makeSound() const
{
    std::cout << "Some generic animal sound..." << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	type = other.type;
    return (*this);
}

Animal::Animal(const Animal &other) : type(other.type)
{
	std::cout << "Animal copy-constructed" << std::endl;
}

Animal::Animal(const std::string &type) : type(type)
{
	std::cout << "Animal constructed with type: " << type << std::endl;
}

Animal::Animal() : type("Animal")
{
	std::cout << "Animal constructed" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destroyed" << std::endl;
}
