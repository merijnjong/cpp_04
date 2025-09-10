/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 13:57:00 by mjong             #+#    #+#             */
/*   Updated: 2025/09/10 14:00:20 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:
		const std::string& getIdea(int index) const;
		void setIdea(int index, const std::string& idea);
		
		Brain& operator=(const Brain &other);

		Brain(const Brain &other);
	
		Brain();
		~Brain();

	private:
		std::string ideas[100];
};

#endif
