/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 13:35:04 by mjong             #+#    #+#             */
/*   Updated: 2025/09/10 13:35:52 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		void makeSound() const;

		WrongCat& operator=(const WrongCat& other);

		WrongCat(const WrongCat& other);

		WrongCat();
		~WrongCat();
};

#endif
