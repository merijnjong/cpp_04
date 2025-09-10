/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:37:23 by mjong             #+#    #+#             */
/*   Updated: 2025/09/10 14:06:29 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "--- Basic Test ---" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;

    std::cout << "\n--- Array Test ---" << std::endl;
    const int size = 4;
    Animal* animals[size];

    for (int k = 0; k < size; k++) {
        if (k < size / 2)
            animals[k] = new Dog();
        else
            animals[k] = new Cat();
    }

    for (int k = 0; k < size; k++)
        delete animals[k];

    std::cout << "\n--- Deep Copy Test ---" << std::endl;
    Dog d1;
    d1.makeSound();
    d1.operator=(d1);

    d1.makeSound();

    d1.operator=(Dog());

    d1.makeSound();

    d1 = Dog();

    d1 = Dog();
    d1.operator=(Dog());
    d1.operator=(Dog());

    Dog d2(d1);
    std::cout << "Deep copy check:" << std::endl;
    d1 = d2;
    d1.operator=(d2);

    std::cout << "End of tests" << std::endl;

    return (0);
}
