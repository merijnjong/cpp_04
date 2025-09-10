/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:37:23 by mjong             #+#    #+#             */
/*   Updated: 2025/09/10 13:53:29 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "--- Correct Animals ---\n";
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    i->makeSound(); // Meow
    j->makeSound(); // Woof
    meta->makeSound(); // Generic

    const Animal* custom = new Animal("CustomAnimal");
    std::cout << "Custom Animal type: " << custom->getType() << std::endl;
    custom->makeSound();

    delete meta;
    delete j;
    delete i;
    delete custom;

    std::cout << "\n--- Wrong Animals ---\n";
    const WrongAnimal* wa = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();

    std::cout << wc->getType() << std::endl;
    wc->makeSound();
    wa->makeSound();

    const WrongAnimal* wrongCustom = new WrongAnimal("CustomWrongAnimal");
    std::cout << "Custom WrongAnimal type: " << wrongCustom->getType() << std::endl;
    wrongCustom->makeSound();

    delete wa;
    delete wc;
    delete wrongCustom;

    return (0);
}
