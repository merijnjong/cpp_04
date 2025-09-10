/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:30:22 by mjong             #+#    #+#             */
/*   Updated: 2025/09/10 13:49:22 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		std::string getType() const;

		void makeSound() const;

    	WrongAnimal &operator=(const WrongAnimal &other);

    	WrongAnimal(const WrongAnimal &other);
		WrongAnimal(const std::string &type);  

		WrongAnimal();
		~WrongAnimal();

	protected:
		std::string type;
};

#endif
