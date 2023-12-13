/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:18:04 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/12/07 13:08:28 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
    this->type = "cure";
    std::cout << "Cure Default Constructor is Called" << std::endl;
}

Cure::Cure(std::string const &type) {
    (void)type;
    this->type = "cure";
    std::cout << "Cure Constructor is Called" << std::endl;
}

Cure::Cure(const Cure &other) {
    *this = other;
    std::cout << "Cure Copy Constructor is Called" << std::endl;
}

Cure &Cure::operator=(const Cure &other) {
    if (this != &other) {
        std::cout << "Cure Copy Assigment is Called" << std::endl;
        this->type = other.type;
    }
    return *this;
}

Cure::~Cure() {
    std::cout << "Cure Destructor is Called" << std::endl;
}

AMateria *Cure::clone() const {
    AMateria *obj = new Cure();
    return obj;
}

void Cure::use(ICharacter& target) {
    std::cout << " * heals " << target.getName() << "'s wounds * " << std::endl;
}