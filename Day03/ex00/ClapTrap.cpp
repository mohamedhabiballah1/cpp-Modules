/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:43:42 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/11/09 13:35:25 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap Default Constructor is Called" << std::endl;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) : Name(name) {
    std::cout << "ClapTrap " << Name << " has been created." << std::endl;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    std::cout << "ClapTrap Copy Constructor Called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    if (this != &other) {
        std::cout << "ClapTrap Copy Assignment Operator Called" << std::endl;
        this->Name = other.Name;
        this->HitPoints = other.HitPoints;
        this->AttackDamage = other.AttackDamage;
        this->EnergyPoints = other.EnergyPoints;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << Name << " has been destroyed." << std::endl;
}

void    ClapTrap::attack(const std::string& target) {
    if (HitPoints <= 0 || EnergyPoints <= 0) {
        std::cout << "ClapTrap " << this->getName() << " can't attack. Not enough hit points or energy points!" << std::endl;
    } else {
        std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
        EnergyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount < 0) {
        std::cout << "ClapTrap " << this->getName() << "Can't take a negative amount of damage" << std::endl;
        return ;
    } else if (HitPoints <= 0) {
        std::cout << "ClapTrap " << this->getName() << " is already out of hit points. Can't take more damage!" << std::endl;
    } else {
        std::cout << "ClapTrap " << this->getName() << " takes " << amount << " points of damage!" << std::endl;
        HitPoints -= amount;
        if (HitPoints <= 0) {
            std::cout << "ClapTrap " << this->getName() << " has run out of hit points and is destroyed!" << std::endl;
        }
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (HitPoints <= 0) {
        std::cout << "ClapTrap " << this->getName() << " is destroyed and can't be repaired!" << std::endl;
    } else if (EnergyPoints <= 0) {
        std::cout << "ClapTrap " << this->getName() << " doesn't have enough energy points to be repaired!" << std::endl;
    } else {
        std::cout << "ClapTrap " << this->getName() << " is repaired for " << amount << " hit points!" << std::endl;
        HitPoints += amount;
        EnergyPoints--;
    }
}

const std::string &ClapTrap::getName() const {
    return Name;
}

void ClapTrap::setName(const std::string name) {
    this->Name = name;
}