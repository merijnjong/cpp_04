/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:25:49 by mjong             #+#    #+#             */
/*   Updated: 2025/09/10 13:52:04 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::makeSound() const
{
    std::cout << "Meow~" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    Animal::operator=(other);
    return (*this);
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat copy-constructed" << std::endl;
}

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat constructed" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destroyed" << std::endl;
}
