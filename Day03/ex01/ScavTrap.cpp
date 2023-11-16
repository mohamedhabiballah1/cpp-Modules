/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:37:16 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/11/06 12:51:49 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap Default Constructor is Called." << std::endl;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap " << this->getName() << " has been created." << std::endl;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other.Name) {
    std::cout << "ScavTrap Copy Constructor Called" << std::endl;
    *this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other) {
        std::cout << "ScavTrap Copy Assignment Operator Called" << std::endl;
        this->Name = other.Name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoints = other.EnergyPoints;
        this->AttackDamage = other.AttackDamage;
    }
    return *this;
}

void    ScavTrap::attack(const std::string& target) {
    if (HitPoints <= 0 || EnergyPoints <= 0) {
        std::cout << "ScavTrap " << this->getName() << " can't attack. Not enough hit points or energy points!" << std::endl;
    } else {
        std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
        EnergyPoints--;
    }
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << Name << " has been destroyed." << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->getName() << " is now in Gatekeeper mode." << std::endl;
}
