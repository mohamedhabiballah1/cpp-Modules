/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:48:14 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/11/27 10:44:02 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "Cat Default Constructor is Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) {
    *this =  other;
    std::cout << "Cat Copy Constructor is Called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    if (this != &other) {
        std::cout << "Cat Copy Assingment is Called" << std::endl;
        this->type = type;
    }
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "Cat Default Destructor is Called" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "" "Wrong Cat Sound" << std::endl;
}