/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:48:14 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/12/05 14:23:40 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat Default Constructor is Called" << std::endl;
}

Cat::Cat(const Cat &other) {
    std::cout << "Cat Copy Constructor is Called" << std::endl;
    *this =  other;
}

Cat &Cat::operator=(const Cat &other) {
    if (this != &other) {
        std::cout << "Cat Copy Assingment is Called" << std::endl;
        this->type = other.type;
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat Default Destructor is Called" << std::endl;
}

void    Cat::makeSound() const {
    std::cout << "Meaw! Meaw!" << std::endl;
}