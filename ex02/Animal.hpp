/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:10:00 by mjong             #+#    #+#             */
/*   Updated: 2025/09/10 14:33:32 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		std::string getType() const;

		virtual void makeSound() const = 0;
		
		Animal &operator=(const Animal &other);
		
		Animal(const Animal &other);
		Animal(const std::string &type);
		
		Animal();
		virtual ~Animal();

	protected:
		std::string type;
};

#endif
