/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:36:53 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/12/06 10:26:37 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    type = "Animal";
    std::cout << "Animal Default Constructor is Called" << std::endl;
}

Animal::Animal(const Animal &other) {
    *this = other;
    std::cout << "Animal Copy Constructor is Called" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
    if (this != &other) {
        std::cout << "Animal Copy Assignment is Called" << std::endl;
        this->type = other.type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal Default Destructor is Called" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Animal Sound" << std::endl;
}

const std::string &Animal::getType() const {
    return type;
}