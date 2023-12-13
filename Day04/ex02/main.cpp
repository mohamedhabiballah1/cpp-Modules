/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:00:41 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/12/13 11:55:43 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    int arraySize = 2;
    Animal *animalArray[arraySize * 2];

    std::cout << "\n========== CONSTRUCTORS ==========\n" << std::endl;
    
    for (int k = 0; k < arraySize; k++) {
        animalArray[k] = new Dog();
        animalArray[k + arraySize] = new Cat();
    }

    std::cout << "\n========== ANIMALS SOUNDS ==========\n" << std::endl;

    for (int k = 0; k < (arraySize * 2); k++) {
        animalArray[k]->makeSound();
    }

    std::cout << "\n========== DESTRUCTORS ==========\n" << std::endl;

    for (int k = 0; k < arraySize * 2; k++) {
        delete animalArray[k];
    }

    return 0;
}