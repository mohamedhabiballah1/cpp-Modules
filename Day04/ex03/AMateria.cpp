/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:47:01 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/12/05 14:28:39 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"

AMateria::AMateria() {
    std::cout << "AMateria Default Constructor is Called" << std::endl;
}

AMateria::AMateria(std::string const &type) {
    this->type = type;
    std::cout << "AMateria Constructor is Called" << std::endl;
}

AMateria::AMateria(const AMateria &other) {
    *this = other;
    std::cout << "AMateria Copy Constructor is Called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other) {
    if (this != &other) {
        std::cout << "AMateria Copy Assigment is Called" << std::endl;
        this->type = other.type;
    };
    return *this;
}

AMateria::~AMateria() {
    std::cout << "AMateria Destructor is Called" << std::endl;
}

std::string const &AMateria::getType() const {
    return type;
}
