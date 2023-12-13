/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:02:14 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/12/11 11:31:44 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
    for (size_t i = 0; i < 4; i++) {
        inventory[i] = NULL;
    }
    std::cout << "Character Default constructor is Called" << std::endl;
}

Character::Character(std::string name) {
    this->name = name;
    for (size_t i = 0; i < 4; i++) {
        inventory[i] = NULL;
    }
    std::cout << "Character Constructor is Called" << std::endl;
}

Character::Character(const Character &other) {
    std::cout << "Character Copy Constructor is Called" << std::endl;
    for (size_t i = 0; i < 4; i++) {
        inventory[i] = NULL;
    }
    this->name = other.name;
    for (size_t i = 0; i < 4; i++) {
        if (other.inventory[i] != NULL) {
            this->inventory[i] = other.inventory[i]->clone();
        }
    }
}

Character &Character::operator=(const Character &other) {
    if (this != &other) {
        std::cout << "Character Copy Assignment is Called" << std::endl;
        this->name = other.name;
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

std::string const &Character::getName() const {
    return name;
}

void Character::equip(AMateria *m) {
    for (size_t i = 0; i < 4; i++) {
        if (this->inventory[i] == NULL) {
            this->inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4 && this->inventory[idx] != NULL) {
        this->inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter &target) {
    if (idx >= 0 && idx < 4 && this->inventory[idx] != NULL) {
        this->inventory[idx]->use(target);
    }
}

Character::~Character() {
    for (size_t i = 0; i < 4; i++) {
        if(this->inventory[i] != NULL) {
            delete this->inventory[i];
        }
    }
    std::cout << "Character Destructor is Called" << std::endl;
}
