/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:20:18 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/11/09 15:53:50 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    std::cout << "DiamonTrap Default Constructor is Called" << std::endl;
    this->HitPoints = FlagTrap::HitPoints;
    this->EnergyPoints = ScavTrap::EnergyPoints;
    this->AttackDamage = FlagTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(std::string name) {
    this->name = name;
    ClapTrap::Name = name + "_clap_name";
    this->HitPoints = FlagTrap::HitPoints;
    this->EnergyPoints = ScavTrap::EnergyPoints;
    this->AttackDamage = FlagTrap::AttackDamage;
    std::cout << "DiamondTrap " << this->name << " has been created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) {
    std::cout << "DiamondTrap Copy Constructor Called" << std::endl;
    *this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    if (this != &other) {
        std::cout << "DiamondTrap Copy Assignment Operator Called" << std::endl;
        this->ClapTrap::Name = other.name + "_clap_name";
        this->name = other.name;
        this->HitPoints = other.HitPoints;
        this->AttackDamage = other.AttackDamage;
        this->EnergyPoints = other.EnergyPoints;
    }
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << this->getName() << " has been destroyed." << std::endl;
}

void    DiamondTrap::whoAmI() {
    std::cout << "I am DiamondTrap " << this->getName() << " and my ClapTrap name is " << ClapTrap::Name << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}

std::string &DiamondTrap::getName() {
    return name;
}

void DiamondTrap::setName(std::string &name) {
    this->name = name;
}