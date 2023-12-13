/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:44:54 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/12/11 11:26:36 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (size_t i = 0; i < 4; i++) {
        inventory[i] = NULL;
    }
    std::cout << "MateriaSource Default constructor is Called" << std::endl;
}


MateriaSource::MateriaSource(const MateriaSource &other) {
    std::cout << "MateriaSource Copy Constructor is Called" << std::endl;
    for (size_t i = 0; i < 4; i++) {
        inventory[i] = NULL;
    }
    for (size_t i = 0; i < 4; i++) {
        if (other.inventory[i] != NULL) {
            this->inventory[i] = other.inventory[i]->clone();
        }
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {

    if (this != &other) {
        std::cout << "MateriaSource Copy Assigment is Called" << std::endl;
        for (size_t i = 0; i < 4; i++) {
            if (this->inventory[i] != NULL) {
                delete this->inventory[i];
                this->inventory[i] = NULL;
            }
        }
        for (size_t i = 0; i < 4; i++) {
            if (other.inventory[i] != NULL) {
                this->inventory[i] = other.inventory[i]->clone();
            }
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *m) {
    for (size_t i = 0; i < 4; i++) {
        if (this->inventory[i] == NULL) {
            this->inventory[i] = m;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type) {
    for (size_t i = 0; i < 4; i++){
        if (this->inventory[i] != NULL) {
            if (this->inventory[i]->getType() == type) {
                return this->inventory[i]->clone();
            }
        }
    }
    return 0;
}

MateriaSource::~MateriaSource() {
    for (size_t i = 0; i < 4; i++) {
        if (this->inventory[i] != NULL)
            delete this->inventory[i];
    }
    std::cout << "MateriaSource Destructor is Called" << std::endl;
}
