/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:00:23 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/12/05 14:30:08 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(std::string const &type) {
    (void)type;
    this->type = "ice";
    std::cout << "Ice Default Constructor is Called" << std::endl;
}

Ice::Ice() {
    this->type = "ice";
    std::cout << "Ice Default Constructor is Called" << std::endl;
}

Ice::Ice(const Ice &other) {
    *this = other;
    std::cout << "Ice Copy Constructor is Called" << std::endl;
}

Ice &Ice::operator=(const Ice &other) {
    if (this != &other) {
        std::cout << "Ice Copy Assigment is Called" << std::endl;
        this->type = other.type;
    }
    return *this;
}

Ice::~Ice() {
    std::cout << "Ice Destructor is Called" << std::endl;
}

AMateria *Ice::clone() const {
    AMateria *obj = new Ice();
    return obj;
}

void Ice::use(ICharacter& target) {
    std::cout << " * shoots an ice bolt at " << target.getName() << " * " << std::endl;
}