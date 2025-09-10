/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:37:23 by mjong             #+#    #+#             */
/*   Updated: 2025/09/10 14:34:15 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "--- Abstract Animal Test ---\n";

    std::cout << "Creating Dog and Cat instances through Animal pointers...\n";
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "Dog type: " << dog->getType() << std::endl;
    std::cout << "Cat type: " << cat->getType() << std::endl;

    std::cout << "Dog makes sound: ";
    dog->makeSound();

    std::cout << "Cat makes sound: ";
    cat->makeSound();

    delete dog;
    delete cat;

    std::cout << "\n--- Array of Animals ---\n";
    const int size = 4;
    Animal* animals[size];

    for (int i = 0; i < size; i++) {
        if (i < size / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < size; i++) {
        std::cout << "Animal " << i << " type: " << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
        delete animals[i];
    }

    std::cout << "\n--- Polymorphism with deep copy ---\n";
    Dog d1;
    d1.makeSound();

    Dog d2(d1);
    d2.makeSound();

    Cat c1;
    Cat c2 = c1;
    c2.makeSound();

    return (0);
}
