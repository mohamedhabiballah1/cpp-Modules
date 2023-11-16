/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:16:39 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/11/06 13:49:03 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(){
    std::cout << "FlagTrap Default Constructor is Called" << std::endl;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

FlagTrap::FlagTrap(std::string name) : ClapTrap(name) {
    std::cout << "FlagTrap " << this->getName() << " has been created." << std::endl;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

FlagTrap::FlagTrap(const FlagTrap &other) : ClapTrap(other.Name){
    std::cout << "FlagTrap Copy Constructor Called" << std::endl;
    *this = other;
}

FlagTrap &FlagTrap::operator=(const FlagTrap &other) {
    if (this != &other) {
        std::cout << "FlagTrap Copy Assignment Operator Called" << std::endl;
        this->Name = other.Name;
        this->HitPoints = other.HitPoints;
        this->AttackDamage = other.AttackDamage;
        this->EnergyPoints = other.EnergyPoints;
    }
    return *this;
}

FlagTrap::~FlagTrap() {
    std::cout << "FlagTrap " << this->getName() << " has been destroyed." << std::endl;
}

void FlagTrap::highFivesGuys() {
    std::cout << "FragTrap " << this->getName() << " requests a high five! Who's up for it?" << std::endl;
}