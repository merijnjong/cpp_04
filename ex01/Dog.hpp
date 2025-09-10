/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:21:08 by mjong             #+#    #+#             */
/*   Updated: 2025/09/10 14:00:56 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		void makeSound() const;
	
		Dog &operator=(const Dog &other);

		Dog(const Dog &other);

		Dog();
		~Dog();

	private:
    	Brain* brain;
};

#endif
