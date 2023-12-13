/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:48:14 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/12/11 10:55:58 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    brains = new Brain;
    std::cout << "Dog Default Constructor is Called" << std::endl;
}

Dog::Dog(const Dog &other) {
    std::cout << "Dog Copy Constructor is Called" << std::endl;
    this->type = other.type;
    this->brains = new Brain(*other.brains);
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other) {
        std::cout << "Dog Copy Assingment is Called" << std::endl;
        this->type = other.type;
        delete this->brains;
        this->brains = new Brain(*other.brains);
    }
    return *this;
}

Dog::~Dog() {
    delete brains;
    std::cout << "Dog Default Destructor is Called" << std::endl;
}

void    Dog::makeSound() const  {
    std::cout << "Woof! Woof!" << std::endl;
}